using TMPro;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
public class DialogueManager : MonoBehaviour {
    
    [SerializeField] private float maxLiveTime;

    [SerializeField] private TextMeshProUGUI dialogueText;
    [SerializeField] private DOTweenAnimation scaleAnimations;

    private float currentLiveTime;
    public static DialogueManager current;
    private void Awake(){
        current = this;
    }

    private void Update(){
        if(currentLiveTime > 0f){
            currentLiveTime -= Time.deltaTime;
            
        }else{
            dialogueText.gameObject.SetActive(false);
        }
    }

    public void SetDialogue(string text,float textSize){
        dialogueText.gameObject.SetActive(true);
        scaleAnimations.DOPlay();
        dialogueText.SetText(text);
        // dialogueText.fontSize = textSize;
        currentLiveTime = maxLiveTime;
    }
}
