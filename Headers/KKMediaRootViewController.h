//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TVKMediaViewController.h"

#import "KKAdsDelegate-Protocol.h"
#import "KKMediaControllPlayerProtocol-Protocol.h"
#import "KKMediaPlayPrepareDelegate-Protocol.h"
#import "KKMediaPlayerDelegate-Protocol.h"
#import "KKMediaPlayerEventProtocol-Protocol.h"
#import "KKScreenLockDelegate-Protocol.h"
#import "KKbackAdvertismentAddedProtocol-Protocol.h"
#import "NetworkCheckerDelegate-Protocol.h"
#import "P_QLMPlayerControlDelegate-Protocol.h"
#import "QLInteractiveVoteOperationDelegate-Protocol.h"
#import "QLPlayerCacheJusterDelegate-Protocol.h"
#import "QLShareDataSource-Protocol.h"

@class KKAdsFunnelReporter, KKAdsViewController, KKMediaPlayCountReporter, KKMediaPlayInfo, KKMediaPlayPreparer, KKMediaPlayer, KKMediaPlayerEventSender, KKMediaThumbImageLoader, KKPlayVaribles, KKPlayerSpeedReport, KKScreenLockView, KKVideoInfo, NSDate, NSDictionary, NSError, NSMutableDictionary, NSObject, NSString, NSTimer, QLFigerReportMgr, QLHotspotMovieControlView2, QLInteractiveVoteOperation, QLIpAppealingView, QLJumpBannerView, QLLimitedPlayView, QLMainMovieControlView, QLMovieBaseControlView, QLMovieItem, QLPlayInfoAdapter, QLPlayInfoFlowAdapter, QLPlayerCacheJuster, QLPlayerPreLoadingView, QLRecommendPannelView, QLShareFeed, QLSimpleMovieControlView, QLTryWatchViewController, QQMediaPlayerController, StatusReportCtl, UIButton, UIImage, UITableView, UIView, UIViewController, WaitingLoadingView, kkAdsBackAdvertismentService;
@protocol KKMediaPlayerActionDelegate, KKMediaPlayerControlProtocol, KKMediaPlayerTopViewControlProtocol, OS_dispatch_queue;

