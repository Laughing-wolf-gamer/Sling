using System;
using UnityEngine;
using GamerWolf.Utils;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
public enum StageCheck{
    Stage1,Stage2,Stage3,Stage4
}
public class GameHandler : MonoBehaviour {


    [Header("Game Data")]
    [SerializeField] private int score;
    [SerializeField] private GameDataSO gameData;
    [SerializeField] private StageCheck stageCheck;
    [SerializeField] private PlayerMovement player;
    
    [Header("Events")]
    [SerializeField] private UnityEvent onGameStart;
    [SerializeField] private UnityEvent onGamePlaying,onGameEnd;



    [Header("Testing")]
    [SerializeField] private bool isGamePlaying;
    [SerializeField] private bool isGameEnd;
    [SerializeField]private float currentSurvivalTime;
    [SerializeField] private float maxTimeSurvivalTimeStage1 = 10,maxTimeSurvivalTimeStage2 = 5,maxTimeSurvivalTimeStage3 = 5;


    private bool playAnimations;
    private bool isShownHighscoreAnimations;


    #region Action And Events....
    public Action OnScoreChange;
    #endregion

    #region Singelton............
    public static GameHandler current{get;private set;}
    private void Awake(){
        current = this;
    }
    #endregion



    private void Start(){
        StartCoroutine(GameStartRoutine());
        OnScoreChange += ()=>{
            if(score > 13){
                if(gameData.IsNewHighscore(score)){
                    
                    SpawnPopUP(string.Concat("2X Multiplier"),55f);
                }
            }
        };
    }


    private IEnumerator GameStartRoutine(){
        onGameStart?.Invoke();
        while(!isGamePlaying){
            yield return null;
        }
        yield return StartCoroutine(GamePlayingRoutine());
    }
    private IEnumerator GamePlayingRoutine(){
        onGamePlaying?.Invoke();
        while(!isGameEnd){
            
            currentSurvivalTime += Time.deltaTime;
            if(currentSurvivalTime >= maxTimeSurvivalTimeStage1){
                stageCheck = StageCheck.Stage2;
            }else if(currentSurvivalTime >= maxTimeSurvivalTimeStage2){
                stageCheck = StageCheck.Stage3;
            }else if(currentSurvivalTime >= maxTimeSurvivalTimeStage3){
                stageCheck = StageCheck.Stage4;
            }
            
            yield return null;
        }
        onGameEnd?.Invoke();
    }


    public void StartGame(){
        isGamePlaying = true;
        isGameEnd = false;
    }
    public void GameOver(){
        isGamePlaying = false;
        isGameEnd = true;
    }
    public void RestartGame(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void IncresaseScore(){
        switch(stageCheck){
            case StageCheck.Stage1:
                score += 1;

            break;
            case StageCheck.Stage2:
                score += 2;
            break;
            case StageCheck.Stage3:
                score += 5;
            break;
            case StageCheck.Stage4:
                score += 10;
            break;
        }
        OnScoreChange?.Invoke();
    }
    public void CheckForFurthestLeap(){
        if(player != null){
            float currentLeap = Vector2.Distance(transform.position,player.transform.position);
            if(gameData.IsNewFurthestLeap(currentLeap)){
                SpawnPopUP("FURTHEST LEAP",45.1f);
            }
        }
        if(!isShownHighscoreAnimations){
            if(currentSurvivalTime > 10){
                if(gameData.IsSurvivedMoreThanLastTime(currentSurvivalTime)){
                    SpawnPopUP(string.Concat("NEW HIGHSCORE"),45.1f);
                    isShownHighscoreAnimations = true;
                }
            }
        }
    }
    private void SpawnPopUP(string text,float textSize){
        DialogueManager.current.SetDialogue(text,textSize);
    }
    public int GetCurrentScore(){
        return score;
    }
    

    
}
