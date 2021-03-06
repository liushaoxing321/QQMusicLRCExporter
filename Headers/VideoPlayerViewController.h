//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HookViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "VideoPlayerControlViewDataSoure-Protocol.h"
#import "VideoPlayerControlViewDelegate-Protocol.h"

@class NSString, NSTimer, UIAlertView, VideoPlayerControlView, VideoPlayerGuideView;

@interface VideoPlayerViewController : HookViewController <UIAlertViewDelegate, VideoPlayerControlViewDataSoure, VideoPlayerControlViewDelegate>
{
    VideoPlayerControlView *_contentView;
    _Bool _currentViewShow;
    _Bool _hasShowGuide;
    _Bool _loadingState;
    _Bool _isShare;
    _Bool _isFreeFlow;
    _Bool _isDownLoad;
    NSTimer *_playTimer;
    NSTimer *_clearTimer;
    UIAlertView *_alertView;
    _Bool _currentModeFull;
    int _appWindowMode;
    VideoPlayerGuideView *_guideView;
}

+ (double)mvHeight;
+ (double)mvWidth;
@property(retain, nonatomic) VideoPlayerGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) int appWindowMode; // @synthesize appWindowMode=_appWindowMode;
@property(nonatomic) _Bool isDownLoad; // @synthesize isDownLoad=_isDownLoad;
@property(nonatomic) _Bool isFreeFlow; // @synthesize isFreeFlow=_isFreeFlow;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
@property(readonly, nonatomic) _Bool currentViewShow; // @synthesize currentViewShow=_currentViewShow;
- (void).cxx_destruct;
- (void)reLayouTo:(int)arg1;
- (id)appWindowModeName:(int)arg1;
- (void)changeAppWindowModeTo:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isCurMVDownload;
- (_Bool)isLocalMVFlag;
- (void)showBannerTips:(id)arg1 WithIcon:(long long)arg2;
- (_Bool)needShowPiPBtn;
- (void)pipClicked;
- (void)downloadMV;
- (void)freeFlowCheck;
- (void)changeClarity:(id)arg1;
- (void)shareMV;
- (void)setSeekPlayTime:(double)arg1;
- (void)setMovieScalingMode:(int)arg1;
- (void)setVolume:(float)arg1;
- (void)playSongAtIndex:(int)arg1;
- (void)pause;
- (void)play;
- (void)stop;
- (_Bool)isInPiP;
- (int)getCurrentClarityType;
- (id)getCurrentClarity;
- (id)clarityArray;
- (id)getTitleAtIndex:(int)arg1;
- (double)getCurrentPlaybackTime;
- (double)getPlayableDuration;
- (double)getDuration;
- (int)currentPlayIndex;
- (id)listTableTitle;
- (id)listTableDataSource;
- (id)currentTitle;
- (void)recoverStatusBar;
- (void)UIStatusBarOrientation:(id)arg1;
- (void)setCurrentVolumeNotify:(id)arg1;
- (void)updateFreeFlowBtnHidden:(_Bool)arg1 free:(_Bool)arg2;
- (void)pipBtnEnabled:(_Bool)arg1;
- (void)clarityBtnEnable:(_Bool)arg1;
- (void)updateClarity;
- (void)upDatePlayTime:(id)arg1;
- (void)clearTimerStart:(id)arg1;
- (_Bool)getCurrentstatusBar;
- (void)showNetAlertView:(id)arg1 message:(id)arg2;
- (void)showLoadingBgView:(_Bool)arg1;
- (void)showLoadingView:(_Bool)arg1;
- (void)willStartPlay;
- (void)playEnd;
- (void)setPlayBtnState:(int)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)showGuide;
- (void)recoverInitState;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshScalingMode;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

