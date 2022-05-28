using System;
using UnityEngine;

public class AdManager : MonoBehaviour {
    [SerializeField] private GameDataSO gameDataSO;
    [SerializeField] private string _sdkKey;
    [SerializeField] private string bannerAdUnitId;
    [SerializeField] private string interstitialUnitId;
    [SerializeField] private string rewardUnitId;
    int interstitialRetryAttempt;
    int rewardRetryAttempt;
    public static bool revive;

    #region Singelton............
    public static AdManager current{get;private set;}
    private void Awake(){
        if(current == null){
            current = this;
        }else{
            Destroy(current.gameObject);
        }
        DontDestroyOnLoad(current.gameObject);
    }
    #endregion

    // Start is called before the first frame update
    private void Start(){
        MaxSdkCallbacks.OnSdkInitializedEvent += (MaxSdkBase.SdkConfiguration sdkConfiguration) => {
            // AppLovin SDK is initialized, start loading ads
            if(gameDataSO.HasAds()){
                InitializeBannerAds();
                InitializeInterstitialAds();
            }
            InitializeRewardedAds();
        };

        MaxSdk.SetSdkKey(_sdkKey);
        MaxSdk.InitializeSdk();
    }

    private void InitializeBannerAds() {
        // Banners are automatically sized to 320�50 on phones and 728�90 on tablets
        // You may call the utility method MaxSdkUtils.isTablet() to help with view sizing adjustments
        MaxSdk.CreateBanner(bannerAdUnitId, MaxSdkBase.BannerPosition.TopCenter);
    }

    public void InitializeInterstitialAds()
    {
        // Attach callback
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialLoadFailedEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterstitialDisplayedEvent;
        MaxSdkCallbacks.Interstitial.OnAdClickedEvent += OnInterstitialClickedEvent;
        MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialHiddenEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnInterstitialAdFailedToDisplayEvent;

        // Load the first interstitial
        LoadInterstitial();
    }

    private void LoadInterstitial(){
        MaxSdk.LoadInterstitial(interstitialUnitId);
    }

    public void InitializeRewardedAds(){
        // Attach callback
        MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
        MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdLoadFailedEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnRewardedAdDisplayedEvent;
        MaxSdkCallbacks.Rewarded.OnAdClickedEvent += OnRewardedAdClickedEvent;
        MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;
        MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdHiddenEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
        MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;

        // Load the first rewarded ad
        LoadRewardedAd();
    }

    private void LoadRewardedAd()
    {
        MaxSdk.LoadRewardedAd(rewardUnitId);
    }

    #region BannerAd Function
    public void ShowBanner(){
        MaxSdk.ShowBanner(bannerAdUnitId);
        AnalyticsManager.current.SetAdsEarning(AdsType.Banner);
    }

    public void HideBanner()
    {
        MaxSdk.HideBanner(bannerAdUnitId);
    }

    public void DestoryBanner()
    {
        MaxSdk.DestroyBanner(bannerAdUnitId);
    }
    #endregion

    #region InterstitialAd Function

    public void ShowInterstitialAd(){
        if(gameDataSO.HasAds()){
            if (MaxSdk.IsInterstitialReady(interstitialUnitId)){
                MaxSdk.ShowInterstitial(interstitialUnitId);
                AnalyticsManager.current.SetAdsEarning(AdsType.intersteial);
            }
        }
    }

    #endregion

    #region RewardAd Function

    public void ShowRewardAd()
    {
        if (MaxSdk.IsRewardedAdReady(rewardUnitId))
        {
            MaxSdk.ShowRewardedAd(rewardUnitId);
            AnalyticsManager.current.SetAdsEarning(AdsType.Rewarded);
        }
    }

    #endregion

    #region InterstitialAd Handler
    private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is ready for you to show. MaxSdk.IsInterstitialReady(adUnitId) now returns 'true'

        // Reset retry attempt
        interstitialRetryAttempt = 0;
    }

    private void OnInterstitialLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Interstitial ad failed to load 
        // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds)

        interstitialRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, interstitialRetryAttempt));

        Invoke(nameof(LoadInterstitial), (float)retryDelay);
    }

    private void OnInterstitialDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo){
        // Interstitial ad failed to display. AppLovin recommends that you load the next ad.
        // LoadInterstitial();
        // LevelLoader.current.PlayLevel(SceneIndex.Game_Scene);
    }

    private void OnInterstitialClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnInterstitialHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is hidden. Pre-load the next ad.
        // LoadInterstitial();
        
    }
    #endregion

    #region RewardAd Handler
    private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is ready for you to show. MaxSdk.IsRewardedAdReady(adUnitId) now returns 'true'.

        // Reset retry attempt
        rewardRetryAttempt = 0;
    }

    private void OnRewardedAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Rewarded ad failed to load 
        // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds).

        rewardRetryAttempt++;
        double retryDelay = Math.Pow(2, Math.Min(6, rewardRetryAttempt));

        Invoke("LoadRewardedAd", (float)retryDelay);
    }

    private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad failed to display. AppLovin recommends that you load the next ad.
        LoadRewardedAd();
    }

    private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

    private void OnRewardedAdHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is hidden. Pre-load the next ad
        LoadRewardedAd();
    }

    private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
    {
        // The rewarded ad displayed and the user should receive the reward.
        if(revive){
            revive = false;
            GameHandler.current.RevivePlayer();
        }
    }

    private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Ad revenue paid. Use this callback to track user revenue.
    }
    #endregion
}