@interface KKMediaRootViewController : TVKMediaViewController <KKScreenLockDelegate, QLInteractiveVoteOperationDelegate, KKMediaPlayerEventProtocol, QLPlayerCacheJusterDelegate, P_QLMPlayerControlDelegate, KKMediaPlayPrepareDelegate, KKMediaPlayerDelegate, KKAdsDelegate, QLShareDataSource, NetworkCheckerDelegate, KKbackAdvertismentAddedProtocol, KKMediaControllPlayerProtocol>
{
    UIView *dlnaSelectorView;
    UIView *noneDLNATipView;
    UITableView *dlnaTableView;
    UIView *dlnaSearchingView;
    UIView *dlnaPlayBkgView;
    UIButton *btnDLNAReturn;
    double lastDLNAPlayTime;
    long long iCurRenderIndex;
    _Bool _backPlayerWhenEnterForegroundIn3G;
    _Bool _firstPlay;
    _Bool _showInitialPlayTimeTip;
    _Bool _isPreparingVideoInfo;
    _Bool _isCachingVideoAfterAdLoadFinish;
    NSString *_lastVideoWhichHasLoadHeadAds;
    KKAdsViewController *_adsViewController;
    _Bool _advertisementProcessFinished;
    _Bool _isNeedSpeedReport;
    KKPlayerSpeedReport *_playerSpeedReport;
    KKScreenLockView *_kkScreenLockView;
    _Bool _isViewVisible;
    _Bool _shouldShowControlsWhenDidAppear;
    _Bool _userForceChangeDevice;
    QLIpAppealingView *_ipView;
    KKMediaThumbImageLoader *_thumbImageLoader;
    NSObject<OS_dispatch_queue> *_getTimeQueue;
    _Bool _needStartMediaPlayWhenAdDismiss;
    kkAdsBackAdvertismentService *_backAdsService;
    _Bool _playP2PFailed;
    _Bool _playP2PShouldAbort;
    struct CGRect frameSmallPlayer;
    struct CGRect frameFullPlayer;
    id <KKMediaPlayerTopViewControlProtocol> templateTopViewControlObj;
    QLMovieBaseControlView *baseControlViewBefore;
    struct CGPoint startAppRootVCPointWhenPresent;
    _Bool _togglePresentFullScreen;
    _Bool _toggleTouch;
    _Bool _toggleSwitching;
    long long _lastLandscapeInterfaceOrientation;
    int _funcItemMask;
    _Bool _adLandingViewPressenting;
    _Bool _updateViewInGestureMode;
    struct CGAffineTransform _lastTransform;
    struct CGPoint _lastCenter;
    double _lastWidth;
    double _lastHeight;
    double _becameActiveTime;
    _Bool _isInFullscreen;
    _Bool _isScreenLocked;
    _Bool _isFullScreenLocked;
    _Bool _mediaRootViewControllerWasBacked;
    _Bool _shouldNotPlay;
    _Bool _canBePlayed;
    _Bool _bRenderingDLNA;
    _Bool _firstCache;
    _Bool _shouldShowHelpView;
    _Bool _hotspotCaching;
    _Bool _shouldPauseAdCached;
    _Bool _isFirstInsertHeadset;
    _Bool _isFirstPullOutHeadset;
    _Bool _needToPauseAfterReplay;
    _Bool _userChangedClarity;
    _Bool _isBackground;
    _Bool _isAppActive;
    _Bool _backgroundNetworkChanged;
    _Bool _playerUIDisabled;
    _Bool _showTryWatchCutDown;
    _Bool _weakenAdMode;
    _Bool _selfControlMode;
    _Bool _enterFullScreen;
    _Bool _enterMiniView;
    _Bool _playerMuted;
    _Bool _adPlayerMuted;
    _Bool _enableGestureMode;
    _Bool _switchScreenLock;
    _Bool _isVarietyExtra;
    _Bool _isInsertHDMI;
    _Bool _isRequestBackAdvertisement;
    _Bool _modalIsDismissing;
    _Bool _presentFromKKPresent;
    _Bool _requestedAdvertisement;
    _Bool _isUserClickPause;
    _Bool _tvStopedByAutoFinished;
    _Bool _enteredFromFullStartMoment;
    _Bool _enableSkipContinueTryWatchTipInSDK;
    float _previousBroadcastVolume;
    float _previousHeadsetVolume;
    float _currentBroadcastVolume;
    float _currentHeadsetVolume;
    int _adMode;
    QLMainMovieControlView *_fullCtlView;
    QLSimpleMovieControlView *_smallCtlView;
    QLHotspotMovieControlView2 *_hotspotCtlView;
    id <KKMediaPlayerActionDelegate> _actionDelegate;
    long long _playerMode;
    KKVideoInfo *_videoInfo;
    KKMediaPlayInfo *_mediaPlayInfo;
    KKMediaPlayer *_mediaPlayer;
    double _preloadPlaybackTime;
    long long _cachingFileIndex;
    long long _fileCachedNums;
    long long _retryPlayerType;
    NSTimer *_hideStatusTimer;
    NSString *_loadingImgURL;
    long long _interfaceType;
    QLInteractiveVoteOperation *_interactiveVoteOperation;
    double _backGroundInternal;
    NSDate *_backGroundDate;
    KKAdsFunnelReporter *_adsFunnelReporter;
    QLPlayerCacheJuster *_playerCacher;
    KKMediaPlayCountReporter *_playCountReporter;
    QLFigerReportMgr *_figerReportMgr;
    QLPlayerPreLoadingView *_preLoadingView;
    WaitingLoadingView *_loadingView;
    KKPlayVaribles *_c_playing_varibles;
    KKMediaPlayerEventSender *_playerEventSender;
    id <KKMediaPlayerControlProtocol> _superHiberarchyDelegate;
    UIView *_customSimpleUIView;
    UIView *_customMainUIView;
    QLTryWatchViewController *_tryWatchCtl;
    NSString *_reportInfoEx;
    QLJumpBannerView *_jumpBanner;
    QLRecommendPannelView *_recommendPannel;
    QLLimitedPlayView *_limitedPlayView;
    UIImage *_loadingImage;
    QLMovieBaseControlView *_mainCtlView;
    NSString *_playerTitle;
    NSString *_playerTitleMark;
    KKMediaPlayPreparer *_mediaPreparer;
    double _minScaleRate;
    double _maxScaleRate;
    NSString *_currentPlayID;
    NSString *_currentRequestID;
    StatusReportCtl *_reportCtl;
    QLPlayInfoFlowAdapter *_playInfoFlowAdapter;
    QLPlayInfoAdapter *_playInfoHitTagAdapter;
    UIView *_airplayView;
    NSTimer *_prgTimer;
    long long _waitingNums;
    NSTimer *_slideToPlayTimer;
    NSTimer *_cachingToPlayTimer;
    UIViewController *_navViewController;
    NSMutableDictionary *_dicDLNARequest;
    UIViewController *_weakTagSuperHiberarchyViewController;
    struct CGRect _smallPlayerAttachFrame;
}

