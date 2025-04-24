using TMPro;
using UnityEngine;
public class UiManager : MonoBehaviour {
    
    
    [SerializeField] private GameDataSO gameDataSO;


    [SerializeField] private TextMeshProUGUI[] scoreTexts;


    [SerializeField] private GameObject setttingWindow;

    private bool isSettingMenuOn;



    private void Start(){
        setttingWindow.SetActive(isSettingMenuOn);
        GameHandler.current.OnScoreChange += ()=>{
            ChangeScore();
        };
    }
    private void ChangeScore(){
        for (int i = 0; i < scoreTexts.Length; i++){
            scoreTexts[i].SetText(GameHandler.current.GetCurrentScore().ToString());
        }
    }
    public void ToggleSettingMenu(){
        isSettingMenuOn = !isSettingMenuOn;
        setttingWindow.SetActive(isSettingMenuOn);
    }
}
