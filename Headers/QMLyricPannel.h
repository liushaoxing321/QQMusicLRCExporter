//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LyricViewDelegate-Protocol.h"
#import "PlayButtonDelegate-Protocol.h"

@class NSString, NSTimer, QMLyricDataInfo, QMLyricSeekPannel, QMLyricView, RRSGlowLabel;
@protocol LyricChangeDelegate;

@interface QMLyricPannel : UIView <LyricViewDelegate, PlayButtonDelegate>
{
    _Bool _isScrollViewScrolling;
    _Bool _isShow;
    _Bool _onlyListenPart;
    int _lyricState;
    int _lockScreenLyricLastLine;
    int _lyricDisplayMode;
    int _lyricDisplayState;
    int _lyricMode;
    int _listenRight;
    id lockDisplay;
    double _fontSize;
    QMLyricDataInfo *_lyricDataInfo;
    QMLyricSeekPannel *_lyricSeekPannel;
    id <LyricChangeDelegate> _lyricChangeDelegate;
    QMLyricView *_lyricView;
    RRSGlowLabel *_lyricInfoLabel;
    double _progress;
    double _duration;
    long long _iTickCount;
    NSTimer *_restoreTimer;
    NSTimer *_updateSearchingLabelTimer;
}

+ (id)getReportFontSizeID;
+ (id)getFontDescriptions;
+ (id)getFontSizes;
@property(nonatomic) _Bool onlyListenPart; // @synthesize onlyListenPart=_onlyListenPart;
@property(nonatomic) int listenRight; // @synthesize listenRight=_listenRight;
@property(retain, nonatomic) NSTimer *updateSearchingLabelTimer; // @synthesize updateSearchingLabelTimer=_updateSearchingLabelTimer;
@property(retain, nonatomic) NSTimer *restoreTimer; // @synthesize restoreTimer=_restoreTimer;
@property(nonatomic) int lyricMode; // @synthesize lyricMode=_lyricMode;
@property(nonatomic) int lyricDisplayState; // @synthesize lyricDisplayState=_lyricDisplayState;
@property(nonatomic) int lyricDisplayMode; // @synthesize lyricDisplayMode=_lyricDisplayMode;
@property(nonatomic) int lockScreenLyricLastLine; // @synthesize lockScreenLyricLastLine=_lockScreenLyricLastLine;
@property(nonatomic) long long iTickCount; // @synthesize iTickCount=_iTickCount;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool isScrollViewScrolling; // @synthesize isScrollViewScrolling=_isScrollViewScrolling;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) RRSGlowLabel *lyricInfoLabel; // @synthesize lyricInfoLabel=_lyricInfoLabel;
@property(retain, nonatomic) QMLyricView *lyricView; // @synthesize lyricView=_lyricView;
@property(nonatomic) __weak id <LyricChangeDelegate> lyricChangeDelegate; // @synthesize lyricChangeDelegate=_lyricChangeDelegate;
@property(retain, nonatomic) QMLyricSeekPannel *lyricSeekPannel; // @synthesize lyricSeekPannel=_lyricSeekPannel;
@property(retain, nonatomic) QMLyricDataInfo *lyricDataInfo; // @synthesize lyricDataInfo=_lyricDataInfo;
@property(nonatomic) int lyricState; // @synthesize lyricState=_lyricState;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) id lockDisplay; // @synthesize lockDisplay;
- (void).cxx_destruct;
- (void)lyricPannelToExposure;
- (void)scrollToShow:(_Bool)arg1;
- (void)showSeekButton:(_Bool)arg1;
- (void)onColorStyleChanged;
- (void)updateLockScreenLyric:(double)arg1 duration:(double)arg2;
- (void)clearLyric;
- (void)controlSeekButtonWhenPartLitsen:(unsigned long long)arg1;
- (void)getCurrentScrollTime:(unsigned long long)arg1;
- (void)onClickSeekButton;
- (void)onTimerUpdateSeachingLabel:(id)arg1;
- (void)safeStopAndReleaseUpdateTimmer;
- (void)safeStopAndReleaseRestoreTimmer;
- (void)restoreLyricPosition;
- (void)hideSeekButton;
- (void)onLyricViewMoveToNext:(int)arg1;
- (void)onLyricViewDidShowLastLyric:(long long)arg1;
- (void)lyricViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)lyricViewWillBeginDragging:(id)arg1;
- (void)lyricViewDidEndDecelerating:(id)arg1;
- (void)lyricViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)updateLockScreenLyricWithLyricLine:(int)arg1;
- (_Bool)isSupportAirPlayLyric;
- (int)calculateCurrentLine:(double)arg1;
- (void)updateLockScreenLyricInfo:(int)arg1;
- (void)updateAppleWatchLyricWithLyricLine:(int)arg1;
- (void)updateProgress:(double)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)updateDisplayState:(int)arg1;
- (void)updateDisplayMode:(int)arg1;
- (void)updateLyricData:(id)arg1 lyricDisplayMode:(int)arg2 lyricDisplayState:(int)arg3 lyricState:(int)arg4;
- (void)updateLyricFontSize:(double)arg1;
- (id)getQRCLabelFontWithFontSize:(double)arg1 isBold:(_Bool)arg2;
- (void)addSeekButtonWithY:(float)arg1;
- (void)reBuildLyricView;
- (void)longPressToDo:(id)arg1;
- (void)configureView;
- (void)updateSeekingPannel;
- (void)updateSideFadingView:(id)arg1;
- (void)useDefaultFontSize;
- (void)onNotifyLockDisplay:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lyricDataInfo:(id)arg2 displayMode:(int)arg3 lyricDisplayState:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
