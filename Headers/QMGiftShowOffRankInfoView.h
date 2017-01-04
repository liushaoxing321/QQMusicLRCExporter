//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface QMGiftShowOffRankInfoView : UIView
{
    NSString *_title;
    NSString *_defaultTitle;
    NSString *_imageName;
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)resizeView;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 defaultTitle:(id)arg2 imageName:(id)arg3;

@end
