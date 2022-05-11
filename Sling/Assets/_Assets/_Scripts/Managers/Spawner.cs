using UnityEngine;
using GamerWolf.Utils;
using System.Collections;

public class Spawner : MonoBehaviour {
    

    [Header("Camera")]
    [SerializeField] private float minCamSize = 22f;
    [SerializeField] private float maxCamSize = 200f;

    [Header("Spawing")]
    [SerializeField] private int maxBlackObsatableAmount;
    [SerializeField] private int whiteObstacleAmount;
    [SerializeField] private int powerUpAmount;
    [SerializeField] private float spawnrate;
    [SerializeField] private float spawnRadius;
    [SerializeField] private Transform prefab;

    [SerializeField] private Transform player;
    [SerializeField] private PoolObjectTag[] randomTags;
    [SerializeField] private PoolObjectTag[] powerUpTags;
    [SerializeField] private int currentSpawnAmount;
    private Camera cam;
    private float currentFOv;
    private void Start(){
        cam = Camera.main;
    }
    private void Update(){

        currentFOv = Vector2.Distance(transform.position,player.position);
        currentFOv = Mathf.Clamp(currentFOv,minCamSize,maxCamSize);
        cam.orthographicSize = currentFOv;
    }
    public void StartSpawn(){
        currentSpawnAmount = whiteObstacleAmount;
        Spawn(false,PoolObjectTag.FullWhite,currentSpawnAmount);
        StartCoroutine(PowerUpSpawnRoutne());
        StartCoroutine(SpawningRoutine());
    }
    
    private IEnumerator SpawningRoutine(){
        yield return new WaitForSeconds(spawnrate);
        spawnRadius = Vector2.Distance(transform.position,player.position) + 5;
        if(spawnRadius < 0.5f){
            spawnRadius = 4f;
        }
        int rand = Random.Range(0,randomTags.Length);
        if(randomTags[rand] == PoolObjectTag.Half_white){
            currentSpawnAmount = maxBlackObsatableAmount;
        
        }else{
            currentSpawnAmount = whiteObstacleAmount;
        }
        Spawn(true,randomTags[rand],currentSpawnAmount);
        yield return StartCoroutine(SpawningRoutine());
    }
    private IEnumerator PowerUpSpawnRoutne(){
        yield return new WaitForSeconds(10);
        int rand = Random.Range(0,powerUpTags.Length);
        int current = powerUpAmount;
        Spawn(true,randomTags[rand],current);
        yield return StartCoroutine(PowerUpSpawnRoutne());
    }
    [ContextMenu("Spawn")]
    public void Spawn(bool _Random,PoolObjectTag tag,int spawnAmount){
        
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
