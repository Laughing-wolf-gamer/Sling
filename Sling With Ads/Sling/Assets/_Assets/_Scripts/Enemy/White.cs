using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class White : Obstacles {
    private void OnCollsionEnter2D(Collision2D coli2D){
        if(GetObstaclesType() == ObstaclesType.WhiteSpikes){
            if(coli2D.transform.TryGetComponent<Obstacles>(out Obstacles obs)){
                if(obs.GetObstaclesType() == ObstaclesType.Dark){
                    obs.transform.parent.gameObject.SetActive(false);
                }
            }
        }
    }
   
}
