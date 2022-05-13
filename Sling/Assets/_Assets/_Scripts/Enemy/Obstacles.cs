using UnityEngine;
using GamerWolf.Utils;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
public enum ObstaclesType{White,Dark,WhiteSpikes,DarkSpikes}
public class Obstacles : MonoBehaviour,IPooledObject{

    [SerializeField] private float lifeTime;     
    [SerializeField] private float maxGravity;
    [SerializeField] private float currentGravity;
    [SerializeField] private ObstaclesType obstaclesType;
    [SerializeField] private DOTweenAnimation dOTweenAnimation;
    
    private Rigidbody2D rb2D;

    private void Awake(){
        rb2D = GetComponent<Rigidbody2D>();
     
    }
    private void Start(){
        currentGravity = maxGravity;
    }
    public void DestroyMySelf(float delay = 0f){
        
        Invoke(nameof(DestroyWithDelay),delay);
        if(obstaclesType == ObstaclesType.WhiteSpikes || obstaclesType == ObstaclesType.DarkSpikes){
            rb2D.AddForce(transform.right * 20f,ForceMode2D.Impulse);
        }else{
            rb2D.AddForce(new Vector2(Random.Range(-1,1),Random.Range(-1,1)));
        }

        
        
    }
    private void DestroyWithDelay(){
        gameObject.SetActive(false);
    }

    public void OnObjectReuse(){
        if(dOTweenAnimation != null){
            dOTweenAnimation.DOPlay();
        }else{
            gameObject.SetActive(true);
        }
        DestroyMySelf(lifeTime);
    }
    public ObstaclesType GetObstaclesType(){
        return obstaclesType;
    }
    
    
}
