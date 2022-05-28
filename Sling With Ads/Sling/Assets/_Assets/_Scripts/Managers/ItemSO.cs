using System.IO;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;

[CreateAssetMenu(fileName = "New Item",menuName = "ScriptableObject/Item SO")]
public class ItemSO : ScriptableObject{
    public Sprite itemSprite;
    [TextArea(10,10)]
    public string unloackRecipies;
    public ItemSaveData saveData;
    public void SetUnlock(bool value){
        saveData.unlocked = value;
    }
    public void SetUseing(bool value){
        saveData.isUsing = value;
    }
    public bool IsUnloacked(){
        return saveData.unlocked;
    }
    public bool isUsing(){
        return saveData.isUsing;
    }
    
    #region Saving And Loading..............
    
    [ContextMenu("Save")]
    public void Save(){
        string data = JsonUtility.ToJson(saveData,true);
        BinaryFormatter formatter = new BinaryFormatter();
        FileStream file = File.Create(string.Concat(Application.persistentDataPath,"/",saveData,name,".dat"));
        formatter.Serialize(file,data);
        file.Close();
    }

    [ContextMenu("Load")]
    public void Load(){
        if(File.Exists((string.Concat(Application.persistentDataPath,"/",saveData,name,".dat")))){
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream Stream = File.Open(string.Concat(Application.persistentDataPath,"/",saveData,name,".dat"),FileMode.Open);
            JsonUtility.FromJsonOverwrite(formatter.Deserialize(Stream).ToString(),saveData);
            Stream.Close();
        }
    }

    #endregion
    
}
[System.Serializable]
public class ItemSaveData{
    public bool unlocked;
    public bool isUsing;
}
