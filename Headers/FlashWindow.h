//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "GDTClickCallback-Protocol.h"
#import "ProcessViewDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class NSString, ProcessView, UIImageView, UILabel, UIView;
@protocol FlashWindowDelegate;

@interface FlashWindow : UIWindow <ProtocolHostDelegate, GDTClickCallback, ProcessViewDelegate>
{
    _Bool isDBUpdate;
    _Bool _showingDynamicSplash;
    _Bool _isJumpOver;
    _Bool _canRelease;
    _Bool _taskFinished;
    UIView *_defaultImageView;
    UIImageView *_flashScreenImageView;
    id <FlashWindowDelegate> _flashWindowDelegate;
    UILabel *_loadLabel;
    ProcessView *_processView;
}

@property(retain, nonatomic) ProcessView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) UILabel *loadLabel; // @synthesize loadLabel=_loadLabel;
@property(nonatomic) __weak id <FlashWindowDelegate> flashWindowDelegate; // @synthesize flashWindowDelegate=_flashWindowDelegate;
@property(nonatomic) _Bool taskFinished; // @synthesize taskFinished=_taskFinished;
@property(nonatomic) _Bool canRelease; // @synthesize canRelease=_canRelease;
@property(retain, nonatomic) UIImageView *flashScreenImageView; // @synthesize flashScreenImageView=_flashScreenImageView;
@property(retain, nonatomic) UIView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
- (void).cxx_destruct;
- (void)clearAllTimers;
- (void)handleLoadPPTResourceFinished:(id)arg1;
- (void)appWillEnterBackground;
- (void)appWillResignActive;
- (void)finishTaskAndRelease;
- (void)onClickFail:(int)arg1;
- (void)onClickSuccess:(id)arg1 targetUrl:(id)arg2;
- (struct CGSize)imageSizeForProcessView:(id)arg1 position:(int)arg2;
- (id)imageNameForProcessView:(id)arg1 position:(int)arg2;
- (void)upDateProgress:(double)arg1;
- (void)setResetAllFileProtectionProgress:(id)arg1;
- (void)showResetAllFileProtection:(id)arg1;
- (void)addLoadPercent;
- (void)syncAddLoadPercentOnMainThread;
- (_Bool)hasFlashScreen;
- (void)_tryRelease;
- (void)setCanRelease;
- (void)_delaySetTaskFinished:(id)arg1;
- (void)_removeSplash;
- (void)_jumpOverSplash;
- (void)showDBUpadteSplash;
- (id)defaultImagePath;
- (void)addDefaultImageView;
- (id)rootView;
- (void)showSplash:(long long)arg1;
- (void)handlePushComming;
- (void)removeRootVC;
- (void)UIStatusBarOrientation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

