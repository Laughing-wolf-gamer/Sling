using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
[RequireComponent(typeof(Rigidbody2D))]
public class PowerUps : MonoBehaviour,IPooledObject {
    [SerializeField] private float lifeTime;
    
    [SerializeField] private PowerUpSO powerUpObject;

    private Rigidbody2D rb2D;

    private void Awake(){
        rb2D = GetComponent<Rigidbody2D>();
    }

    public PowerUpType GetPowerUpType(){
        return powerUpObject.powerUpType;
    }
    public void DestroyMySelf(float delay = 0){
        Invoke(nameof(DestroyNow),delay);
    }
    public void DestroyNow(){
        gameObject.SetActive(false);
    }

    public void OnObjectReuse(){
        gameObject.SetActive(true);
        DestroyMySelf(lifeTime);
        rb2D.AddForce(new Vector2(Random.Range(-1,1),Random.Range(-1,1)));
    }
    private void OnTriggerEnter2D(Collider2D coli2d){
        if(coli2d.TryGetComponent<PlayerMovement>(out PlayerMovement player)){
            GameObject objEffect = ObjectPoolingManager.current.SpawnFromPool(PoolObjectTag.onPowerUpPickUp,transform.position,Quaternion.identity);
            if(objEffect.TryGetComponent<ParticleSystem>(out ParticleSystem effect)){
                effect.Play();
            }
            
            switch(powerUpObject.powerUpType){
                case PowerUpType.Heal:
                    player.UseHealPowerUp();
                break;
                case PowerUpType.Spike:
                    player.AttackSpikePowerUp();
                break;
                case PowerUpType.Shield:
                    player.UseSheildPowerUp();
                break;
                case PowerUpType.ExtraJump:
                    player.UseExtraJump();
                break;
            }
            DestroyNow();
        }
    }
}
