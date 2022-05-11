using UnityEngine;
using GamerWolf.Utils;
using System.Collections;
using System.Collections.Generic;
public class Spawner : MonoBehaviour {
    
    [SerializeField] private float spawnrate;
    [SerializeField] private int spawnAmount;
    [SerializeField] private float spawnRadius;
    [SerializeField] private Transform prefab;

    [SerializeField] private Transform player;
    [SerializeField] private PoolObjectTag[] randomTags;

    public void StartSpawn(){
        Spawn(false,PoolObjectTag.FullWhite);
        StartCoroutine(SpawningRoutine());
    }
    
    private IEnumerator SpawningRoutine(){
        yield return new WaitForSeconds(spawnrate);
        spawnRadius = Vector2.Distance(transform.position,player.position) + 5;
        int rand = Random.Range(0,randomTags.Length);
        Spawn(true,randomTags[rand]);
        yield return StartCoroutine(SpawningRoutine());
    }
    [ContextMenu("Spawn")]
    public void Spawn(bool _Random,PoolObjectTag tag){
        
        for (int i = 0; i < spawnAmount; i++){
            float angle = i * Mathf.PI * 2 / spawnAmount;
            float x = Mathf.Cos(angle) * spawnRadius;
            float y = Mathf.Sin(angle) * spawnRadius;
            Vector2 pos = transform.position;
            if(_Random){
                pos += new Vector2(x,y * Random.Range(-1f,1f));
            }else{
                pos += new Vector2(x,y);
            }
            float angleDegree = angle * Mathf.Rad2Deg;
            Quaternion rot = Quaternion.Euler(0f,0f,angleDegree);
            ObjectPoolingManager.current.SpawnFromPool(tag,pos,rot);
        }
    }
}
