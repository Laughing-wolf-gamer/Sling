using UnityEngine;
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
    private bool igonrCollsion;
    private void Awake(){
        rb2D = GetComponent<Rigidbody2D>();
        body = GetComponent<GravityBody>();
    }
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
        currentDrag = normalDrag;
        
    }
    
    private void Update(){
        
        if(Input.GetMouseButton(0)){
            rb2D.drag = currentDrag;
            // currentDrag = normalDrag;
            // body.SetActiveGravity(false);
            // rb2D.AddForce(transform.right * moveSpeed,ForceMode2D.Force)
            transform.Translate(transform.right * moveSpeed * Time.deltaTime,Space.World);
        }else{

            currentDrag -= 0.1f;
            if(currentDrag <= 0f){
                currentDrag = 0f;
            }
            // body.SetActiveGravity(true);
            rb2D.drag = currentDrag;
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
