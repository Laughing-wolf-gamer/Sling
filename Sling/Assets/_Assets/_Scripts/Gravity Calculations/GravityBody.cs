using UnityEngine;
using System.Collections;
using System.Collections.Generic;

[RequireComponent(typeof(Rigidbody2D))]
public class GravityBody : MonoBehaviour {
    [SerializeField] private float gravity = -10f;
    [SerializeField] private bool ActivateGravity;

    private GravityAttractor attractor;
    private void Start(){
        attractor = GravityAttractor.attractorInstance;
    }
    private void FixedUpdate(){
        attractor.Attract(transform,gravity);
        // if(ActivateGravity){
        // }else{
        //     // attractor.CalculateRoation(transform);
        // }
    }
    
    public void SetActiveGravity(bool value){
        ActivateGravity = value;
    }
    public void SetGravity(float gravity){
        this.gravity = gravity;
    }

}
