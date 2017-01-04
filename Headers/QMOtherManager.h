//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol UserListenTimeUpdateDelegate;

@interface QMOtherManager : NSObject <UIAlertViewDelegate, ProtocolHostDelegate>
{
    _Bool isScreenBlackened;
    _Bool isScreenLightUpChange;
    _Bool isScreenLocked;
    int notifyToken;
    int notifyLockSceenToken;
    CDUnknownBlockType _successblock;
    CDUnknownBlockType _failblock;
    NSMutableArray *_buyedIAPArray;
    id <UserListenTimeUpdateDelegate> _userListenTimeUpdateDelegate;
}

+ (void)showUnexpectedAlertView;
+ (void)showNotImplementedAlertView;
+ (id)sharedManager;
@property(nonatomic) __weak id <UserListenTimeUpdateDelegate> userListenTimeUpdateDelegate; // @synthesize userListenTimeUpdateDelegate=_userListenTimeUpdateDelegate;
@property(retain, nonatomic) NSMutableArray *buyedIAPArray; // @synthesize buyedIAPArray=_buyedIAPArray;
@property(copy, nonatomic) CDUnknownBlockType failblock; // @synthesize failblock=_failblock;
@property(copy, nonatomic) CDUnknownBlockType successblock; // @synthesize successblock=_successblock;
@property(nonatomic) _Bool isScreenLocked; // @synthesize isScreenLocked;
@property(nonatomic) _Bool isScreenLightUpChange; // @synthesize isScreenLightUpChange;
@property(nonatomic) _Bool isScreenBlackened; // @synthesize isScreenBlackened;
- (void).cxx_destruct;
- (double)getTipLastShowTimeWithKey:(id)arg1;
- (double)getTipLastShowTimeWithIndex:(unsigned long long)arg1;
- (void)setTipLastShowTimeForKey:(id)arg1;
- (void)setTipLastShowTimeForIndex:(unsigned long long)arg1;
- (void)changeTipStateForKey:(id)arg1;
- (id)tipTimeKeyArray;
- (id)tipKeyArray;
- (_Bool)matchTipWeekTimeForKey:(id)arg1;
- (_Bool)matchTipQuarterTimeForKey:(id)arg1;
- (id)keyOfTipToShow;
- (id)keyOfTipInTurn;
- (_Bool)isTipInTurnForKey:(id)arg1;
- (void)loadCachedDigitalAlbumData:(CDUnknownBlockType)arg1;
- (void)updateUserDigitalAlbumIsOnlyLoadCache:(_Bool)arg1 WithCallBack:(CDUnknownBlockType)arg2;
- (void)getUserActivityInfo;
- (void)handleUserListenTimeProtocolFinish:(id)arg1 protocolError:(id)arg2;
- (void)updateUserListenTimeProtocolWithCallBack:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (id)getCurrentDefaltSearchKey;
- (void)updateDefaltSearchKey;
- (void)upDateHotWord;
- (void)postMessage:(id)arg1;
- (void)showInstallHDVersion;
- (void)requestToBindingIAPWithSuccBlock:(CDUnknownBlockType)arg1 withFailBlock:(CDUnknownBlockType)arg2;
- (void)noticeGuestBuyIapInfoWithAppid:(id)arg1;
- (id)queryIAPbuyOverDate;
- (id)queryIAPbuyInfo;
- (_Bool)canGuestBuyThisIAPProduct:(id)arg1;
- (void)queryGuestModeIAPInfo;
- (void)startScreenState;
- (void)showCommentInvite:(_Bool)arg1;
- (void)displayAlertView;
- (id)topPresentedViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
