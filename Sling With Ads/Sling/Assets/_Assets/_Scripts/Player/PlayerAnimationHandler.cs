using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class PlayerAnimationHandler : MonoBehaviour {
    private Animator animator;


    private void Awake(){
        animator = GetComponent<Animator>();
    }
    public void MoveEyes(float currentUPTime){
        animator.SetFloat("Eye Threshold",currentUPTime);
    }
    public void Squicing(bool value){
        animator.SetTrigger("Squish");
    }
}
