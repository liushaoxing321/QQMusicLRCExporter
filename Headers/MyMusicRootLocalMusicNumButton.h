//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, QMLabel, ThreeButtonItemData, UIImageView, UILabel;

@interface MyMusicRootLocalMusicNumButton : UIControl
{
    _Bool _hideTitle;
    QMLabel *_subTitle;
    UIImageView *_redPoint;
    UIImageView *_icoImageView;
    QMLabel *_titleLabel;
    ThreeButtonItemData *_itemData;
    UIImageView *_number;
    UILabel *_numberRedPoint;
    NSLayoutConstraint *_numberRedPointWidthConstraint;
    double _numberRedPointLength;
}

@property double numberRedPointLength; // @synthesize numberRedPointLength=_numberRedPointLength;
@property(retain) NSLayoutConstraint *numberRedPointWidthConstraint; // @synthesize numberRedPointWidthConstraint=_numberRedPointWidthConstraint;
@property(retain) UILabel *numberRedPoint; // @synthesize numberRedPoint=_numberRedPoint;
@property(retain) UIImageView *number; // @synthesize number=_number;
@property(retain) ThreeButtonItemData *itemData; // @synthesize itemData=_itemData;
@property(retain) QMLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *icoImageView; // @synthesize icoImageView=_icoImageView;
@property(retain) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain) QMLabel *subTitle; // @synthesize subTitle=_subTitle;
@property _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshSkinSetting;
- (id)data;
- (id)getSubTitleLabel;
- (_Bool)getRedPointIsHidden;
- (void)showNumberRedPoint:(int)arg1 withMaxCount:(int)arg2;
- (void)hideNumberRedPoint;
- (void)hideRedPoint:(_Bool)arg1;
- (void)setRedPointHidden:(_Bool)arg1;
- (void)updateIconImageViewByUrl:(id)arg1;
- (void)updateIconImageView:(id)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)updateMainTitle:(id)arg1;
- (void)updateData:(id)arg1;
- (double)fontSize;
- (void)addConstraintsToImageView:(id)arg1 titleLabel:(id)arg2 numberLabel:(id)arg3 redPoint:(id)arg4 numberRedPoing:(id)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 hideTitle:(_Bool)arg2;

@end

