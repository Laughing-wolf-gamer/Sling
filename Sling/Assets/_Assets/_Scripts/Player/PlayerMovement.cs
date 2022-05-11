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
    private GravityAttractor attractor;
    private Rigidbody2D rb2D;
    private GravityBody body;
    private PlayerInput playerInput;
    private bool igonrCollsion;
    private void Awake(){
        playerInput = GetComponent<PlayerInput>();
        rb2D = GetComponent<Rigidbody2D>();
        body = GetComponent<GravityBody>();
    }
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
        currentDrag = normalDrag;
        
    }
    
    private void Update(){
        
        if(playerInput.InputAvailable()){
            body.SetActiveGravity(true);
            if(playerInput.isTouching){
                // currentDrag = normalDrag;
                // body.SetActiveGravity(false);
                // rb2D.AddForce(transform.right * moveSpeed,ForceMode2D.Force)
                transform.Translate(transform.right * moveSpeed * Time.deltaTime,Space.World);
            }
            if(currentDrag <= 0f){
                currentDrag = 0f;
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
                
                GameObject effectObject = ObjectPoolingManager.current.SpawnFromPool(PoolObjectTag.onPlayerCollidingEffect,coli.transform.position,Quaternion.identity);
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
                gameObject.SetActive(false);
            }
        }
    }
    private void ResetCollison(){
        igonrCollsion = false;
    }
}