+ (_Bool)OpenJumpUrlWithobject;
+ (long long)playSequence;
@property(nonatomic) UIViewController *weakTagSuperHiberarchyViewController; // @synthesize weakTagSuperHiberarchyViewController=_weakTagSuperHiberarchyViewController;
@property(nonatomic) _Bool enableSkipContinueTryWatchTipInSDK; // @synthesize enableSkipContinueTryWatchTipInSDK=_enableSkipContinueTryWatchTipInSDK;
@property(nonatomic) _Bool enteredFromFullStartMoment; // @synthesize enteredFromFullStartMoment=_enteredFromFullStartMoment;
@property(retain, nonatomic) NSMutableDictionary *dicDLNARequest; // @synthesize dicDLNARequest=_dicDLNARequest;
@property(nonatomic) _Bool tvStopedByAutoFinished; // @synthesize tvStopedByAutoFinished=_tvStopedByAutoFinished;
@property(nonatomic) _Bool isUserClickPause; // @synthesize isUserClickPause=_isUserClickPause;
@property(nonatomic) UIViewController *navViewController; // @synthesize navViewController=_navViewController;
@property(nonatomic) _Bool requestedAdvertisement; // @synthesize requestedAdvertisement=_requestedAdvertisement;
@property(nonatomic) _Bool presentFromKKPresent; // @synthesize presentFromKKPresent=_presentFromKKPresent;
@property(nonatomic) _Bool modalIsDismissing; // @synthesize modalIsDismissing=_modalIsDismissing;
@property(retain, nonatomic) NSTimer *cachingToPlayTimer; // @synthesize cachingToPlayTimer=_cachingToPlayTimer;
@property(retain, nonatomic) NSTimer *slideToPlayTimer; // @synthesize slideToPlayTimer=_slideToPlayTimer;
@property(nonatomic) long long waitingNums; // @synthesize waitingNums=_waitingNums;
@property(retain, nonatomic) NSTimer *prgTimer; // @synthesize prgTimer=_prgTimer;
@property(retain, nonatomic) UIView *airplayView; // @synthesize airplayView=_airplayView;
@property(retain, nonatomic) QLPlayInfoAdapter *playInfoHitTagAdapter; // @synthesize playInfoHitTagAdapter=_playInfoHitTagAdapter;
@property(retain, nonatomic) QLPlayInfoFlowAdapter *playInfoFlowAdapter; // @synthesize playInfoFlowAdapter=_playInfoFlowAdapter;
@property(nonatomic) _Bool isRequestBackAdvertisement; // @synthesize isRequestBackAdvertisement=_isRequestBackAdvertisement;
@property(nonatomic) _Bool isInsertHDMI; // @synthesize isInsertHDMI=_isInsertHDMI;
@property _Bool isVarietyExtra; // @synthesize isVarietyExtra=_isVarietyExtra;
@property(retain) StatusReportCtl *reportCtl; // @synthesize reportCtl=_reportCtl;
@property(copy) NSString *currentRequestID; // @synthesize currentRequestID=_currentRequestID;
@property(copy) NSString *currentPlayID; // @synthesize currentPlayID=_currentPlayID;
@property(nonatomic) double maxScaleRate; // @synthesize maxScaleRate=_maxScaleRate;
@property(nonatomic) double minScaleRate; // @synthesize minScaleRate=_minScaleRate;
@property(retain) KKMediaPlayPreparer *mediaPreparer; // @synthesize mediaPreparer=_mediaPreparer;
@property(retain) NSString *playerTitleMark; // @synthesize playerTitleMark=_playerTitleMark;
@property(retain) NSString *playerTitle; // @synthesize playerTitle=_playerTitle;
@property(nonatomic) QLMovieBaseControlView *mainCtlView; // @synthesize mainCtlView=_mainCtlView;
@property(nonatomic) int adMode; // @synthesize adMode=_adMode;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(nonatomic) _Bool switchScreenLock; // @synthesize switchScreenLock=_switchScreenLock;
@property(nonatomic) _Bool enableGestureMode; // @synthesize enableGestureMode=_enableGestureMode;
@property(retain, nonatomic) QLLimitedPlayView *limitedPlayView; // @synthesize limitedPlayView=_limitedPlayView;
@property(retain, nonatomic) QLRecommendPannelView *recommendPannel; // @synthesize recommendPannel=_recommendPannel;
@property(retain, nonatomic) QLJumpBannerView *jumpBanner; // @synthesize jumpBanner=_jumpBanner;
@property(nonatomic) _Bool adPlayerMuted; // @synthesize adPlayerMuted=_adPlayerMuted;
@property(nonatomic) _Bool playerMuted; // @synthesize playerMuted=_playerMuted;
@property(nonatomic) _Bool enterMiniView; // @synthesize enterMiniView=_enterMiniView;
@property(nonatomic) _Bool enterFullScreen; // @synthesize enterFullScreen=_enterFullScreen;
@property(nonatomic) _Bool selfControlMode; // @synthesize selfControlMode=_selfControlMode;
@property(nonatomic) _Bool weakenAdMode; // @synthesize weakenAdMode=_weakenAdMode;
@property(retain, nonatomic) NSString *reportInfoEx; // @synthesize reportInfoEx=_reportInfoEx;
@property(readonly, nonatomic) _Bool toggleSwitching; // @synthesize toggleSwitching=_toggleSwitching;
@property(nonatomic) _Bool showTryWatchCutDown; // @synthesize showTryWatchCutDown=_showTryWatchCutDown;
@property(retain, nonatomic) QLTryWatchViewController *tryWatchCtl; // @synthesize tryWatchCtl=_tryWatchCtl;
@property(retain, nonatomic) UIView *customMainUIView; // @synthesize customMainUIView=_customMainUIView;
@property(retain, nonatomic) UIView *customSimpleUIView; // @synthesize customSimpleUIView=_customSimpleUIView;
@property(readonly, nonatomic) _Bool playerUIDisabled; // @synthesize playerUIDisabled=_playerUIDisabled;
@property(nonatomic) id <KKMediaPlayerControlProtocol> superHiberarchyDelegate; // @synthesize superHiberarchyDelegate=_superHiberarchyDelegate;
@property(nonatomic) _Bool togglePresentFullScreen; // @synthesize togglePresentFullScreen=_togglePresentFullScreen;
@property(nonatomic) struct CGRect smallPlayerAttachFrame; // @synthesize smallPlayerAttachFrame=_smallPlayerAttachFrame;
@property(retain, nonatomic) KKMediaPlayerEventSender *playerEventSender; // @synthesize playerEventSender=_playerEventSender;
@property(retain, nonatomic) KKPlayVaribles *c_playing_varibles; // @synthesize c_playing_varibles=_c_playing_varibles;
@property(readonly, nonatomic) _Bool backgroundNetworkChanged; // @synthesize backgroundNetworkChanged=_backgroundNetworkChanged;
@property(nonatomic) _Bool isAppActive; // @synthesize isAppActive=_isAppActive;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool userChangedClarity; // @synthesize userChangedClarity=_userChangedClarity;
@property(retain, nonatomic) WaitingLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) QLPlayerPreLoadingView *preLoadingView; // @synthesize preLoadingView=_preLoadingView;
@property(retain, nonatomic) QLFigerReportMgr *figerReportMgr; // @synthesize figerReportMgr=_figerReportMgr;
@property(retain, nonatomic) KKMediaPlayCountReporter *playCountReporter; // @synthesize playCountReporter=_playCountReporter;
@property(retain, nonatomic) QLPlayerCacheJuster *playerCacher; // @synthesize playerCacher=_playerCacher;
@property(retain, nonatomic) KKAdsFunnelReporter *adsFunnelReporter; // @synthesize adsFunnelReporter=_adsFunnelReporter;
@property(retain, nonatomic) NSDate *backGroundDate; // @synthesize backGroundDate=_backGroundDate;
@property(nonatomic) double backGroundInternal; // @synthesize backGroundInternal=_backGroundInternal;
@property(retain, nonatomic) QLInteractiveVoteOperation *interactiveVoteOperation; // @synthesize interactiveVoteOperation=_interactiveVoteOperation;
@property(nonatomic) _Bool needToPauseAfterReplay; // @synthesize needToPauseAfterReplay=_needToPauseAfterReplay;
@property(nonatomic) float currentHeadsetVolume; // @synthesize currentHeadsetVolume=_currentHeadsetVolume;
@property(nonatomic) float currentBroadcastVolume; // @synthesize currentBroadcastVolume=_currentBroadcastVolume;
@property(nonatomic) float previousHeadsetVolume; // @synthesize previousHeadsetVolume=_previousHeadsetVolume;
@property(nonatomic) float previousBroadcastVolume; // @synthesize previousBroadcastVolume=_previousBroadcastVolume;
@property(nonatomic) _Bool isFirstPullOutHeadset; // @synthesize isFirstPullOutHeadset=_isFirstPullOutHeadset;
@property(nonatomic) _Bool isFirstInsertHeadset; // @synthesize isFirstInsertHeadset=_isFirstInsertHeadset;
@property(retain, nonatomic) KKAdsViewController *adsViewController; // @synthesize adsViewController=_adsViewController;
@property(nonatomic) _Bool shouldPauseAdCached; // @synthesize shouldPauseAdCached=_shouldPauseAdCached;
@property(nonatomic) _Bool needStartMediaPlayWhenAdDismiss; // @synthesize needStartMediaPlayWhenAdDismiss=_needStartMediaPlayWhenAdDismiss;
@property(nonatomic) long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(readonly, nonatomic) _Bool isCachingVideoAfterAdLoadFinish; // @synthesize isCachingVideoAfterAdLoadFinish=_isCachingVideoAfterAdLoadFinish;
@property(nonatomic) _Bool hotspotCaching; // @synthesize hotspotCaching=_hotspotCaching;
@property(retain) KKMediaThumbImageLoader *thumbImageLoader; // @synthesize thumbImageLoader=_thumbImageLoader;
@property(nonatomic) _Bool advertisementProcessFinished; // @synthesize advertisementProcessFinished=_advertisementProcessFinished;
@property(nonatomic) _Bool shouldShowHelpView; // @synthesize shouldShowHelpView=_shouldShowHelpView;
@property(retain, nonatomic) NSTimer *hideStatusTimer; // @synthesize hideStatusTimer=_hideStatusTimer;
@property(retain, nonatomic) NSString *lastVideoWhichHasLoadHeadAds; // @synthesize lastVideoWhichHasLoadHeadAds=_lastVideoWhichHasLoadHeadAds;
@property(nonatomic) long long retryPlayerType; // @synthesize retryPlayerType=_retryPlayerType;
@property(nonatomic) long long fileCachedNums; // @synthesize fileCachedNums=_fileCachedNums;
@property(nonatomic) long long cachingFileIndex; // @synthesize cachingFileIndex=_cachingFileIndex;
@property(nonatomic) _Bool firstCache; // @synthesize firstCache=_firstCache;
@property _Bool bRenderingDLNA; // @synthesize bRenderingDLNA=_bRenderingDLNA;
@property _Bool canBePlayed; // @synthesize canBePlayed=_canBePlayed;
@property(nonatomic) _Bool shouldNotPlay; // @synthesize shouldNotPlay=_shouldNotPlay;
@property(nonatomic) double preloadPlaybackTime; // @synthesize preloadPlaybackTime=_preloadPlaybackTime;
@property(nonatomic) _Bool mediaRootViewControllerWasBacked; // @synthesize mediaRootViewControllerWasBacked=_mediaRootViewControllerWasBacked;
@property(retain) KKMediaPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(retain) KKMediaPlayInfo *mediaPlayInfo; // @synthesize mediaPlayInfo=_mediaPlayInfo;
@property(retain) KKVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property id <KKMediaPlayerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) _Bool isFullScreenLocked; // @synthesize isFullScreenLocked=_isFullScreenLocked;
@property(nonatomic) _Bool isScreenLocked; // @synthesize isScreenLocked=_isScreenLocked;
@property(nonatomic) _Bool isInFullscreen; // @synthesize isInFullscreen=_isInFullscreen;
@property(retain, nonatomic) QLHotspotMovieControlView2 *hotspotCtlView; // @synthesize hotspotCtlView=_hotspotCtlView;
@property(retain, nonatomic) QLSimpleMovieControlView *smallCtlView; // @synthesize smallCtlView=_smallCtlView;
@property(retain, nonatomic) QLMainMovieControlView *fullCtlView; // @synthesize fullCtlView=_fullCtlView;
- (_Bool)hasRightToWatchLive;
- (void)playLiveWithGetPreviewInfo:(_Bool)arg1;
- (id)getPlayerPosterUrl;
- (void)disablePlayerControlUI;
- (void)enablePlayerControlUI;
- (void)setMediaPlayMode:(_Bool)arg1;
- (void)setMediaPlayVolume:(float)arg1;
- (void)setSeekPlayTime:(double)arg1;
- (void)startPlayNextVideo;
- (void)changeMediaFormat:(id)arg1;
- (void)showAllControlViews;
- (void)hidAllControlViews;
- (void)seekTo:(double)arg1;
- (void)continueMediaPlay:(_Bool)arg1;
- (void)pauseMediaPlayWithPauseAd;
- (void)pauseMediaPlay;
- (_Bool)JumpTVPlayerView;
- (_Bool)JumpMoviePlayerView;
- (void)setShareMomentTipsHide:(_Bool)arg1;
- (void)clearInteractiveDelegate;
- (id)remotePlayDisabledReason;
- (_Bool)isRemotePlayDisabled;
- (_Bool)isAirPlayActive;
- (_Bool)isDLNAActive;
- (void)removeBackAdvertisement;
- (_Bool)isAdsViewConrollerIsPresent;
- (void)playBackAdvertisement;
- (void)loadBackAdvertisement;
- (_Bool)isPauseToPlayAdvertisement:(unsigned long long)arg1;
- (void)clearBackAdsService;
- (void)createBackAdsService;
- (void)createHitTagAdapter;
- (void)removePlayItemExchage;
- (void)addPlayItemExchange:(id)arg1;
- (void)removePlayUrlExchage;
- (void)addPlayUrlExchange:(id)arg1;
- (void)removeMediaPlayerEventObserver:(id)arg1;
- (void)addMediaPlayerEventObserver:(id)arg1;
@property(readonly, nonatomic) int mediaPlayerState;
- (void)saveHdmiPlayLastTime;
- (void)updateCurrentViewController:(id)arg1;
- (void)uncomOrderStateChangeToInvalid:(id)arg1;
- (_Bool)isHeadphone;
- (void)setAdMediaViewNoMuted:(_Bool)arg1;
- (float)getHardVolume;
- (void)clearPauseAdCached;
- (void)loadAdvertisementForHotspotReport;
- (void)momentDidLoginSuccess:(id)arg1;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (id)pageDescription;
- (void)enableShare:(_Bool)arg1;
@property(readonly) NSString *firstURLString;
- (void)reportBeforePlayerCloseOrSwitch;
- (_Bool)playerCacheIsPlayingLive;
- (_Bool)playerCacheIsUserControlPaused;
- (long long)playerCacheLoadState;
- (long long)playerCachePlaybackState;
- (double)playerCacheCurrentPlaybackTime;
- (void)showHelperTips;
- (void)hideStatusBarTimer:(id)arg1;
- (void)onKKAdsShareClicked;
- (_Bool)ifAdsCanSkipForHuaNa;
- (void)jumpAdsPlayVideo;
- (void)showAdaSkipResultWithTips:(id)arg1;
- (void)showOpeningHollywoodView;
- (void)onKKAdsStateNotify:(int)arg1 adViewController:(id)arg2;
- (void)onKKAdsFaileWithError:(id)arg1;
- (void)cleanAdvertisement:(_Bool)arg1;
- (void)loadPauseAdvertisement;
- (_Bool)loadAdvertisement;
- (int)getPlayAdMode;
- (_Bool)shouldLoadHeadAdvertisement;
- (_Bool)hasLoadHeadAdsThisVideo;
- (_Bool)isAdvertisementEnabled;
- (void)didAdvertisementProcessFinished;
@property(readonly, nonatomic) _Bool isPlayingAds;
- (void)onMediaDidPauseOrStop;
- (void)onMediaDidStartPlay;
- (void)newReportForVid:(id)arg1 cmd:(long long)arg2;
- (void)playCtlWithVideo:(id)arg1 index:(long long)arg2 lastPlay:(double)arg3 resolution:(id)arg4 vids:(id)arg5 titles:(id)arg6 infoList:(id)arg7 screenshots:(id)arg8 fullTags:(id)arg9;
- (void)screenLockViewDidHide;
- (void)delayForceChangeDeviceOrientation:(id)arg1;
- (void)screenLockStateChanged:(_Bool)arg1;
- (void)ToFullMediaScreen:(id)arg1;
- (void)ToSmallMediaScreen:(id)arg1;
- (void)OnInterfaceOrientationsDetect:(id)arg1;
- (void)hideScreenLock;
- (void)showScreenLock;
@property(readonly, nonatomic) _Bool isPlayerVisible;
- (void)playerControlPlayerDidSinggleTag:(id)arg1;
- (void)playerControlActionStatus:(unsigned long long)arg1;
- (void)playerDidClickBackButton:(id)arg1;
- (void)playerControlDidClickPlay:(id)arg1;
- (void)playerControlDidClickShare:(id)arg1;
- (void)playerControlDidClickDownload:(id)arg1;
- (void)playerControlDidClickFavorite:(_Bool)arg1;
- (void)playerControlSeekEnd:(double)arg1;
- (void)playerControlSeekTo:(double)arg1;
- (void)playerControlSeekBegin:(double)arg1;
- (_Bool)isHDMIMode;
- (void)mediaPlayerAirplayState:(_Bool)arg1;
- (void)mediaPlayerDidExitFullscreen:(id)arg1;
- (void)mediaPlayerDidEnterFullscreen:(id)arg1;
- (void)mediaPlayerStateNotify:(id)arg1 withState:(long long)arg2 withError:(id)arg3 withFileCacheOrder:(long long)arg4 withIsCurrentFile:(_Bool)arg5;
- (void)mediaPlayerCheckMediaUrlError:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRequestStateChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)applyDLNAFuncItem;
- (void)applyAirPlayFuncItem;
- (_Bool)isFinalVarietyVideo;
- (void)startToPlayNextVideo;
- (void)mediaPlayerPlaybackDidFinish:(id)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerLoadStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(id)arg1;
- (void)onClarityInfoUpdated;
- (_Bool)isNeedDetailData;
- (_Bool)isPlayHDMI;
- (_Bool)isPlayP2PShouldAbort;
- (_Bool)isPlayP2PFailed;
- (void)onVideoIDPrepared:(id)arg1;
- (void)onVideoDetailDataReady;
- (void)onVideoInfoUpdated:(int)arg1;
- (void)onVideoInfoPrepareFailed:(id)arg1;
- (void)skipContinueTryWatchTip;
- (void)onVideoNoPurchaseForPaidMedia:(id)arg1 withGetProVInfo:(unsigned long long)arg2;
- (void)onVideoInfoPrepared:(id)arg1;
- (id)playerVersion;
- (_Bool)shouldSendReport;
- (void)applicationActive;
- (void)reachabilityChanged;
- (_Bool)isCachingData;
- (_Bool)canDownloadRuning;
- (id)topViewControlObjEx;
- (id)topViewControlObj;
- (void)onNetworkChanged;
- (void)checkBackPlayerWhenEnterForegroundIn3G;
- (void)network3GPromptWithConfirmBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkAirPlayView;
- (_Bool)checkAHAlertView;
- (_Bool)checkExist3GPrompt:(_Bool)arg1;
- (id)getplayTimeTip;
- (id)getInitialPlayTimeTip;
- (void)resetPreloadingImage;
- (void)showInitialPlayTimeTip;
- (void)showCachingPrompt:(_Bool)arg1 withImageIsHide:(_Bool)arg2;
- (void)setMediaplayerNoControllByMute;
- (void)RemoveAudioRouteChangeListener;
- (void)AddAudioRouteChangeListener;
- (_Bool)checkResolutionIfLoadSlowAndPrompt;
- (_Bool)checkCachingTimeWithDuration;
- (double)checkCachingTimeThanPlayingTime;
- (_Bool)checkMediaPlayerStateIsPlayed;
- (void)getVideoThumbImages:(double)arg1 count:(long long)arg2 interval:(double)arg3 completedHandler:(CDUnknownBlockType)arg4;
- (id)videoClarities;
- (double)currentVideoDuration;
- (double)currentVideoPlayableDuration;
- (double)currentVideoPlayTime;
- (id)getCurrentVideoScreenShot;
- (void)openStatusBar:(id)arg1;
- (void)resetRightListView;
- (id)getPlayingSubTitle;
- (id)getPlayingTitle;
- (void)refreshListButton;
- (id)refreshMainCtlVideoTitle;
- (void)updatePlayNextButtonClickEnable;
- (void)controlDownButtonAndClarityButton:(_Bool)arg1;
- (void)controlDownButtonAndMoreButtonWithTVLive;
- (void)mannlyPerformPlayAction;
- (void)performRotationAnimation:(_Bool)arg1;
- (void)toggleFullscreen:(_Bool)arg1 animated:(_Bool)arg2 toggleTouch:(_Bool)arg3;
- (void)recoverPlayerUI;
- (id)customViewWithLayerID:(int)arg1 smallOrMainPlayer:(_Bool)arg2;
- (void)removeCustomViewWithLayerID:(int)arg1 smallOrMainPlayer:(_Bool)arg2;
- (_Bool)addCustomView:(id)arg1 withLayerID:(int)arg2 smallOrMainPlayer:(_Bool)arg3;
- (id)customPlayerUI:(_Bool)arg1;
- (void)removeCustomPlayerUI:(_Bool)arg1;
- (void)setCustomMainUI:(id)arg1;
- (void)setCustomSimpleUI:(id)arg1;
- (void)updatePlayerFrame:(_Bool)arg1 needDrawUI:(_Bool)arg2;
@property(nonatomic) struct CGRect playerFrame;
@property long long playerMode; // @synthesize playerMode=_playerMode;
- (_Bool)canBecomeFirstResponder;
- (void)recordPlayerSpeed:(double)arg1 withCDN:(long long)arg2;
- (void)returnFromFullScreen;
- (void)returnFromIPShowingView;
- (void)resetIPAppealing:(_Bool)arg1;
- (void)removeIPAppealing;
- (void)showIPAppealing:(id)arg1;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)onMotionTimer;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)showErrorTip:(long long)arg1 withError:(id)arg2;
@property(retain, nonatomic) NSString *loadingImgURL; // @synthesize loadingImgURL=_loadingImgURL;
- (long long)currentInterfaceType;
@property(retain, nonatomic) NSString *currentVideoFormat;
@property(retain) NSError *lastPlayerError;
- (void)resetMediaAndPlayer;
- (void)adjustVideoDataType;
- (void)configVideoDataTypeWithInterfaceType:(long long)arg1;
- (long long)makeNextEpisodeIndex;
- (void)makeVideoFileID:(long long)arg1;
- (void)makeMediaStartTimeAndEndTime:(double)arg1;
- (_Bool)isVideoDownloadedAtSubIndex:(long long)arg1 subName:(id)arg2;
- (void)backPlayInitialTime;
- (void)saveRecordWithPlaybackTime:(double)arg1;
- (void)aysnSaveRecord;
- (id)getTimeQueue;
- (void)saveRecord;
- (void)closeAdvertisement;
- (void)closeMediaRootViewController;
- (void)pausePlayerIfShouldPaused;
- (void)playMediaAndModifyStatus;
- (void)bottomControlPlayStateFromBackground;
- (_Bool)isAdsVideoPaused;
- (_Bool)isAdsInCacheMode;
- (_Bool)isAdsPlaying;
- (_Bool)isAdsLoading;
- (void)controlAdsPlayOrPause:(_Bool)arg1;
- (void)controlMediaPlayStop;
- (void)controlMediaPlayOrPause:(_Bool)arg1;
- (void)slideToPlay:(double)arg1;
- (_Bool)isFuncItemEnabled:(int)arg1;
- (void)setFuncItem:(int)arg1 enable:(_Bool)arg2;
- (void)startToPlayOtherFormat:(id)arg1;
- (void)startMediaPlayToPlayAgainWithReason:(long long)arg1 withError:(id)arg2;
- (_Bool)startToPlayNextEpisode:(_Bool)arg1;
- (void)playNextButtonClick;
- (void)startMediaPlayToPlayWithIndex:(long long)arg1 withNeedMoveButton:(_Bool)arg2;
- (_Bool)videoIndexPayCanBePlayed:(long long)arg1;
- (void)startMediaPlayToPlay;
- (void)dealPreCache;
- (_Bool)shouldLoadPreviewPoster;
@property(readonly, nonatomic) _Bool isInCacheMode;
- (void)jumpToWebPlay;
- (void)readyToPlayAds;
- (void)readyToPlayVideo;
- (void)check3GMediaPlay:(_Bool)arg1;
- (void)startPrepareMediaToPlay;
- (void)startPrepareHlsForAirplay;
- (void)startPlayMedia;
- (void)updateVideoDetailInfo:(id)arg1;
- (void)makeMediaPlayWithVideoInfo:(id)arg1 withPlayedTime:(double)arg2 withEpisodeIndex:(long long)arg3 withVideoList:(id)arg4 withInterfaceTye:(long long)arg5;
@property(readonly) _Bool startedPlay;
@property(readonly, retain, nonatomic) NSDate *lastAirplayTime;
@property(readonly, retain) QQMediaPlayerController *moviePlayerController;
- (void)momentPublishSucceed:(id)arg1;
- (void)hideContentController:(id)arg1;
- (void)displayContentController:(id)arg1;
- (struct CGRect)frameForContentController;
- (void)removeCustomObserver;
- (void)releaseCustomObject;
- (void)removeCustomSubViews;
- (void)removeAllRelationshipObject;
- (void)addCustomObserver;
- (void)addCustomUnlongLiveSubViews;
- (void)addCustomeSubViews;
- (void)createCustomViews;
- (void)addAllRelatioinShipObject;
- (void)checkSubViewStatus;
- (void)smallPlayerComplectedDelegate;
- (void)endChangePlayerFlush:(_Bool)arg1;
- (void)didLoadOnSmallPlayerMode;
- (void)didLoadOnFullPlayerMode;
- (void)willLoadOnSmallPlayerMode;
- (void)willLoadOnFullPlayerMode;
- (void)launchSmallPlayer;
- (void)launchFullPlayerWithiOS7:(_Bool)arg1;
- (void)launchFullPlayer;
- (void)calculatorPlayerZoneWhenInit;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onPlayerShouldPausePlay:(id)arg1;
- (void)onPlayerWillStartToPlay:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)onAppWillResignActive:(id)arg1;
- (void)updateAdsClientVC;
- (void)lauchFullScreenManually;
- (void)didEnterOrLeaveFullScreen:(_Bool)arg1;
- (void)willEnterOrLeaveFullScreen:(_Bool)arg1;
- (void)dealloc;
- (void)jumpAdRefreshNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) QLShareFeed *shareFeedInfo;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly) Class superclass;

@end

