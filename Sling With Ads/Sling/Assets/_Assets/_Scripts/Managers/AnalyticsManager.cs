using UnityEngine;
using Firebase.Analytics;
using Firebase.Messaging;
using System.Collections;
using System.Collections.Generic;
public class AnalyticsManager : MonoBehaviour {
    private int currentLevel;
    public static AnalyticsManager current;
    private void Awake()    {
        if(current == null){
            current = this;
        }else{
            Destroy(current.gameObject);
        }
        DontDestroyOnLoad(current.gameObject);
        // GameAnalytics.Initialize();
    }
    
    private void Start(){
        // if(PlayerPrefs.HasKey("CurrentLevel")){
        //     currentLevel = PlayerPrefs.GetInt("CurrentLevel");
        // }
        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventAppOpen);
        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventScreenView);
        Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
            var dependencyStatus = task.Result;
            if (dependencyStatus == Firebase.DependencyStatus.Available)
            {
                // Create and hold a reference to your FirebaseApp,
                // where app is a Firebase.FirebaseApp property of your application class.
                // Crashlytics will use the DefaultInstance, as well;
                // this ensures that Crashlytics is initialized.
                Firebase.FirebaseApp app = Firebase.FirebaseApp.DefaultInstance;

                // Set a flag here for indicating that your project is ready to use Firebase.
            }
            else
            {
                UnityEngine.Debug.LogError(System.String.Format(
                  "Could not resolve all Firebase dependencies: {0}",dependencyStatus));
                // Firebase Unity SDK is not safe to use here.
            }
        });  
        FirebaseMessaging.TokenReceived += OnTokkenRecived;
        FirebaseMessaging.MessageReceived += OnMessegeRecived;
    }
    public void OnTokkenRecived(object sender,TokenReceivedEventArgs args){
        Debug.Log("Received Registration Token: " + args.Token);
    }
    public void OnMessegeRecived(object sender,MessageReceivedEventArgs args){
        Debug.Log("Received a new message from: " + args.Message.From);
    }
    public void SetSpendRealCurrencyForCoins(int amount){
        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventPurchase,"purchase_cash ",amount);
    }
    public void SetEarnVirtualCurrencyByAds(int amount,string currencyName){
        FirebaseAnalytics.LogEvent(
        FirebaseAnalytics.EventEarnVirtualCurrency,
            new Firebase.Analytics.Parameter[] {
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterValue, amount),
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterVirtualCurrencyName, currencyName),
            }
        );
    }
    public void PostScoreAnylytics(int currentLevel,int score,int totalRequired){
        FirebaseAnalytics.LogEvent(
        Firebase.Analytics.FirebaseAnalytics.EventPostScore,
            new Firebase.Analytics.Parameter[] {
                // new Firebase.Analytics.Parameter(
                // Firebase.Analytics.FirebaseAnalytics.ParameterCharacter, character),
                new Parameter(
                FirebaseAnalytics.ParameterLevel, currentLevel),
                new Parameter(
                FirebaseAnalytics.ParameterScore, score),
                new Parameter(
                    "total_requird_score",totalRequired
                )
                
            }
        );
    }
    public void PostUnLoackAcivement(string achievementId){
        FirebaseAnalytics.LogEvent(
        FirebaseAnalytics.EventUnlocAchievement,
            new Firebase.Analytics.Parameter[] {
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterAchievementId, achievementId),
            }
        );
    }
    public void LogInToPlayGames(){
        FirebaseAnalytics.LogEvent(
        FirebaseAnalytics.EventSignUp,
            new Firebase.Analytics.Parameter[] {
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterMethod,"playgames_google"),
            }
        );
    }
    public void SpendVirualCurrency(int amount,string itemName,string currencyName){
        FirebaseAnalytics.LogEvent(
        FirebaseAnalytics.EventSpendVirtualCurrency,
            new Firebase.Analytics.Parameter[] {
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterItemName, itemName),
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterValue, amount),
                new Firebase.Analytics.Parameter(
                Firebase.Analytics.FirebaseAnalytics.ParameterVirtualCurrencyName, currencyName),
            }
        );
    }
    
    public void OnCompanyGamesDownloadClick(){
        FirebaseAnalytics.LogEvent("Play_Resume_game_click");
    }
    public void OnCompanayGamesDownloadView(){
        FirebaseAnalytics.LogEvent("Play_Resume_game_view");
    }
    public void SetCurrentLevel(int levenumber){
        currentLevel = levenumber;
        FirebaseAnalytics.LogEvent("level number","level_number",levenumber);
        // anaylyticsData.Add("Level Number",levenumber);
        // GameAnalytics.SetGlobalCustomEventFields(anaylyticsData);
    }
    public void SetLevelStart(){
        // anaylyticsData.Add("Level Start",l)

        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelStart,"level_num",currentLevel);
        // GameAnalytics.StartSession();
    }
    public void SetLevelEnd(){

        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventLevelEnd,"level_num",currentLevel);
        // GameAnalytics.EndSession();
    }
    public void SetGameStart(){
        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventScreenView);
        // GameAnalytics.NewDesignEvent("Game Start");
    }
    public void OnRestart(){
        FirebaseAnalytics.LogEvent("restart","restart_level",currentLevel);
        // GameAnalytics.SetGlobalCustomEventFields(anaylyticsData);
        // GameAnalytics.NewDesignEvent("restart Data");
    }
    public void SetAdsEarning(AdsType adsType){
        FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventAdImpression);
        // GAAdType adType, string adSdkName, string adPlacement, long duration)

        // GameAnalytics.NewAdEvent(action,adType,adSdkName,adPlacement,duration);
        switch(adsType){
            case AdsType.Rewarded:
                FirebaseAnalytics.LogEvent("reward_ads");

            break;
            case AdsType.intersteial:
                FirebaseAnalytics.LogEvent("interstial_ads");
            break;

            case AdsType.Banner:
                FirebaseAnalytics.LogEvent("banner_ads");
            break;
        }
    }
    
    
    
}
public enum AdsType{
    Banner,intersteial,Rewarded
}
