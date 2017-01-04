//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSTimer;

@interface QMMoreDataManager : NSObject <ProtocolHostDelegate>
{
    int _autoPauseBeginTime;
    int _autoPauseAll;
    _Bool _isTimered;
    _Bool _isTimerOn;
    _Bool _continuePlaySong;
    _Bool _screenLightUpRecoveryVolumn;
    _Bool _isCustomLittleTime;
    _Bool _hasScreenLightUp;
    NSTimer *_autoPauseTimer;
    NSTimer *_backgroundPauseTimer;
    double _currentFadeValue;
    id _timerTarget;
    SEL _timerAction;
    double _screenLightUpStartTime;
}

+ (id)shareMoreDataManager;
@property(nonatomic) _Bool hasScreenLightUp; // @synthesize hasScreenLightUp=_hasScreenLightUp;
@property(nonatomic) double screenLightUpStartTime; // @synthesize screenLightUpStartTime=_screenLightUpStartTime;
@property(nonatomic) _Bool isCustomLittleTime; // @synthesize isCustomLittleTime=_isCustomLittleTime;
@property(nonatomic) SEL timerAction; // @synthesize timerAction=_timerAction;
@property(nonatomic) __weak id timerTarget; // @synthesize timerTarget=_timerTarget;
@property(nonatomic) _Bool screenLightUpRecoveryVolumn; // @synthesize screenLightUpRecoveryVolumn=_screenLightUpRecoveryVolumn;
@property(nonatomic) double currentFadeValue; // @synthesize currentFadeValue=_currentFadeValue;
@property(nonatomic) _Bool continuePlaySong; // @synthesize continuePlaySong=_continuePlaySong;
@property(retain, nonatomic) NSTimer *backgroundPauseTimer; // @synthesize backgroundPauseTimer=_backgroundPauseTimer;
@property(nonatomic) _Bool isTimerOn; // @synthesize isTimerOn=_isTimerOn;
@property(retain, nonatomic) NSTimer *autoPauseTimer; // @synthesize autoPauseTimer=_autoPauseTimer;
- (void).cxx_destruct;
- (double)screenLightUpRecoveryVolumeTimeInterval;
- (void)onNotifyLockScreenLightUp:(id)arg1;
- (void)onNotifyLockScreenBlackened:(id)arg1;
- (double)fadeAudioWhileTimerRunning;
- (void)fadeVolumeAfterDelay:(id)arg1;
- (_Bool)checkLastSongBeforeAutoPause:(double)arg1;
- (void)stopTime;
- (void)stopRealTimer;
- (void)setIsTimered:(_Bool)arg1;
- (void)setAutoPauseLeftTime:(unsigned long long)arg1;
- (void)stopBackgroundPauseTimer;
- (void)fireTimeReEnterMoreVC;
- (void)cancelPauseAudioPlayImmediatelyMethodInvoke;
- (void)pauseAudioPlayImmediatelyWhenSongEnd;
- (void)cancelContinuePlaySong;
- (void)delayPausePlaySong;
- (void)pauseAudioPlayImmediately;
- (void)pauseAudioPlay:(id)arg1;
- (void)fireTime;
- (void)setAutoPauseTimerTarget:(id)arg1 forAction:(SEL)arg2;
- (void)setAutoPauseTimeReEnterMoreVC;
- (void)setAutoPauseTime:(int)arg1;
- (int)getAutoPauseTimeWithSetting:(int)arg1;
- (int)getAutoPauseLeftTime;
- (void)initAutoPauseTime;
- (void)dealloc;
- (id)init;

@end

