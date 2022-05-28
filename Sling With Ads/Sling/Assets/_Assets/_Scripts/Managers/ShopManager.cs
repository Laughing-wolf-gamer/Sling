using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
public class ShopManager : MonoBehaviour {
    [SerializeField] private float maxDragDist;
    [SerializeField] private GameObject shopView;
    [SerializeField] private Image dispaly,buttonDispaly;
    [SerializeField] private ItemSO[] itemSoArray;
    [SerializeField] private TextMeshProUGUI recipieTexts;
    [SerializeField] private Button useButton;


    [SerializeField] private Transform[] skinsTransform;
    private bool isShopOpen;
    private int currentViewItem;
    private bool inputs;
    private Vector3 firstTouchPoint,lastTouchPoint;
    private void Start(){
        RefreshShop();
    }


    private void Update(){
        GetSwipeDetection();
    }
    public void SwipeRight(){
        currentViewItem ++;
        if(currentViewItem > itemSoArray.Length - 1){
            currentViewItem = 0;
        }
        RefreshShop();
    }
    public void SwipeLeft(){
        currentViewItem--;
        if(currentViewItem < 0){
            currentViewItem = itemSoArray.Length - 1;
        }
        RefreshShop();
    }
    
    public void ToggleShopOpenClose(){
        isShopOpen = !isShopOpen;
        if(isShopOpen){
            EnableInputs(true);
        }else{
            SetCurrentSkin();
            EnableInputs(false);
        }
        RefreshShop();
        shopView.SetActive(isShopOpen);
    }
    public void RefreshShop(){
        dispaly.sprite = itemSoArray[currentViewItem].itemSprite;
        buttonDispaly.sprite = itemSoArray[currentViewItem].itemSprite;
        recipieTexts.SetText(itemSoArray[currentViewItem].unloackRecipies);
        if(itemSoArray[currentViewItem].IsUnloacked()){
            if(itemSoArray[currentViewItem].isUsing()){
                useButton.interactable = false;
            }else{
                useButton.interactable = true;
            }
        }else{
            useButton.interactable = false;
        }
        
        for (int i = 0; i < skinsTransform.Length; i++){
            if(itemSoArray[i].isUsing()){
                skinsTransform[i].gameObject.SetActive(true);
            }else{
                skinsTransform[i].gameObject.SetActive(false);
            }

            
        }
    }
    public void UseSkin(){
        if(itemSoArray[currentViewItem].IsUnloacked()){
            itemSoArray[currentViewItem].SetUnlock(true);
        }
        for (int i = 0; i < itemSoArray.Length; i++){
            if(currentViewItem != i){
                if(itemSoArray[i].IsUnloacked()){
                    if(itemSoArray[i].isUsing()){
                        itemSoArray[currentViewItem].SetUnlock(false);
                    }
                }
            }
        }
        for (int i = 0; i < skinsTransform.Length; i++){
            if(itemSoArray[i].isUsing()){
                skinsTransform[i].gameObject.SetActive(true);
            }else{
                skinsTransform[i].gameObject.SetActive(false);
            }
            
        }
    }
    public void SetCurrentSkin(){
        for (int i = 0; i < itemSoArray.Length; i++){
            if(itemSoArray[i].isUsing()){
                currentViewItem = i;
                break;
            }
        }
        RefreshShop();
    }
    private void GetSwipeDetection(){
        if(inputs){

#if UNITY_EDITOR

            if(Input.GetMouseButtonDown(0)){
                firstTouchPoint = Input.mousePosition;
                lastTouchPoint = Input.mousePosition;
            }else if(Input.GetMouseButton(0)){
                lastTouchPoint = Input.mousePosition;
            }else if(Input.GetMouseButtonUp(0)){
                lastTouchPoint = Input.mousePosition;
                if(Mathf.Abs(lastTouchPoint.x - firstTouchPoint.x) > maxDragDist ){
                    if(lastTouchPoint.x > firstTouchPoint.x){
                        SwipeLeft();
                    }else{
                        SwipeRight();
                    }
                }
            }
#else
            if(Input.touchCount > 0){
                Touch touch = Input.GetTouch(0);
                if(touch.phase == TouchPhase.Began){
                    firstTouchPoint = Input.mousePosition;
                    lastTouchPoint = Input.mousePosition;
                }else if(touch.phase == TouchPhase.Moved){
                    lastTouchPoint = Input.mousePosition;
                }else if(touch.phase == TouchPhase.Ended){
                    lastTouchPoint = Input.mousePosition;
                    if(Mathf.Abs(lastTouchPoint.x - firstTouchPoint.x) > maxDragDist ){
                        if(lastTouchPoint.x > firstTouchPoint.x){
                            SwipeLeft();
                        }else{
                            SwipeRight();
                        }
                    }
                }
            }
#endif
        }
        
    }
    public void EnableInputs(bool value){
        inputs = value;
    }
}
