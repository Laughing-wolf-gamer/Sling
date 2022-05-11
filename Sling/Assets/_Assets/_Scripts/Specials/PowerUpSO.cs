using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public enum PowerUpType{
    Heal,Spike,Shield,
}

[CreateAssetMenu(fileName = "Power Up",menuName = "ScriptableObject/Special/Power Up")]
public class PowerUpSO : ScriptableObject {
    
    
    public Sprite powerUpSprite;
    public PowerUpType powerUpType;
}
