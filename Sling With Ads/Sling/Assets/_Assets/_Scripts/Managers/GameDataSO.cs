using System.IO;
using UnityEngine;
using System.Runtime.Serialization.Formatters.Binary;

[CreateAssetMenu(fileName = "Game Data",menuName = "ScriptableObject/Data/Game Data")]
public class GameDataSO : ScriptableObject {
    [SerializeField] private GameSaveData gameSaveData;


    

    public bool HasAds(){
        return gameSaveData.settingsData.hasAdsInGame;
    }

    public bool IsNewHighscore(int currentScore){
        if(currentScore > gameSaveData.lastHighScore){
            gameSaveData.lastHighScore = currentScore;
            return true;
        }
        return false;

    }
    public bool IsSurvivedMoreThanLastTime(float currentTime){
        if(currentTime > gameSaveData.lastSurvivalTime){
            gameSaveData.lastSurvivalTime =  currentTime;
            return true;
        }
        return false;
    }
    

    public bool IsNewFurthestLeap(float newLeap){
        if(newLeap > gameSaveData.lastFurthestLeap){
            gameSaveData.lastFurthestLeap = newLeap;
            return true;
        }
        return false;

    }
    
    public float GetLastFurthestLeap(){
        return gameSaveData.lastFurthestLeap;
    }
    public void SetHasAds(bool value){
        gameSaveData.settingsData.hasAdsInGame = value;
    }
    public void ToggleMusic(){
        gameSaveData.settingsData.isMusicOn = !gameSaveData.settingsData.isMusicOn;
    }
    public void ToggleSound(){
        gameSaveData.settingsData.isSoundOn = !gameSaveData.settingsData.isSoundOn;
    }
    public bool GetSoundState(){
        return gameSaveData.settingsData.isSoundOn;
    }
    public bool GetMusicState(){
        return gameSaveData.settingsData.isMusicOn;
    }
    

    #region Saving And Loading..............
    
    [ContextMenu("Save")]
    public void Save(){
        string data = JsonUtility.ToJson(gameSaveData,true);
        BinaryFormatter formatter = new BinaryFormatter();
        FileStream file = File.Create(string.Concat(Application.persistentDataPath,"/",gameSaveData,name,".dat"));
        formatter.Serialize(file,data);
        file.Close();
    }

    [ContextMenu("Load")]
    public void Load(){
        if(File.Exists((string.Concat(Application.persistentDataPath,"/",gameSaveData,name,".dat")))){
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream Stream = File.Open(string.Concat(Application.persistentDataPath,"/",gameSaveData,name,".dat"),FileMode.Open);
            JsonUtility.FromJsonOverwrite(formatter.Deserialize(Stream).ToString(),gameSaveData);
            Stream.Close();
        }
    }

    #endregion
    
}
[System.Serializable]
public class GameSaveData{
    public int lastHighScore;
    public float lastSurvivalTime;
    public float lastFurthestLeap;

    [Header("Settings Data")]
    public SettingsData settingsData;
}

[System.Serializable]
public class SettingsData{
    public bool hasAdsInGame;
    public bool isMusicOn;
    public bool isSoundOn;
    public string playConsoleLink;
}
