//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@interface SuperSoundEffectView : UIControl
{
    int _effectType;
    NSString *_normalIcon;
    NSString *_selectedIcon;
    NSString *_title;
    NSString *_subTitle;
    UIImageView *_effectIcon;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *effectIcon; // @synthesize effectIcon=_effectIcon;
@property int effectType; // @synthesize effectType=_effectType;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain) NSString *normalIcon; // @synthesize normalIcon=_normalIcon;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

