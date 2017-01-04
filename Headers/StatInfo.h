//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface StatInfo : NSObject <NSCoding>
{
    NSMutableDictionary *values;
    _Bool _immeUploadViaWifi;
    _Bool _immeUploadViaWifiOrCarrier;
    _Bool _used;
}

+ (id)buildThemeStatusWithThemeId:(int)arg1 Aidid:(int)arg2 Time:(int)arg3;
+ (id)buildFunctionStatusInfo:(int)arg1 function:(id)arg2;
+ (id)buildImageHitInfo:(id)arg1 originalUrl:(id)arg2 hit:(_Bool)arg3;
+ (id)buildProfileVCFrom:(long long)arg1 toUin:(unsigned long long)arg2;
+ (id)buildReceivedLengthError:(unsigned long long)arg1 songType:(int)arg2 host:(id)arg3 ip:(id)arg4;
+ (id)buildWiFiLoginStatWithReceivedData:(id)arg1 andCheckResult:(long long)arg2;
+ (id)buildTJReport:(id)arg1 withAction:(int)arg2;
+ (id)buildRecognizeStatWithRecognizeReslt:(int)arg1;
+ (id)buildShareStatWithShareDestination:(int)arg1;
+ (id)buildAddToFavouriteStatWithIsBatchAddToFavourite:(_Bool)arg1;
+ (id)buildSearchStatWithSearchWord:(id)arg1 withSearchID:(id)arg2;
+ (id)buildDownloadStatWithSongId:(unsigned long long)arg1;
+ (id)buildListenSongStatWithSongId:(unsigned long long)arg1 playTime:(long long)arg2 networkType:(int)arg3 songType:(int)arg4;
+ (id)buildBulletGiftClickStatWithEventId:(int)arg1 bulletId:(int)arg2 bulletNum:(int)arg3;
+ (id)buildBulletGiftExposureStatWithEventId:(int)arg1 bulletId:(int)arg2;
+ (id)buildBulletBubbleClickStatWithEventId:(int)arg1 andItemId:(int)arg2;
+ (id)buildBulletBubbleExposureStatWithEventId:(int)arg1 andItemId:(int)arg2;
+ (id)buildDownloadWhileCachingAlertStatWithClick:(_Bool)arg1;
+ (id)buildUserIconStatWithEventId:(int)arg1 isClick:(_Bool)arg2;
+ (id)buildPosterFontModelVipExposureStatWithEventId:(int)arg1 andItemId:(id)arg2;
+ (id)buildPosterFontModelVipClickStatWithEventId:(int)arg1 andItemId:(id)arg2;
+ (id)buildGreenDiamonAlertViewStatWithType:(int)arg1 withAid:(id)arg2 withAlertViewId:(long long)arg3;
+ (id)buildRecentPlayCategoryStat:(long long)arg1 time:(long long)arg2;
+ (id)buildRadioPlayStat:(long long)arg1 radioInGroup:(long long)arg2 time:(long long)arg3;
+ (id)buildRemotePushClickStat:(id)arg1 launchMode:(long long)arg2;
+ (id)buildLocalPushClickStat:(id)arg1 launchMode:(long long)arg2 tj:(id)arg3;
+ (id)buildFireRemotePushInForeground:(id)arg1;
+ (id)buildFireLocalPushInForeground:(id)arg1;
+ (id)buildScheduleLocalPushItem:(id)arg1;
+ (id)buildGetLocalPushItemContent:(id)arg1;
+ (id)buildGetLocalPushItemId:(id)arg1;
+ (id)buildGetLocalPushList;
+ (id)buildGreenDiamondStatWithType:(long long *)arg1 eventId:(long long)arg2 jumpUrl:(id)arg3;
+ (id)buildMidasPaymentAction:(long long)arg1 resultCode:(long long)arg2 errorMsg:(id)arg3 billNo:(id)arg4 productId:(id)arg5 aid:(id)arg6 netError:(long long)arg7;
+ (id)buildQPlayAutoListen:(int)arg1 songId:(unsigned long long)arg2 playtime:(double)arg3 deviceType:(int)arg4 brand:(id)arg5 model:(id)arg6 deviceID:(id)arg7;
+ (id)buildQPlayAutoConnect:(int)arg1 result:(int)arg2 deviceType:(int)arg3 brand:(id)arg4 model:(id)arg5 deviceID:(id)arg6;
+ (id)buildChinaUnicomFreeError:(id)arg1 requestURL:(id)arg2 phoneNUmber:(id)arg3;
+ (id)buildCommendClick:(id)arg1;
+ (id)buildTodayOpen:(int)arg1 category:(int)arg2;
+ (id)buildFeedbackByType:(int)arg1 subtype:(int)arg2;
+ (id)buildCPDAD:(int)arg1 pos:(int)arg2 action:(int)arg3;
+ (id)buildShowSplash:(int)arg1 showFlag:(int)arg2 clickFlag:(int)arg3 showTime:(int)arg4 jumpover:(int)arg5 preSplashFlag:(int)arg6 curdayFlag:(int)arg7 splashType:(int)arg8;
+ (id)buildLoadSplash:(int)arg1 getSplashType:(int)arg2;
+ (id)buildShareToVoice:(long long)arg1 activeType:(int)arg2 sharedType:(id)arg3;
+ (id)buildStuckStatWithMinitorCount:(int)arg1 stuckCount:(int)arg2 stuckTimes:(unsigned long long)arg3;
+ (id)buildSearchLyricBySearchID:(id)arg1 query:(id)arg2 Text:(id)arg3 area_idx:(int)arg4 pos:(int)arg5 docId:(id)arg6 action:(id)arg7;
+ (id)buildSearchSongListBySearchID:(id)arg1 query:(id)arg2 Text:(id)arg3 area_idx:(int)arg4 pos:(int)arg5 docId:(id)arg6;
+ (id)buildSearchAlbumBySearchID:(id)arg1 query:(id)arg2 Text:(id)arg3 area_idx:(int)arg4 pos:(int)arg5 docId:(id)arg6;
+ (id)buildSearchMVBySearchID:(id)arg1 query:(id)arg2 Text:(id)arg3 area_idx:(int)arg4 pos:(int)arg5 docId:(id)arg6;
+ (id)buildSearchSongBySearchID:(id)arg1 query:(id)arg2 Text:(id)arg3 area_idx:(int)arg4 pos:(int)arg5 subpos:(int)arg6 action:(id)arg7 docId:(id)arg8 type:(id)arg9;
+ (id)buildSearchZhiDaBySearchID:(id)arg1 query:(id)arg2 resType:(id)arg3 Text:(id)arg4 docId:(id)arg5;
+ (id)buildSearchSmartBySearchID:(id)arg1 query:(id)arg2 text:(id)arg3 pos:(int)arg4 subpos:(int)arg5 resType:(id)arg6 action:(id)arg7;
+ (id)buildSearchHotWordBySearchID:(id)arg1 text:(id)arg2 pos:(int)arg3 resType:(id)arg4 action:(id)arg5;
+ (id)buildSearchYunyingBySearchID:(id)arg1 text:(id)arg2 pos:(int)arg3 resType:(id)arg4 action:(id)arg5;
+ (id)buildSearchHistoryBySearchID:(id)arg1 text:(id)arg2 pos:(int)arg3;
+ (id)buildFirstReleaseSongTJReport:(id)arg1;
+ (id)buildClick:(int)arg1 picId:(id)arg2;
+ (id)buildSimilarRecommendStat:(int)arg1 OriginId:(unsigned long long)arg2 TargetId:(unsigned long long)arg3 ClickId:(int)arg4 ItemType:(unsigned int)arg5;
+ (id)buildChannelV4CommonStat:(id)arg1;
+ (id)buildChannelV4CommonStat:(unsigned long long)arg1 statType:(int)arg2 from:(int)arg3 tjstr:(id)arg4 position:(id)arg5;
+ (id)buildDownloadSong:(id)arg1 from:(id)arg2 source:(id)arg3 itemId:(id)arg4 reasonID:(id)arg5 reasonType:(id)arg6 moduleID:(id)arg7 sourceID:(id)arg8 downType:(id)arg9;
+ (id)buildLanchTime:(int)arg1 launchType:(int)arg2;
+ (id)buildCGIFlowCount:(id)arg1;
+ (id)buildFlowCount:(id)arg1;
+ (id)buildGoToDarrenProfileViewFromGene:(id)arg1 darrenUin:(unsigned long long)arg2;
+ (id)buildGeneClick:(id)arg1;
+ (id)buildUsedSpace:(_Bool)arg1 remainSpace:(unsigned long long)arg2 totalSpace:(unsigned long long)arg3 musicSpace:(unsigned long long)arg4;
+ (id)buildPersistentConnectionMessage:(_Bool)arg1 firstMessageId:(unsigned long long)arg2 firstSeqId:(unsigned long long)arg3 messageCount:(unsigned long long)arg4 lastSeqId:(unsigned long long)arg5 otherMessageId:(id)arg6;
+ (id)buildPersistentConnectionConnected:(int)arg1 connectTime:(unsigned long long)arg2 shakeHandsTime:(unsigned long long)arg3 address:(id)arg4 ip:(id)arg5;
+ (id)buildDownloadAlbumImage:(int)arg1 errorUrl:(id)arg2 delayTime:(int)arg3 cdn:(id)arg4 cdnIp:(id)arg5 speedByBPS:(int)arg6;
+ (id)buildExpressResult:(int)arg1 cdn:(id)arg2 downTime:(int)arg3;
+ (id)buildExpressCGI:(int)arg1 result:(int)arg2;
+ (id)buildDevicePlayTime:(id)arg1 deviceName:(id)arg2 mName:(id)arg3 modeName:(id)arg4 time:(double)arg5;
+ (id)buildDeviceRegister:(id)arg1 deviceName:(id)arg2 mName:(id)arg3 modeName:(id)arg4;
+ (id)buildCreateRadioSongFailedStat:(id)arg1;
+ (id)buildFocusImageSuccess:(id)arg1 httpStatusCode:(int)arg2 time:(unsigned long long)arg3;
+ (id)buildFocusImageError:(id)arg1 httpStatusCode:(int)arg2 time:(unsigned long long)arg3;
+ (id)buildCgiResultByCid:(int)arg1 type:(int)arg2 errCode:(int)arg3 ConnectionTime:(int)arg4 Time:(int)arg5 ReqSize:(int)arg6 ResSize:(int)arg7 url:(id)arg8 hostIpTable:(id)arg9 useDirectIp:(_Bool)arg10;
+ (id)buildCgiResultByCid:(int)arg1 errCode:(int)arg2 url:(id)arg3;
+ (id)buildOverRangeErrorByCID:(int)arg1 errorValue:(id)arg2 errorField:(id)arg3;
+ (_Bool)canUploadCgiResult;
+ (id)buildClick:(int)arg1 withServer:(long long)arg2;
+ (id)buildClick:(int)arg1 songId:(unsigned long long)arg2 itemType:(int)arg3 vid:(id)arg4;
+ (id)buildGrayUpgradeAlertShowStatWithVersion:(id)arg1;
+ (id)buildLeakViewControllerStatWithVCName:(id)arg1;
+ (id)buildViewControllerStatWithVCName:(id)arg1;
+ (id)buildThirdURLFrom:(id)arg1;
+ (id)buildClick:(int)arg1 resType:(int)arg2 resId:(int)arg3;
+ (id)buildClick:(int)arg1 skinId:(int)arg2;
+ (id)buildClick:(int)arg1 itemType:(int)arg2;
+ (id)buildClick:(int)arg1 albumid:(long long)arg2;
+ (id)buildClick:(int)arg1 songId:(unsigned long long)arg2;
+ (id)buildClick:(int)arg1 vid:(id)arg2;
+ (id)buildClick:(int)arg1;
+ (id)buildSongChorusStat:(unsigned long long)arg1 action:(int)arg2 posTime:(int)arg3;
+ (id)buildDeveloperClick:(long long)arg1 itemType:(int)arg2;
+ (id)buildDeveloperClick:(long long)arg1;
+ (id)buildExposureInfo:(int)arg1 resType:(int)arg2 resId:(int)arg3;
+ (id)buildExposureInfo:(int)arg1 songid:(unsigned long long)arg2;
+ (id)buildRankHistoryBtnClickInfoWithItemId:(unsigned long long)arg1 typeId:(unsigned long long)arg2;
+ (id)buildPaySongClickInfo:(int)arg1 songid:(unsigned long long)arg2;
+ (id)buildPayAlbumClickInfo:(int)arg1;
+ (id)buildExposureInfo:(int)arg1 skinId:(int)arg2;
+ (id)buildExposureInfo:(int)arg1;
+ (id)buildMVThemeClick:(int)arg1;
+ (id)buildSingersListenCount;
+ (id)buildAutoSavedHighQualitySongsCount;
+ (id)buildDownloadedHighQualitySongsCount;
+ (id)buildLocalSongsCount:(int)arg1;
+ (id)buildAppRecommondClick:(int)arg1 appName:(id)arg2;
+ (id)buildMoreClick;
+ (id)buildThemeClick:(int)arg1;
+ (id)buildAppShareTo:(int)arg1;
+ (id)buildCollectedFoldersOffLineCount;
+ (id)buildCollectedFoldersCount;
+ (id)buildCollectedSongsOffLineCount;
+ (id)buildCollectedSongsCount;
+ (id)buildIpodSongsCount;
+ (id)buildDownloadSongsCount;
+ (id)buildAllSongsNum:(int)arg1;
+ (id)buildMoreNoticeClickWithType:(int)arg1 Id:(int)arg2;
+ (id)buildSearchResultClickWithType:(int)arg1;
+ (id)buildAutoSaveSongStatWithSong:(id)arg1 Err:(int)arg2 Net:(int)arg3 quality:(int)arg4 high:(int)arg5 vip:(int)arg6 speed:(int)arg7 host:(id)arg8 retryCount:(int)arg9 cdnIp:(id)arg10 errorCode:(int)arg11 Time:(unsigned long long)arg12 urlIndex:(int)arg13 receivedBytes:(int)arg14 writeErr:(id)arg15 streamURL:(id)arg16;
+ (id)buildHighQualityLimitByType:(int)arg1;
+ (id)buildAddToMyFavorite:(int)arg1 From:(id)arg2 Source:(id)arg3 Itemid:(id)arg4 ReasonID:(id)arg5 ReasonType:(id)arg6 ModuleID:(id)arg7 sourceID:(id)arg8;
+ (id)buildStreamMediaServerSelect:(int)arg1;
+ (id)buildBannerStatWithTargetId:(int)arg1 exposedCount:(int)arg2 clickCount:(int)arg3;
+ (id)buildRateAlertStat:(int)arg1;
+ (id)buildOfflineListenStatCount:(int)arg1 offline:(int)arg2;
+ (id)buildChoiceSongStat:(id)arg1 From:(int)arg2;
+ (id)buildLostCache:(int)arg1 upgrade:(_Bool)arg2 jailBroken:(_Bool)arg3 OSVersion:(id)arg4 model:(id)arg5 musicVersion:(id)arg6;
+ (id)buildPersistent:(int)arg1 iErrorCount:(int)arg2;
+ (id)buildVoiceInput:(int)arg1 iSelectSeq:(int)arg2;
+ (id)buildCrashInfoWithOS:(id)arg1 Version:(id)arg2 Model:(id)arg3 time:(unsigned long long)arg4 crashInfo:(id)arg5 buildVersion:(id)arg6 internalVersion:(id)arg7;
+ (id)buildAPNStatics;
+ (id)buildComeFromWX;
+ (id)buildComeFrom:(id)arg1;
+ (id)buildShareTo:(int)arg1 shareType:(int)arg2 shareid:(unsigned long long)arg3 singerid:(unsigned long long)arg4 shareObject:(id)arg5 source:(id)arg6 itemId:(id)arg7 reasonID:(id)arg8 reasonType:(id)arg9 moduleID:(id)arg10 sourceID:(id)arg11 msg:(id)arg12;
+ (id)buildFocusClick:(id)arg1 tagerId:(id)arg2 focusId:(int)arg3;
+ (id)buildDownloadInfoHigh:(int)arg1 Low:(int)arg2;
+ (id)buildAirPlayButtonShow;
+ (id)buildIPhoneInfoWithOS:(id)arg1 Version:(id)arg2 Model:(id)arg3;
+ (unsigned long long)vipLevelForUser;
+ (id)buildDownloadSongStatWithSong:(id)arg1 Time:(unsigned long long)arg2 Err:(int)arg3 Net:(int)arg4 urlIndex:(int)arg5 quality:(int)arg6 high:(int)arg7 vip:(int)arg8 from:(id)arg9 speedByBPS:(int)arg10 host:(id)arg11 cdnIp:(id)arg12 errorCode:(int)arg13 receivedBytes:(int)arg14 writeErr:(id)arg15 streamURL:(id)arg16;
+ (id)buildSearchStatWithKey:(id)arg1 withSearchID:(id)arg2;
+ (id)buildScanIPodStatWithCount:(int)arg1 Time:(unsigned long long)arg2 Auto:(int)arg3;
+ (id)buildUpdateFavorStatWithTime:(unsigned long long)arg1;
+ (id)buildLoginOKStatWithAuto:(int)arg1 Time:(unsigned long long)arg2;
+ (id)buildMVDownload:(id)arg1 Time:(unsigned long long)arg2 Err:(int)arg3 from:(id)arg4 url:(id)arg5;
+ (id)buildMVStopStatWithSong:(id)arg1 subId:(id)arg2 Time:(unsigned long long)arg3 Err:(int)arg4 from:(id)arg5 secondCacheCounts:(int)arg6 firstBufferExist:(int)arg7 topType:(id)arg8 topId:(id)arg9;
+ (id)buildLandscapelModePlayTime:(unsigned long long)arg1 withSongId:(unsigned long long)arg2;
+ (id)buildSongStopStatWithSong:(id)arg1 playType:(int)arg2 list:(int)arg3 topType:(id)arg4 topId:(id)arg5 subId:(id)arg6 tag:(int)arg7 Time:(struct SFlexInteger)arg8 Err:(int)arg9 from:(id)arg10 outdev:(int)arg11 secondCacheCounts:(int)arg12 secondCacheTimes:(id)arg13 firstBufferExist:(int)arg14 host:(id)arg15 retryCount:(int)arg16 url:(int)arg17 errorCode:(int)arg18 netType:(int)arg19 parentid:(long long)arg20 formeType:(int)arg21 searchId:(id)arg22 recReason:(id)arg23 clipped:(_Bool)arg24 channelRecomend:(id)arg25 channelClick:(id)arg26 dts:(_Bool)arg27 playdevice:(int)arg28 playMode:(int)arg29 supersound:(int)arg30;
+ (id)buildSongStopStatWithSong:(id)arg1 playType:(int)arg2 list:(int)arg3 topType:(id)arg4 topId:(id)arg5 subId:(id)arg6 tag:(int)arg7 Time:(struct SFlexInteger)arg8 Err:(int)arg9 from:(id)arg10 outdev:(int)arg11 secondCacheCounts:(int)arg12 secondCacheTimes:(id)arg13 firstBufferExist:(int)arg14 host:(id)arg15 retryCount:(int)arg16 url:(int)arg17 errorCode:(int)arg18 netType:(int)arg19 parentid:(long long)arg20 formeType:(int)arg21 searchId:(id)arg22 recReason:(id)arg23 clipped:(_Bool)arg24 channelRecomend:(id)arg25 channelClick:(id)arg26 dts:(_Bool)arg27 playdevice:(int)arg28 playMode:(int)arg29;
+ (long long)nextSeqId;
@property _Bool used; // @synthesize used=_used;
@property(nonatomic) _Bool immeUploadViaWifiOrCarrier; // @synthesize immeUploadViaWifiOrCarrier=_immeUploadViaWifiOrCarrier;
@property(nonatomic) _Bool immeUploadViaWifi; // @synthesize immeUploadViaWifi=_immeUploadViaWifi;
- (void).cxx_destruct;
- (id)description;
- (id)getStringForKey:(id)arg1;
- (long long)getInt64Forkey:(id)arg1;
- (int)getIntForKey:(id)arg1;
- (id)getValues;
- (id)getInfo;
- (void)setDouble:(double)arg1 ForKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setLongLong:(long long)arg1 ForKey:(id)arg2;
- (void)setUnsignedLongLong:(unsigned long long)arg1 ForKey:(id)arg2;
- (void)setInt:(int)arg1 ForKey:(id)arg2;
- (void)setObject:(id)arg1 ForKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initImportantStatinfo;
- (id)init;
- (void)dealloc;

@end

