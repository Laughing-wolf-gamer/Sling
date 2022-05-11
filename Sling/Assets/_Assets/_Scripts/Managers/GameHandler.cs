using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;
public class GameHandler : MonoBehaviour {

    
    [Header("Events")]
    [SerializeField] private UnityEvent onGameStart;
    [SerializeField] private UnityEvent onGamePlaying,onGameEnd;



    [Header("Testing")]
    [SerializeField] private bool isGamePlaying;
    [SerializeField] private bool isGameEnd;



    #region Singelton............
    public static GameHandler current{get;private set;}
    private void Awake(){
        current = this;
    }
    #endregion



    private void Start(){
        StartCoroutine(GameStartRoutine());
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
            yield return null;
        }
        onGameEnd?.Invoke();

    }


    public void StartGame(){
        isGamePlaying = true;
        isGameEnd = false;
    }
}
