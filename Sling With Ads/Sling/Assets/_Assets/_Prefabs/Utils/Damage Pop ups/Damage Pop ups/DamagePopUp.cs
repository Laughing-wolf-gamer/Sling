using TMPro;
using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
public class DamagePopUp : MonoBehaviour, IPooledObject {
    [SerializeField] private float lifeTime;
    [SerializeField] private Color normalColor,criticalHitColor;
    [SerializeField] private DOTweenAnimation scaleAnimaiton;
    [SerializeField] private float moveYAmount = 4f;
    [SerializeField] private TextMeshPro damageAmountText;

    [SerializeField] private float maxLifeTime;
    private Transform lookPoint;
    private void Start(){
        lookPoint = Camera.main.transform;
    }
    // private void Update(){
    //     // transform.LookAt(lookPoint);
    //     // transform.position += new Vector3(0f,moveYAmount * Time.deltaTime,0f);
        
    // }
    
    public void DestroyMySelf(float delay = 0){
        Invoke(nameof(DistroyNow),delay);
    }
    public void DistroyNow(){
        gameObject.SetActive(false);
        scaleAnimaiton.DORestart();
    }

    

    public void SetHitAmount(int amount,bool isCritical = false){
        if(isCritical){
            damageAmountText.color = criticalHitColor;
        }else{
            damageAmountText.color = normalColor;
        }
        damageAmountText.SetText(string.Concat("+",amount.ToString()));
        scaleAnimaiton.DOPlay();
    }
    public void SetScoreText(string text,float size){
        damageAmountText.SetText(text);
        damageAmountText.fontSize = size;
    }

    public void OnObjectReuse(){
        scaleAnimaiton.DORestart();
        if(lifeTime > 1f){
            maxLifeTime = lifeTime;
        }
        DestroyMySelf(maxLifeTime);
    }
}
