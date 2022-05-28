using UnityEngine;
using GamerWolf;
using System.Collections;
using UnityEngine.EventSystems;
using System.Collections.Generic;
public class PlayerInput : MonoBehaviour {
    

    [SerializeField] private bool onPc;
    [SerializeField] private bool inputEnable;
    
    public bool isTouchDown{get;private set;}
    public bool isTouching{get;private set;}
    public bool isTouchUp{get;private set;}


    private void Update(){
        if(inputEnable){
            if(onPc){
                PcInput();
            }else{
                MoblieInput();
            }
        }
    }
    private void MoblieInput(){
        if(Input.touchCount > 0){
            Touch touch = Input.GetTouch(0);
            if(!EventSystem.current.IsPointerOverGameObject(touch.fingerId)){
                isTouchDown = touch.phase == TouchPhase.Began ? true:false;
                isTouching = touch.phase == TouchPhase.Moved ? true:false;
                isTouchUp = touch.phase == TouchPhase.Ended ? true:false;
            }else{
                AudioManager.current.PlayOneShotMusic(SoundType.click);
            }

        }
    }
    private void PcInput(){
        if(!EventSystem.current.IsPointerOverGameObject()){
            isTouchDown = Input.GetMouseButtonDown(0);
            isTouching = Input.GetMouseButton(0);
            isTouchUp = Input.GetMouseButtonUp(0);
        }
    }
    public void ToggleInput(bool value){
        inputEnable = value;
    }
    public bool InputAvailable(){
        return inputEnable;
    }
}
