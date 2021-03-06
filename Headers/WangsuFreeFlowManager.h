//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class WangsuFreeFlowItem, WangsuFreeFlowProtocol;

@interface WangsuFreeFlowManager : NSObject <ProtocolHostDelegate>
{
    _Bool _isShowAlertWhenFreeFlowFirstShow;
    WangsuFreeFlowItem *_freeFlowItem;
    WangsuFreeFlowItem *_lastUsableFreeFlowItem;
    WangsuFreeFlowProtocol *_switchFreeFlowServerProtocol;
    unsigned long long _elapsedWhenAuth;
    unsigned long long _wangsuMaxFlowCount;
}

+ (unsigned long long)systemBootTime;
+ (id)encrypt:(id)arg1 password:(id)arg2;
+ (id)encryptedAuthStringFromTimestamp:(id)arg1 authKey:(id)arg2 token:(id)arg3 cpOrderNo:(id)arg4 phoneNumber:(id)arg5 absoluteUrl:(id)arg6;
+ (id)sharedInstance;
@property(nonatomic) _Bool isShowAlertWhenFreeFlowFirstShow; // @synthesize isShowAlertWhenFreeFlowFirstShow=_isShowAlertWhenFreeFlowFirstShow;
@property(nonatomic) unsigned long long wangsuMaxFlowCount; // @synthesize wangsuMaxFlowCount=_wangsuMaxFlowCount;
@property(nonatomic) unsigned long long elapsedWhenAuth; // @synthesize elapsedWhenAuth=_elapsedWhenAuth;
@property(retain) WangsuFreeFlowProtocol *switchFreeFlowServerProtocol; // @synthesize switchFreeFlowServerProtocol=_switchFreeFlowServerProtocol;
@property(retain) WangsuFreeFlowItem *lastUsableFreeFlowItem; // @synthesize lastUsableFreeFlowItem=_lastUsableFreeFlowItem;
@property(retain) WangsuFreeFlowItem *freeFlowItem; // @synthesize freeFlowItem=_freeFlowItem;
- (void).cxx_destruct;
- (void)reallyShowFreeFreeFlowPopupWindowTypeActiveAlert;
- (void)onNotificationShowFlowPackChanged:(id)arg1;
- (id)addWangsuHeadersToUrl:(id)arg1;
- (id)headersForURL:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (_Bool)isRoam;
- (_Bool)isExcessMaxFlow;
- (_Bool)isFreeFlowUser;
- (void)switchFreeFlowServer;
- (void)requestWangsuFreeFlowProtocol;
- (void)addCarrierChangedBlock;
- (void)initAction;
- (id)init;

@end

