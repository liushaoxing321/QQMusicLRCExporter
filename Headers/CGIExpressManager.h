//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CGIExpressManager : NSObject
{
    NSMutableDictionary *_net2Manager;
    NSString *_networkStatusName;
}

+ (id)sharedInstance;
@property(retain) NSString *networkStatusName; // @synthesize networkStatusName=_networkStatusName;
@property(retain) NSMutableDictionary *net2Manager; // @synthesize net2Manager=_net2Manager;
- (void).cxx_destruct;
- (id)init;
- (void)asynRefreshNetworkStatusName;
- (void)feedbackIp:(id)arg1 eProtocolError:(long long)arg2 networkName:(id)arg3;
- (id)ipListForNextRequest;
- (id)proxyIpAddressManagerByNetworkStatusName:(id)arg1;

@end

