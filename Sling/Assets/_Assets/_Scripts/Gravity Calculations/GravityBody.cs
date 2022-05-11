using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[RequireComponent(typeof(Rigidbody2D))]
public class GravityBody : MonoBehaviour {
    [SerializeField] private float gravity = -10f;
    [SerializeField] private bool activateGravity;

    private GravityAttractor attractor;
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
    }
    private void FixedUpdate(){
        
        if(activateGravity){
            attractor.Attract(transform,gravity);
        }
    }
    
    public void SetActiveGravity(bool value){
        activateGravity = value;
    }
    public void SetGravity(float gravity){
        this.gravity = gravity;
    }

}
