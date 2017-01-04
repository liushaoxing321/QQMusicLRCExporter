//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RecognizingAnimateCircleBgView, UIButton, UIImageView;
@protocol RecognizingAnimateView;

@interface RecognizingAnimateView : UIView
{
    _Bool _animating;
    id <RecognizingAnimateView> _delegate;
    UIButton *_centerViewStopped;
    UIButton *_centerViewRecognizing;
    UIImageView *_circleAroundLineImageView;
    RecognizingAnimateCircleBgView *_randomCircleBg1;
    RecognizingAnimateCircleBgView *_randomCircleBg2;
    RecognizingAnimateCircleBgView *_recordedSoundRelatedcircleBg;
    long long _lastVolumn;
    UIImageView *_matchNothingImageView;
}

@property(retain) UIImageView *matchNothingImageView; // @synthesize matchNothingImageView=_matchNothingImageView;
@property long long lastVolumn; // @synthesize lastVolumn=_lastVolumn;
@property _Bool animating; // @synthesize animating=_animating;
@property(retain) RecognizingAnimateCircleBgView *recordedSoundRelatedcircleBg; // @synthesize recordedSoundRelatedcircleBg=_recordedSoundRelatedcircleBg;
@property(retain) RecognizingAnimateCircleBgView *randomCircleBg2; // @synthesize randomCircleBg2=_randomCircleBg2;
@property(retain) RecognizingAnimateCircleBgView *randomCircleBg1; // @synthesize randomCircleBg1=_randomCircleBg1;
@property(retain) UIImageView *circleAroundLineImageView; // @synthesize circleAroundLineImageView=_circleAroundLineImageView;
@property(retain) UIButton *centerViewRecognizing; // @synthesize centerViewRecognizing=_centerViewRecognizing;
@property(retain) UIButton *centerViewStopped; // @synthesize centerViewStopped=_centerViewStopped;
@property __weak id <RecognizingAnimateView> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateVolumn:(long long)arg1;
- (void)animateToCirclesVisiable:(_Bool)arg1;
- (void)startAnimateRecordedSoundRelatedCircleBg;
- (void)startAnimateCircleBg2;
- (void)startAnimateCircleBg1;
- (void)nextAnimateValueRecordedCircleBg;
- (void)nextAnimateValueCircleBg2;
- (void)nextAnimateValueCircleBg1;
- (struct CGRect)makeAnimateFrameFromcenterByLength:(long long)arg1;
- (void)stop:(_Bool)arg1;
- (void)start;
- (void)addAlwaysAnimates;
- (void)onTouchUpInsideStop;
- (void)onTouchUpInsideStart;
- (id)initWithFrame:(struct CGRect)arg1;

@end

