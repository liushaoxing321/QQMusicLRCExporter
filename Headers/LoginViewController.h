//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class CallObject, NSString, NSTimer, UIViewController;

@interface LoginViewController : SkinViewController <UIAlertViewDelegate>
{
    _Bool dismissed;
    NSTimer *_timerDismissDisMissDismiss;
    _Bool _bCallBackLater;
    _Bool _success;
    _Bool _cancelBlockCalled;
    CallObject *_loginOkCall;
    CallObject *_cancelCall;
    UIViewController *_vcFrom;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _cancelBlock;
    long long _lastStatusBarStyle;
}

@property(nonatomic) _Bool cancelBlockCalled; // @synthesize cancelBlockCalled=_cancelBlockCalled;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) long long lastStatusBarStyle; // @synthesize lastStatusBarStyle=_lastStatusBarStyle;
@property(retain, nonatomic) NSTimer *timerDismissDisMissDismiss; // @synthesize timerDismissDisMissDismiss=_timerDismissDisMissDismiss;
@property(nonatomic) _Bool bCallBackLater; // @synthesize bCallBackLater=_bCallBackLater;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) __weak UIViewController *vcFrom; // @synthesize vcFrom=_vcFrom;
@property(retain, nonatomic) CallObject *cancelCall; // @synthesize cancelCall=_cancelCall;
@property(retain, nonatomic) CallObject *loginOkCall; // @synthesize loginOkCall=_loginOkCall;
- (void).cxx_destruct;
- (void)releaseBlocks;
- (void)callbackCancelBlock;
- (void)callbackFailureBlock;
- (void)callbackSuccessBlock;
- (void)handleContinuousLoginFailed;
- (void)onNotifyGetUserInfoFailed:(id)arg1;
- (void)onNotifyGetUserInfoSuccess:(id)arg1;
- (void)doneWithLoginFailed;
- (void)doneWithLoginSuccess;
- (id)getCurrentNavigationController;
- (void)onTimerDismissDismissDismiss:(id)arg1;
- (_Bool)amIDisMissed;
- (void)_handleMusicServerLoginFailed:(struct LoginReturn)arg1;
- (_Bool)_handleWTLoginFailed:(struct LoginReturn)arg1;
- (void)doit;
- (void)showAlertView:(id)arg1;
- (void)onTouchupInsideDoneModal:(id)arg1;
- (void)enbaleUI:(_Bool)arg1;
- (int)vcType;
- (void)headerCancel:(id)arg1;
- (int)needMoreHeaderHeight;
- (void)removeLoginNotication;
- (void)addLoginNotification;
- (void)dealloc;
- (void)doHandlePushComming:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

