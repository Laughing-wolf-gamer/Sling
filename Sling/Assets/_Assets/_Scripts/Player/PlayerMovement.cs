using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public class PlayerMovement : MonoBehaviour {
    [SerializeField] private float normalDrag = 1.8f;
    [SerializeField] private float upForce = 5;
    [SerializeField] private float moveSpeed;
    [SerializeField] private float currentDrag;
    [SerializeField] private LineRenderer lr;
    [SerializeField] private PlayerAnimationHandler animationHandler;


    [Header("Power Up")]
    [SerializeField] private float maxHealingTime;
    [SerializeField] private float maxSheildActiveTime;
    [SerializeField] private GameObject shieldPowerUpObject;
    private GravityAttractor attractor;
    private Rigidbody2D rb2D;
    private GravityBody body;
    private PlayerInput playerInput;
    private bool igonrCollsion;
    private bool canHeal,canSheild,canShootSpike;
    
    private void Awake(){
        playerInput = GetComponent<PlayerInput>();
        rb2D = GetComponent<Rigidbody2D>();
        body = GetComponent<GravityBody>();
    }
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
        currentDrag = normalDrag;
        
    }
    private float currentFlightTime;
    private void Update(){
        
        if(playerInput.InputAvailable()){
            
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
                // animationHandler.Squicing(false);
            }else{
                currentDrag -= Time.deltaTime;
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
    private void OnTriggerEnter2D(Collider2D coli){
        
        if(coli.transform.TryGetComponent<Obstacles>(out Obstacles body)){
            if(body.GetObstaclesType() == ObstaclesType.White){
                if(igonrCollsion){
                    return;
                }
                currentFlightTime = 2f;
                GameObject effectObject = ObjectPoolingManager.current.SpawnFromPool(PoolObjectTag.onPlayerCollidingEffect,coli.transform.position,Quaternion.identity);
                animationHandler.Squicing(true);
                if(effectObject.TryGetComponent<ParticleSystem>(out ParticleSystem effect)){
                    effect.Play();
                }
                ScreenShakeManager.current.StartShake();
                igonrCollsion = true;
                body.transform.parent.gameObject.SetActive(false);
                currentDrag = normalDrag;
                rb2D.AddForce(transform.up * upForce,ForceMode2D.Impulse);
                Invoke(nameof(ResetCollison),0.1f);
            }else{
                if(!canHeal){
                    GameHandler.current.GameOver();
                    gameObject.SetActive(false);
                }
                
            }
        }
    }
    private void ResetCollison(){
        igonrCollsion = false;
    }
    public void UseHealPowerUp(){
        // Healing 
        canHeal = true;
        if(canHeal){
            StartCoroutine(HealPowerUpRoutine());
        }
    }
    private IEnumerator HealPowerUpRoutine(){
        yield return new WaitForSeconds(maxHealingTime);
        canHeal = false;
    }
    public void UseSheildPowerUp(){
        // Make a sheild around the player
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
        shieldPowerUpObject.SetActive(canSheild);
    }
    public void AttackSpikePowerUp(){
        // attack with white spikes which kills the dark obstacles.
        SpawnSpike(5,PoolObjectTag.PowerUps_WhiteSpike);
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
}
