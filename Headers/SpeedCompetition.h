//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SpeedTestDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, SpeedTest;
@protocol SpeedCompetitionDelegate;

@interface SpeedCompetition : NSObject <SpeedTestDelegate>
{
    _Bool _statReported;
    _Bool _isDnsSuccess;
    NSString *_netStatusName;
    NSMutableArray *_hosts;
    id <SpeedCompetitionDelegate> _delegate;
    SpeedTest *_currentSpeedTest;
    NSMutableDictionary *_host2SpeedResult;
    NSString *_defaultBestHost;
    NSTimer *_getIPTimer;
}

@property(retain, nonatomic) NSTimer *getIPTimer; // @synthesize getIPTimer=_getIPTimer;
@property(nonatomic) _Bool isDnsSuccess; // @synthesize isDnsSuccess=_isDnsSuccess;
@property(retain, nonatomic) NSString *defaultBestHost; // @synthesize defaultBestHost=_defaultBestHost;
@property(nonatomic) _Bool statReported; // @synthesize statReported=_statReported;
@property(retain, nonatomic) NSMutableDictionary *host2SpeedResult; // @synthesize host2SpeedResult=_host2SpeedResult;
@property(retain, nonatomic) SpeedTest *currentSpeedTest; // @synthesize currentSpeedTest=_currentSpeedTest;
@property(nonatomic) __weak id <SpeedCompetitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *hosts; // @synthesize hosts=_hosts;
@property(readonly, nonatomic) NSString *netStatusName; // @synthesize netStatusName=_netStatusName;
- (void).cxx_destruct;
- (void)onSpeedTestDone:(id)arg1 bytesPerSecond:(unsigned long long)arg2 shouldRetry:(_Bool)arg3 downTime:(int)arg4;
- (id)_getAllAvliableHosts;
- (id)_getAllBindedAvliableHosts;
- (_Bool)_isSpeedShouldReTest:(id)arg1;
- (void)_addStat:(id)arg1;
- (void)_reportResult;
- (void)setDefaultHost:(id)arg1;
- (id)getBestHost:(id)arg1;
- (id)getIpHost;
- (void)bindHost:(id)arg1 forTime:(unsigned long long)arg2;
- (void)backgroundGetDNSIp;
- (void)stopAndClearResult;
- (void)startCompetition;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 host:(id)arg2 netStatusName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

