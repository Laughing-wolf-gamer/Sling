using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
public class SettingsManager : MonoBehaviour {
    
    
    [SerializeField] private GameDataSO gameDataSO;

    [SerializeField] private Color onColor = Color.white,offColor = Color.white;

    [SerializeField] private Button soundButton,musicButton;

    private void Start(){
        Check();
    }

    public void ToggleSound(){
        gameDataSO.ToggleSound();
        Check();
    }
    public void ToggleMusic(){
        gameDataSO.ToggleMusic();
        Check();
    }
    private void Check(){
        if(gameDataSO.GetSoundState()){
            soundButton.targetGraphic.color = onColor;
        }else{
            soundButton.targetGraphic.color = offColor;
        }
        if(gameDataSO.GetMusicState()){
            musicButton.targetGraphic.color = onColor;
        }else{
            musicButton.targetGraphic.color = offColor;
        }
    }
    public void OpenLeaderBoard(){
        PlayGamesController.ShowLeaderboardUI();
    }
    public void OpenAcheivemntsWindow(){
        PlayGamesController.ShowAchivmenetUI();
    }
}
