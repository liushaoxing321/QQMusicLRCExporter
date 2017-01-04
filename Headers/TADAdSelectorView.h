//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PassthroughView.h"

@class NSMutableArray, UILabel;

@interface TADAdSelectorView : PassthroughView
{
    long long _selectorCount;
    CDUnknownBlockType adselected;
    _Bool beginTransform;
    long long selectIndex;
    NSMutableArray *_adViews;
    UILabel *_titleLabel;
    UILabel *_tipForAnimation;
}

@property(retain, nonatomic) UILabel *tipForAnimation; // @synthesize tipForAnimation=_tipForAnimation;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *adViews; // @synthesize adViews=_adViews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)isSmallWindow;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)shadowLayerAnimation:(_Bool)arg1;
- (void)showUIViewAnimation;
- (void)doAnimationWithIndex:(long long)arg1;
- (void)adTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adSelectorItems:(id)arg2 doSelect:(CDUnknownBlockType)arg3;

@end

