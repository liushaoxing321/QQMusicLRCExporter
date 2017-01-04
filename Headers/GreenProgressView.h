//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface GreenProgressView : UIView
{
    UILabel *_titleLabel;
    UILabel *_levelLabel;
    UILabel *_nextLevelLabel;
    UIImageView *_progressView;
}

@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *nextLevelLabel; // @synthesize nextLevelLabel=_nextLevelLabel;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setLevel:(int)arg1 nextLevel:(int)arg2 percent:(double)arg3;
- (void)addAllSubviews;
- (id)createLabel:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
