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
        Invoke(nameof(SpawnInitialLevel),.4f);
        StartCoroutine(SpawnObstacles());
        StartCoroutine(PowerUpSpawnRoutne());
        StartCoroutine(SpawningRoutine());
    }
    private void SpawnInitialLevel(){
        Spawn(false,PoolObjectTag.FullWhite,currentSpawnAmount);
    }
    
    private IEnumerator SpawningRoutine(){
        while(true){
            float difficulty = GetDifficultyFactor();
            float interval = Mathf.Max(0.3f,spawnrate / difficulty);
            yield return new WaitForSeconds(interval);

            spawnRadius = Vector2.Distance(transform.position,player.position) + 5;
            if(spawnRadius < 0.5f){
                spawnRadius = 4f;
            }
            currentSpawnAmount = Mathf.Max(1,Mathf.RoundToInt(whiteObstacleAmount * difficulty));
            Spawn(true,PoolObjectTag.FullWhite,currentSpawnAmount);
        }
    }
    private IEnumerator SpawnObstacles(){
        const float baseInterval = 8f;
        while(true){
            float difficulty = GetDifficultyFactor();
            float interval = Mathf.Max(2f,baseInterval / difficulty);
            yield return new WaitForSeconds(interval);

            int rand = Random.Range(0,darkObstaclesTags.Length);
            Debug.Log("Spwaning " + darkObstaclesTags[rand]);

            int darkAmount = Mathf.Clamp(
                Mathf.RoundToInt(maxBlackObsatableAmount * difficulty),
                1,
                maxBlackObsatableAmount * 3
            );
            Spawn(true,darkObstaclesTags[rand],darkAmount);
        }
    }
    private IEnumerator PowerUpSpawnRoutne(){
        const float baseInterval = 10f;
        while(true){
            float difficulty = GetDifficultyFactor();
            // Slightly reduce power-up frequency as difficulty increases.
            float interval = Mathf.Max(4f,baseInterval / Mathf.Max(1f,difficulty * 0.5f));
            yield return new WaitForSeconds(interval);

            Debug.Log("Spwaning Power Ups");
            int rand = Random.Range(0,powerUpTags.Length);
            int current = powerUpAmount;
            Debug.Log("Spwaning " + powerUpTags[rand]);
            Spawn(true,powerUpTags[rand],current);
        }
    }
    [ContextMenu("Spawn")]
    public void Spawn(bool _Random,PoolObjectTag tag,int spawnAmount){
        
        for (int i = 0; i < spawnAmount; i++){
            float angle = i * Mathf.PI * 2 / spawnAmount;
            float x = Mathf.Cos(angle) * spawnRadius;
            float y = Mathf.Sin(angle) * spawnRadius;

            bool spawned = false;
            const int maxTries = 5;

            for (int attempt = 0; attempt < maxTries && !spawned; attempt++){
                Vector2 pos = transform.position;
                float offsetYMultiplier = _Random ? Random.Range(-1f,1f) : 1f;

                // Small random radial offset on retries to avoid overlaps.
                float offsetRadius = spawnRadius + (attempt * 0.5f);
                float ox = Mathf.Cos(angle) * offsetRadius;
                float oy = Mathf.Sin(angle) * offsetRadius * offsetYMultiplier;

                pos += new Vector2(ox,oy);

                RaycastHit2D coli = Physics2D.CircleCast(pos,0.8f,Vector2.zero,0f,checkMask);
                if(coli.collider != null){
                    // Something already here, try another nearby position.
                    continue;
                }

                float angleDegree = angle * Mathf.Rad2Deg;
                Quaternion rot = Quaternion.Euler(0f,0f,angleDegree);

                if(tag == PoolObjectTag.DarkSpikes){
                    ObjectPoolingManager.current.SpawnFromPool(tag,Vector3.zero,rot);
                }else{
                    ObjectPoolingManager.current.SpawnFromPool(tag,pos,rot);
                }

                spawned = true;
            }
        }
    }

    private float GetDifficultyFactor(){
        if(GameHandler.current == null){
            return 1f;
        }

        int score = GameHandler.current.GetCurrentScore();
        // Grows with score but clamped to avoid extreme values.
        float factor = 1f + (score / 10f);
        return Mathf.Clamp(factor,1f,5f);
    }
}
