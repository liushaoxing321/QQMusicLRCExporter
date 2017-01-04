//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class AntiHijack, PersistConnectionCDN, SpeedCompetitionManager, VKeyManager, VKeyProtocol;

@interface CDNOptimizer : NSObject <ProtocolHostDelegate>
{
    VKeyManager *_vkeyManager;
    SpeedCompetitionManager *_speedCompetionManager;
    AntiHijack *_antiHijack;
    PersistConnectionCDN *_persistConnectionCDN;
    VKeyProtocol *_vkeyProtocol;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VKeyProtocol *vkeyProtocol; // @synthesize vkeyProtocol=_vkeyProtocol;
@property(retain, nonatomic) PersistConnectionCDN *persistConnectionCDN; // @synthesize persistConnectionCDN=_persistConnectionCDN;
@property(retain, nonatomic) AntiHijack *antiHijack; // @synthesize antiHijack=_antiHijack;
@property(retain, nonatomic) SpeedCompetitionManager *speedCompetionManager; // @synthesize speedCompetionManager=_speedCompetionManager;
@property(retain, nonatomic) VKeyManager *vkeyManager; // @synthesize vkeyManager=_vkeyManager;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (_Bool)_highQuality:(int)arg1;
- (void)bindHost:(id)arg1 forTime:(unsigned long long)arg2;
- (_Bool)isHijacked:(id)arg1;
- (void)stopCheckPersistent;
- (void)startCheckPersistent;
- (id)getCurrentHost;
- (id)vkeyForLocalDeviceBySongRateType:(int)arg1;
- (id)vkeyForLocalDevice:(_Bool)arg1;
- (id)weakVkeyForShareWx;
- (id)qplayDeviceWeakVkey;
- (void)generateWeakVkeyByTime:(long long)arg1;
- (id)addVkeyToURL:(id)arg1;
- (id)getCurrentNetworkStatusName;
- (void)refreshVkeyAndHostsWithDownloadFrom:(unsigned int)arg1;
- (void)refreshVkeyAndHosts;
- (void)onServerKeyUpdated:(id)arg1;
- (void)onSaveVkeyUpdated:(id)arg1 uinForVkey:(unsigned long long)arg2;
- (void)onVkeyUpdated:(id)arg1 highQualityVkey:(id)arg2;
- (void)onVKeyVerifyFailed;
- (id)addVkeyToURL:(id)arg1 useSpecifiedVKey:(id)arg2;
- (id)addVkeyToURL:(id)arg1 vkey:(id *)arg2;
- (id)optimizerURL:(id)arg1 vkey:(id *)arg2 host:(id *)arg3 bindedHost:(id)arg4 useSpecifiedVKey:(id)arg5 preferIpHost:(_Bool)arg6;
- (id)optimizerURL:(id)arg1 useSpecifiedVKey:(id)arg2 preferIpHost:(_Bool)arg3;
- (id)optimizerURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end
