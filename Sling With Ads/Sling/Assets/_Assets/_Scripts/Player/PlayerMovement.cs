using System;
using GamerWolf;
using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
public class PlayerMovement : MonoBehaviour {
    [SerializeField] private float normalDrag = 1.8f;
    [SerializeField] private float upForce = 5;
    [SerializeField] private float moveSpeed;
    [SerializeField] private float currentDrag;
    [SerializeField] private LineRenderer lr;
    [SerializeField] private PlayerAnimationHandler animationHandler;


    [Header("Power Up")]
    [SerializeField] private Color spikePowerUpColor;
    [SerializeField] private Color healthPowerUpColor,sheildPowerUpColor,highJumpColor,normalColor;
    [SerializeField] private Camera m_cam;
    [SerializeField] private float maxHealingTime;
    [SerializeField] private float maxSheildActiveTime;
    
    [SerializeField] private GameObject shieldPowerUpObject;
    [SerializeField] private Collider2D centerColi;

    [SerializeField] private ItemSO powerUpCollectBasePowerUp;
    private GravityAttractor attractor;
    private Rigidbody2D rb2D;
    private GravityBody body;
    private PlayerInput playerInput;
    private bool igonrCollsion;
    private bool canHeal,canSheild,canShootSpike;
    private float currentFlightTime;
    private bool canReduceDrag;
    private int powerUpCollectedAmount;
    private void Awake(){
        playerInput = GetComponent<PlayerInput>();
        rb2D = GetComponent<Rigidbody2D>();
        body = GetComponent<GravityBody>();
    }
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
        canReduceDrag = true;
        currentDrag = normalDrag;
        ShowLine();
        GameHandler.current.onPlayerDead += ()=>{
            currentDrag = 0;
            centerColi.enabled = false;
            gameObject.SetActive(false);
            playerInput.ToggleInput(false);
        };
        GameHandler.current.onPlayerRevive += ()=>{
            gameObject.SetActive(true);
            playerInput.ToggleInput(true);
            rb2D.AddForce(transform.up * 30f,ForceMode2D.Impulse);
            Invoke(nameof(ActivateCentercollider),1f);
        };
        
    }
    private void Update(){
        
        if(playerInput.InputAvailable()){
            if(powerUpCollectedAmount > 5){
                if(!powerUpCollectBasePowerUp.IsUnloacked()){
                    powerUpCollectBasePowerUp.SetUnlock(true);
                }
            }
            if(currentFlightTime > 0){
                currentFlightTime -= Time.deltaTime;
            }
            if(currentFlightTime <= 1){
                if(currentFlightTime <= 0f){
                    currentFlightTime = 0;
                }
                animationHandler.MoveEyes(currentFlightTime);
            }else{
                animationHandler.MoveEyes(1f);
            }
            body.SetActiveGravity(true);
            if(playerInput.isTouching){
                transform.Translate(transform.right * moveSpeed * Time.deltaTime,Space.World);
            }
            
            
            if(currentDrag <= 0f){
                currentDrag = 0f;
                canReduceDrag = false;
                rb2D.AddForce(-transform.up * 2f,ForceMode2D.Force);
            }else{
                if(canReduceDrag){
                    currentDrag -= 0.1f;
                    
                }
            }

            rb2D.drag = currentDrag;
        }else{
            body.SetActiveGravity(false);
        }
        ShowLine();
    }
    
    private void ShowLine(){
        lr.SetPosition(0,transform.position);
        lr.SetPosition(1,attractor.transform.position);
    }
    public void FirstShoot(){
        ShowLine();
        rb2D.AddForce(transform.up * 50f,ForceMode2D.Impulse);
        Invoke(nameof(ActivateCentercollider),1f);
    }
    private void ActivateCentercollider(){
        centerColi.enabled = true;
    }
    private void OnTriggerEnter2D(Collider2D coli){
        
        if(coli.gameObject.CompareTag("White")){
            if(igonrCollsion){
                return;
            }
            Jump();
            GameObject effectObject = ObjectPoolingManager.current.SpawnFromPool(PoolObjectTag.onPlayerCollidingEffect,coli.transform.position,Quaternion.identity);
            animationHandler.Squicing(true);
            if(effectObject.TryGetComponent<ParticleSystem>(out ParticleSystem effect)){
                effect.Play();
            }
            ScreenShakeManager.current.StartShake();
            igonrCollsion = true;
            GameHandler.current.IncresaseScore();
            Invoke(nameof(ResetCollison),0.1f);
        }
        if(coli.gameObject.CompareTag("Black")){
            if(CanDie()){
                GameHandler.current.SetPlayerDead();
                int rand = UnityEngine.Random.Range(0,3);
                if(rand == 1){
                    AudioManager.current.PlayOneShotMusic(SoundType.PlayerDeath1);
                }else{
                    AudioManager.current.PlayOneShotMusic(SoundType.PlayerDeath2);
                }
                AdManager.current.ShowInterstitialAd();
            }else{
                Jump();
            }

        }
        if(coli.transform.parent.TryGetComponent<Obstacles>(out Obstacles obstacles)){
            obstacles.DestroyMySelf();
        }
        
    }
    private bool CanDie(){
        return !canHeal && !canSheild;
    }
    private void Jump(){
        AudioManager.current.PlayOneShotMusic(SoundType.Jump);
        currentDrag = normalDrag;
        rb2D.velocity = Vector2.zero;
        rb2D.AddForce(transform.up * upForce,ForceMode2D.Impulse);
        currentFlightTime = 1.5f;
        CancelInvoke(nameof(ActivateDrag));
        Invoke(nameof(ActivateDrag),0.7f);
    }
    private void ResetCollison(){
        igonrCollsion = false;
    }
    public void UseHealPowerUp(){
        powerUpCollectedAmount++;
        // Healing 
        m_cam.backgroundColor = healthPowerUpColor;
        AudioManager.current.PlayOneShotMusic(SoundType.PowerUp);
        canHeal = true;
        if(canHeal){
            StartCoroutine(HealPowerUpRoutine());
        }
    }
    private IEnumerator HealPowerUpRoutine(){
        yield return new WaitForSeconds(maxHealingTime);
        m_cam.backgroundColor = normalColor;
        canHeal = false;
    }
    public void UseSheildPowerUp(){
        powerUpCollectedAmount ++;
        // Make a sheild around the player
        m_cam.backgroundColor = sheildPowerUpColor;
        AudioManager.current.PlayOneShotMusic(SoundType.PowerUp);
        canSheild = true;
        canHeal = false;
        StopAllCoroutines();
        shieldPowerUpObject.SetActive(canSheild);
        if(canSheild){
            StartCoroutine(SheildPowerUpRoutine());
        }

    }
    private IEnumerator SheildPowerUpRoutine(){
        yield return new WaitForSeconds(maxSheildActiveTime);
        canSheild = false;
        m_cam.backgroundColor = normalColor;
        shieldPowerUpObject.SetActive(canSheild);
    }
    public void UseExtraJump(){
        powerUpCollectedAmount++;
        m_cam.backgroundColor = highJumpColor;
        AudioManager.current.PlayOneShotMusic(SoundType.LongJump);
        rb2D.AddForce(transform.up * upForce * 2,ForceMode2D.Impulse);
        StartCoroutine(ExtraJumpPowerUpRoutine());
    }
    private IEnumerator ExtraJumpPowerUpRoutine(){
        yield return new WaitForSeconds(1.5f);
        m_cam.backgroundColor = normalColor;
    }
    public void AttackSpikePowerUp(){
        m_cam.backgroundColor = spikePowerUpColor;
        StartCoroutine(SpikeUpRoutine());
        AudioManager.current.PlayOneShotMusic(SoundType.PowerUp);
        // attack with white spikes which kills the dark obstacles.
        SpawnSpike(5,PoolObjectTag.PowerUps_WhiteSpike);
    }
    private IEnumerator SpikeUpRoutine(){
        yield return new WaitForSeconds(1.5f);
        m_cam.backgroundColor = normalColor;
    }
    public void SpawnSpike(int currentSpawnAmount,PoolObjectTag tag){
        
        for (int i = 0; i < currentSpawnAmount; i++){
            float angle = i * Mathf.PI * 2 / currentSpawnAmount;
            float x = Mathf.Cos(angle) * 1;
            float y = Mathf.Sin(angle) * 1;
            Vector2 pos = transform.position;
            pos += new Vector2(x,y);
            float angleDegree = angle * Mathf.Rad2Deg;
            Quaternion rot = Quaternion.Euler(0f,0f,angleDegree);
            ObjectPoolingManager.current.SpawnFromPool(tag,pos,rot);
        }
    }
    private void ActivateDrag(){
        canReduceDrag = true;
        rb2D.AddForce(-transform.up * 20f,ForceMode2D.Impulse);
        GameHandler.current.CheckForFurthestLeap();
    }
}
