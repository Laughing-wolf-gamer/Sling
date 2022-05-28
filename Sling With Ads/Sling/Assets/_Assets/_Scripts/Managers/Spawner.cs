using UnityEngine;
using GamerWolf.Utils;
using System.Collections;

public class Spawner : MonoBehaviour {
    

    [Header("Camera")]
    [SerializeField] private float minCamSize = 22f;
    [SerializeField] private float maxCamSize = 200f;

    [Header("Spawing")]
    [SerializeField] private LayerMask checkMask;
    [SerializeField] private int maxBlackObsatableAmount;
    [SerializeField] private int whiteObstacleAmount;
    [SerializeField] private int powerUpAmount;
    [SerializeField] private float spawnrate;
    [SerializeField] private float spawnRadius;
    [SerializeField] private Transform prefab;

    [SerializeField] private Transform player;
    
    [SerializeField] private PoolObjectTag[] powerUpTags;
    [SerializeField] private PoolObjectTag[] darkObstaclesTags;
    [SerializeField] private int currentSpawnAmount;
    [SerializeField] private ItemSO distanceBaseSkin;
    private Camera cam;
    private float currentFOv;
    
    private void Start(){
        cam = Camera.main;
        
    }
    private void Update(){
        if(Vector2.Distance(transform.position,player.position) > 300){
            if(!distanceBaseSkin.IsUnloacked()){
                distanceBaseSkin.SetUnlock(true);
            }
        }
        currentFOv = Vector2.Distance(transform.position,player.position);
        currentFOv = Mathf.Clamp(currentFOv,minCamSize,maxCamSize);
        cam.orthographicSize = currentFOv;
    }
    public void StartSpawn(){
        currentSpawnAmount = whiteObstacleAmount;
        Invoke(nameof(SpawnInitialLevel),1f);
        StartCoroutine(SpawnObstacles());
        StartCoroutine(PowerUpSpawnRoutne());
        StartCoroutine(SpawningRoutine());
    }
    private void SpawnInitialLevel(){
        Spawn(false,PoolObjectTag.FullWhite,currentSpawnAmount);
    }
    
    private IEnumerator SpawningRoutine(){
        yield return new WaitForSeconds(spawnrate);
        spawnRadius = Vector2.Distance(transform.position,player.position) + 5;
        if(spawnRadius < 0.5f){
            spawnRadius = 4f;
        }
        
        currentSpawnAmount = whiteObstacleAmount;
        Spawn(true,PoolObjectTag.FullWhite,currentSpawnAmount);
        yield return StartCoroutine(SpawningRoutine());
    }
    private IEnumerator SpawnObstacles(){
        yield return new WaitForSeconds(8);
        int rand = Random.Range(0,darkObstaclesTags.Length);
        Debug.Log("Spwaning " + darkObstaclesTags[rand]);
        Spawn(true,darkObstaclesTags[rand],maxBlackObsatableAmount);
        yield return StartCoroutine(SpawnObstacles());
    }
    private IEnumerator PowerUpSpawnRoutne(){
        yield return new WaitForSeconds(10);
        Debug.Log("Spwaning Power Ups");;
        int rand = Random.Range(0,powerUpTags.Length);
        int current = powerUpAmount;
        Debug.Log("Spwaning " + powerUpTags[rand]);
        Spawn(true,powerUpTags[rand],current);
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
            RaycastHit2D coli = Physics2D.CircleCast(pos,1.2f,Vector2.zero,0f,checkMask);
            if(coli.collider != null){
                if(coli.transform.GetComponent<Obstacles>() != null){
                    coli.transform.gameObject.SetActive(false);
                }
            }
            float angleDegree = angle * Mathf.Rad2Deg;
            Quaternion rot = Quaternion.Euler(0f,0f,angleDegree);
            if(tag == PoolObjectTag.DarkSpikes || tag == PoolObjectTag.PowerUps_WhiteSpike){
                ObjectPoolingManager.current.SpawnFromPool(tag,transform.position,rot);
            }else{
                ObjectPoolingManager.current.SpawnFromPool(tag,pos,rot);

            }
            
        }
    }
}
