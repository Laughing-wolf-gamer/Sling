using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnemyEyes : MonoBehaviour {
    
    [SerializeField] private Transform player;

    private void Update(){
        if(player != null){
            Vector2 dir = (player.position - transform.position).normalized;
            float angle = Mathf.Atan2(dir.y,dir.x) * Mathf.Rad2Deg + 90;
            transform.rotation = Quaternion.AngleAxis(angle,Vector3.forward);
        }
    }
}
