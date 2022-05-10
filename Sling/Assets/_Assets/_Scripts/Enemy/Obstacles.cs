using UnityEngine;
using GamerWolf.Utils;
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
public enum ObstaclesType{White,Dark}
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
        rb2D.AddForce(new Vector2(Random.Range(-1,1),Random.Range(-1,1)));
        
    }
    private void DestroyWithDelay(){
        gameObject.SetActive(false);
    }

    public void OnObjectReuse(){
        dOTweenAnimation.DOPlay();
        DestroyMySelf(lifeTime);
    }
    public ObstaclesType GetObstaclesType(){
        return obstaclesType;
    }
    
}
