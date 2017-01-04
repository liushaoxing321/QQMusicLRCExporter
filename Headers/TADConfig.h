//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASIHTTPRequestDelegate-Protocol.h"

@class NSBundle, NSCache, NSDictionary, NSString;

@interface TADConfig : NSObject <ASIHTTPRequestDelegate>
{
    double _lastAdPlayTime;
    NSDictionary *_configData;
    NSDictionary *_defaultConfigData;
    NSDictionary *_testConfigData;
    NSBundle *_tadBundle;
    double _timediff;
    NSCache *_monitoringRangeCache;
}

+ (_Bool)isDeubgging;
+ (long long)adPreloadRequestChannelLimit;
+ (long long)adPreloadChannelMax;
+ (_Bool)adVideoEnabledNews;
+ (_Bool)adVideoEnabledVPlus;
+ (_Bool)adVideoAutpPlayVPlus;
+ (_Bool)adVideoAutpPlayNews;
+ (id)adVideoAutoPlayChannels;
+ (_Bool)adVideoAutpPlayNormal;
+ (long long)adReportIntervalCellular;
+ (long long)adReportIntervalWifi;
+ (_Bool)reportPVEnabled;
+ (long long)impressionCount;
+ (long long)impressionRatio;
+ (long long)impressionDuration;
+ (long long)adImpressionReportType;
+ (long long)adImpressionType;
+ (_Bool)enablePanAdjustVolume;
+ (_Bool)enableAutoplayStreamGif;
+ (_Bool)enableAdInWhymePortraitScreen;
+ (_Bool)enableAdInWhymeFullScreen;
+ (_Bool)enableHotfix;
+ (_Bool)enableWHAd;
+ (_Bool)enableRichMedia;
+ (long long)adSelectorTimeoutSeconds;
+ (_Bool)enableAdSelector;
+ (long long)shouldTrueViewShowAtLeastAd;
+ (long long)shouldTrueViewShowInVideoDuration;
+ (long long)shouldTrueViewSkipSeconds;
+ (_Bool)enableTrueView;
+ (_Bool)hasEnoughFreeDiskSpace;
+ (double)getFreeDiskspace;
+ (id)rootDirectory;
+ (id)richContentUrl;
+ (_Bool)videoPicAdEnabled;
+ (long long)rtSplashTimeout;
+ (_Bool)cellularToUnavailableEnabled;
+ (_Bool)cellularOfflineAdEnabled;
+ (_Bool)offlineAdEnabled;
+ (unsigned long long)adLogLevel;
+ (_Bool)shouldAttemptPersistentConnection;
+ (_Bool)enableLviewAdaptor;
+ (long long)maxVideoCacheCount;
+ (long long)videoCacheExpirtedTime;
+ (_Bool)enableVideoCache;
+ (_Bool)cacheImageIfNotWifi;
+ (long long)rtVideoPicAdRequestTimeout;
+ (long long)rtArticleAdRequestTimeout;
+ (long long)adWWANRequestTimeout;
+ (long long)adWiFiRequestTimeout;
+ (long long)adCacheTimeout;
+ (id)patchReportUrl;
+ (id)patchRequestUrl;
+ (id)adMindClickURLString;
+ (id)adClickURLString;
+ (id)adPingServer;
+ (id)adPvURLString;
+ (id)adMonitorURLString;
+ (id)adLviewURLString;
+ (id)offlineCpdStrategy;
+ (id)appLinkRegexList;
+ (double)adMonitoringTimeInterval;
+ (long long)adMonitoringSampleRate;
+ (id)adMonitoringRange;
+ (_Bool)useSplashCPM;
+ (long long)adDefaultInterval;
+ (long long)adStreamInterval;
+ (long long)adSplashInterval;
+ (int)MagicNum;
+ (int)PlatForm;
+ (id)EncryptVersion;
+ (double)TotalTimeOut;
+ (double)RequestTimeOut;
+ (int)ShortDuration;
+ (_Bool)shouldUseInAppstore;
+ (id)ExceptionFeedback;
+ (id)ConfigUpdate;
+ (id)ConfigFeedback;
+ (id)Version;
+ (int)ExpiredTime;
+ (_Bool)IsTestUser;
+ (_Bool)FullScreenClick;
+ (_Bool)shouldLandingInBrowser:(int)arg1;
+ (_Bool)BrowserShouldLeaveApplication;
+ (id)ClientVersion;
+ (int)adFreeIntervalForLive;
+ (int)adFreeInterval;
+ (int)FrequencyTime;
+ (int)ShowTime;
+ (int)ReportRate;
+ (_Bool)UseCache;
+ (_Bool)ShowClickButton;
+ (id)skipAdText;
+ (_Bool)showSkip;
+ (_Bool)EnableWKWebView;
+ (_Bool)EnableIVB;
+ (_Bool)EnableWC;
+ (_Bool)ShowAd;
+ (_Bool)AllNetworkAd;
+ (_Bool)EnableMMASdkReport;
+ (id)MMASdkConfigURL;
+ (id)PlayerParams;
+ (id)TimestampServer;
+ (id)TemplateServer;
+ (id)FrequencyServer;
+ (id)ConfigServer;
+ (id)SecClickURL;
+ (id)LogServer;
+ (id)MediaServer;
+ (id)OidServer;
+ (id)AdidServer;
+ (double)TimeDiff;
+ (id)TADBundle;
+ (id)configData;
+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *monitoringRangeCache; // @synthesize monitoringRangeCache=_monitoringRangeCache;
@property(nonatomic) double timediff; // @synthesize timediff=_timediff;
@property(retain, nonatomic) NSBundle *tadBundle; // @synthesize tadBundle=_tadBundle;
@property(retain, nonatomic) NSDictionary *testConfigData; // @synthesize testConfigData=_testConfigData;
@property(retain, nonatomic) NSDictionary *defaultConfigData; // @synthesize defaultConfigData=_defaultConfigData;
@property(retain) NSDictionary *configData; // @synthesize configData=_configData;
@property(nonatomic) double lastAdPlayTime; // @synthesize lastAdPlayTime=_lastAdPlayTime;
- (void).cxx_destruct;
- (id)localCachedConfigFilePath;
- (id)testConfigFilePath;
- (id)defaultConfigFilePath;
- (void)validateLocalConfigCache;
- (id)valueForConfigKey1:(id)arg1 key2:(id)arg2;
- (id)valueForConfigKey1:(id)arg1;
- (void)resetToDefaultConfig;
- (void)forceUpdate;
- (void)update;
- (void)updateConfigFile:(id)arg1;
- (void)postNotifyNotificationWithName:(id)arg1;
- (void)updateTimeDiff;
- (void)updateTimeDiffBackGround;
- (void)updateConfigFileBackground:(id)arg1;
- (void)setCurrentConfigData:(id)arg1;
- (void)initFromFile;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

