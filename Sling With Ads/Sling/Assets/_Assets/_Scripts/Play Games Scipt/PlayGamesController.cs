using TMPro;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SceneManagement;

public class PlayGamesController : MonoBehaviour {

    [SerializeField] private TextMeshProUGUI logingText;
    
    private void Awake(){
#if UNITY_EDITOR
        Debug.unityLogger.logEnabled = true;
#else
        Debug.unityLogger.logEnabled = false;
#endif
    }
    private void Start(){
#if UNITY_EDITOR
        ChangeScene();
#else 
        AuthenticateUser();

#endif
        
    }
    
    
    public void AuthenticateUser(){
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.Activate();
        Social.localUser.Authenticate((bool success) =>{
            if (success){
                Debug.Log("Logged in to Google Play Games Services");
                if(logingText != null){
                    logingText.SetText(string.Concat("Logged in to Google Play Games Services"));
                }
                AnalyticsManager.current.LogInToPlayGames();
            }
            else{
                Debug.LogError("Unable to sign in to Google Play Games Services");
                if(logingText != null){
                    logingText.SetText(string.Concat("Unable to sign in to Google Play Games Services"));
                }
            }
            Invoke(nameof(ChangeScene),0.5f);

        });
        
    }
    
    private void ChangeScene(){
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
        // LevelLoader.current.PlayLevel(SceneIndex.Game_Scene);
    }
    public static void PostAchivements(string id){
        if(Social.localUser.authenticated){
            Social.ReportProgress(id,1000f,(bool success) =>{
                Debug.Log("Achivement Posted");
                if(success){
                    AnalyticsManager.current.PostUnLoackAcivement(id);

                }
            });
        }
    }

    public static void PostToLeaderboard(int newScore){
        if(Social.localUser.authenticated){
            Social.ReportScore(newScore, GPGSIds.leaderboard_high_score,(bool success) => {
                if (success){
                    Debug.Log("Posted new score to leaderboard");
                    // AnalyticsManager.current.PostScoreAnylytics(newScore,);
                }
                else {
                    Debug.LogError("Unable to post new score to leaderboard");
                }
            });
        }
    }
    
    public static void ShowAchivmenetUI(){
        PlayGamesPlatform.Instance.ShowAchievementsUI();
    }
    public static void ShowLeaderboardUI(){
        if(Social.localUser.authenticated){
            PlayGamesPlatform.Instance.ShowLeaderboardUI(GPGSIds.leaderboard_high_score);
        }
    }
    /*
    public static void OpenSave(bool _isSaveing){
        if(Social.localUser.authenticated){
            isSaveing = _isSaveing;
            ((PlayGamesPlatform)Social.Active).SavedGame.OpenWithAutomaticConflictResolution("HME",
                GooglePlayGames.BasicApi.DataSource.ReadCacheOrNetwork,
                GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy.UseLongestPlaytime,SavedGameOpen
            );
        }
        
    }

    public static void SavedGameOpen(SavedGameRequestStatus status, ISavedGameMetadata meta){
        if(status == SavedGameRequestStatus.Success){
            if(isSaveing){
                // Writing..
                Debug.Log("Writing...");
                byte[] data = System.Text.ASCIIEncoding.ASCII.GetBytes("HME Random Saved");
                SavedGameMetadataUpdate builder = new SavedGameMetadataUpdate.Builder().WithUpdatedDescription("Saved at " + System.DateTime.Now.ToString()).Build();
                ((PlayGamesPlatform)Social.Active).SavedGame.CommitUpdate(meta,builder,data,SavedUpdate);
            }else{
                // Reading..
                Debug.Log("Reading...");
                ((PlayGamesPlatform)Social.Active).SavedGame.ReadBinaryData(meta,saveRead);
            }
        }
    }

    private static void saveRead(SavedGameRequestStatus status, byte[] data){
        if(status == SavedGameRequestStatus.Success){
            Debug.Log("Sucess " + status);
            string saveDAta = System.Text.ASCIIEncoding.ASCII.GetString(data);
            Debug.Log(saveDAta);
        }
    }

    private static void SavedUpdate(SavedGameRequestStatus status, ISavedGameMetadata meta){
        Debug.Log("Succes " + status);
    }
    */
}
