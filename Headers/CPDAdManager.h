//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ImageManagerDelegate-Protocol.h"

@class CPDADConfig, NSString;

@interface CPDAdManager : NSObject <ImageManagerDelegate>
{
    CPDADConfig *_playerADConfig;
    CPDADConfig *_iconADConfig;
    CPDADConfig *_playerRecommedADConfig;
    CPDADConfig *_greenDiamondADConfig;
    CPDADConfig *_downloadActionSheetADConfig;
    CPDADConfig *_singerAdConfig;
}

+ (id)sharedManager;
@property(retain, nonatomic) CPDADConfig *singerAdConfig; // @synthesize singerAdConfig=_singerAdConfig;
@property(retain, nonatomic) CPDADConfig *downloadActionSheetADConfig; // @synthesize downloadActionSheetADConfig=_downloadActionSheetADConfig;
@property(retain, nonatomic) CPDADConfig *greenDiamondADConfig; // @synthesize greenDiamondADConfig=_greenDiamondADConfig;
@property(retain, nonatomic) CPDADConfig *playerRecommedADConfig; // @synthesize playerRecommedADConfig=_playerRecommedADConfig;
@property(retain, nonatomic) CPDADConfig *iconADConfig; // @synthesize iconADConfig=_iconADConfig;
@property(retain, nonatomic) CPDADConfig *playerADConfig; // @synthesize playerADConfig=_playerADConfig;
- (void).cxx_destruct;
- (void)decreaseSingerAdShowTimes;
- (void)decreasePlayerAdShowTimes;
- (void)navigateFromCPDAdItem:(id)arg1;
- (id)getDownloadActionSheetAdToShow;
- (id)getPlayerRecomendAdToShow;
- (id)getSingerAdToShowForSong:(id)arg1;
- (id)getPlayerAdToShow;
- (id)getGreenDiamondAdToShow;
- (id)getIconAdToShow;
- (_Bool)shouldSongShowSingerAd:(id)arg1;
- (_Bool)canShowPlayerAd;
- (id)getFirstValidItem:(id)arg1;
- (id)getFirstValidItem:(id)arg1 forSinger:(unsigned long long)arg2;
- (void)rearrangeCPDAdItem:(id)arg1 toFile:(id)arg2 AndDecreaseRemainTime:(id)arg3;
- (void)rearrangeCPDAdItem:(id)arg1 toFile:(id)arg2 forConfig:(id)arg3;
- (id)getNextGreenDiamondADItemToShow:(id)arg1 filePath:(id)arg2;
- (id)getNextADItemToShow:(id)arg1 filePath:(id)arg2;
- (id)getNextPlayerAdItemToShow:(id)arg1 filePath:(id)arg2;
- (id)getNextSingerADItemToShow:(id)arg1 filePath:(id)arg2 forSinger:(unsigned long long)arg3;
- (void)requestGreenDiamondAd;
- (void)didLoadDownloadActionSheetConfig:(id)arg1 resultConfig:(id)arg2;
- (void)didLoadPlayerRecommendAdConfig:(id)arg1 resultConfig:(id)arg2;
- (void)didLoadIconAdConfig:(id)arg1 resultConfig:(id)arg2;
- (void)didLoadPlayerAdConfig:(id)arg1 resultConfig:(id)arg2;
- (id)singerIdsForAdList:(id)arg1;
- (void)didLoadSingerAdConfig:(id)arg1 resultConfig:(id)arg2;
- (void)loadAllCPDAd;
- (void)requestCPDAd;
- (id)randomizedArray:(id)arg1;
- (id)incrementalUpdateGreenDiamondAd:(id)arg1 fromADConfig:(id)arg2;
- (id)incrementalUpdateAd:(id)arg1 fromADConfig:(id)arg2;
- (id)removeExpireItems:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)loadCPDAdResource:(id)arg1;
- (id)loadCPDAd:(id)arg1;
- (void)saveCPDAd:(id)arg1 filePath:(id)arg2;
- (id)filePathForAdReqeustType:(long long)arg1;
- (id)downloadActionSheetADArchivePath;
- (id)greenDiamondArchivePath;
- (id)iconADArchivePath;
- (id)singerADArchivePath;
- (id)playerADArchivePath;
- (id)playerRecommedADArchivePath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

