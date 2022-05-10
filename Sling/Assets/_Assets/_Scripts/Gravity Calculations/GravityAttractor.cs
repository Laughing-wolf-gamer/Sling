using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GravityAttractor : MonoBehaviour {
    
    
    public static GravityAttractor attractorInstance;

    private void Awake(){
        attractorInstance = this;
    }
    

    public void CalculateRoation(Transform _body){
        Vector3 dir = (_body.position - transform.position).normalized;
        Vector3 bodyUp = _body.up;
        _body.rotation = Quaternion.FromToRotation(bodyUp,dir) * _body.rotation;
    }

    public void Attract(Transform _body ,float gravity){
        Vector3 dir = (_body.position - transform.position).normalized;
        Vector3 bodyUp = _body.up;
        _body.rotation = Quaternion.FromToRotation(bodyUp,dir) * _body.rotation;
        Debug.DrawRay(_body.position,dir,Color.red,100f);
        if(_body.TryGetComponent<Rigidbody2D>(out Rigidbody2D rb)){
            rb.AddForce(dir * gravity,ForceMode2D.Force);
        }
    }

}
