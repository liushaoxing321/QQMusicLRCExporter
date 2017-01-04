//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;
@protocol QLFacilityUrlDelegate;

@interface QLFacilityUrlManager : NSObject
{
    id <QLFacilityUrlDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <QLFacilityUrlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *eduGetvbKeyURL;
@property(readonly, nonatomic) NSString *eduGetvKeyURL;
@property(readonly, nonatomic) NSString *eduGetvinfoURL;
@property(readonly, nonatomic) NSString *playInfoBatchReportURL;
@property(readonly, nonatomic) NSString *playInfoReportURL;
@property(readonly, nonatomic) NSURL *fullJCE_URLInfomation;
@property(readonly, nonatomic) NSString *errorCodeConfigURL;
@property(readonly, nonatomic) NSString *interactiveVoteH5URL;
@property(readonly, nonatomic) NSString *interactiveVoteHitPointURL;
@property(readonly, nonatomic) NSString *banabaBarrageRequestURLOfLikeThisBanaba;
@property(readonly, nonatomic) NSString *banabaBarrageRequestURLOfCommitMSG;
@property(readonly, nonatomic) NSString *banabaBarrageRequestURLOfBarrageLists;
@property(readonly, nonatomic) NSString *banabaBarrageRequestURLOfTargetID;
@property(readonly, nonatomic) NSString *liveTVStationShareURL;
@property(readonly, nonatomic) NSString *liveShareURL;
@property(readonly, nonatomic) NSString *defaultPlaybackServerUrl;
@property(readonly, nonatomic) NSString *adsConfigURL;
@property(readonly, nonatomic) NSString *varietyRelatedURL1;
@property(readonly, nonatomic) NSString *varietyExtrasURL;
@property(readonly, nonatomic) NSString *ipAppealingURL;
@property(readonly, nonatomic) NSString *utopiaLiveProgramVInfoBKURL;
@property(readonly, nonatomic) NSString *utopiaLiveProgramVInfoRetryURL;
@property(readonly, nonatomic) NSString *utopiaLiveProgramVInfoURL;
@property(readonly, nonatomic) NSString *liveProgramVInfoBKURL;
@property(readonly, nonatomic) NSString *liveProgramVInfoRetryURL;
@property(readonly, nonatomic) NSString *liveProgramVInfoURL;
@property(readonly, nonatomic) NSString *liveProgramQueryURL;
@property(readonly, nonatomic) NSString *liveProgramInfoURL;
@property(readonly, nonatomic) NSString *liveProgramsNewURL;
@property(readonly, nonatomic) NSString *liveProgramsURL;
@property(readonly, nonatomic) NSString *liveListURL;
@property(readonly, nonatomic) NSString *laterCoverRelatedURL;
@property(readonly, nonatomic) NSString *videoStoreURL;
@property(readonly, nonatomic) NSString *getsizeURL;
@property(readonly, nonatomic) NSString *checkTimeURL;
@property(readonly, nonatomic) NSString *getspeedURL;
@property(readonly, nonatomic) NSString *getUserIpURL;
@property(readonly, nonatomic) NSString *getvinfoURL;
@property(readonly, nonatomic) NSString *getinfoURL;
@property(readonly, nonatomic) NSString *getvbKeyURL;
@property(readonly, nonatomic) NSString *getbKeyURL;
@property(readonly, nonatomic) NSString *getvKeyURL;
@property(readonly, nonatomic) NSString *getkeyURL;
@property(readonly, nonatomic) NSString *gethlsURL;
@property(readonly, nonatomic) NSString *geturlURL;
@property(readonly, nonatomic) NSString *getPlatform;
@property(readonly, nonatomic) NSString *getSdtFromForLive;
@property(readonly, nonatomic) NSString *getSdtFromForDownload;
@property(readonly, nonatomic) NSString *getSdtFromForPlay;
@property(readonly, nonatomic) NSString *columeDetailCGI;
@property(readonly, nonatomic) NSString *shortDetailURL;
@property(readonly, nonatomic) NSString *coverDetailURL;

@end

