//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol APMidasTitleViewDelegate;

@interface APMidasTitleView : UIView
{
    id <APMidasTitleViewDelegate> dele;
    UIView *titleContentView;
    UIButton *backButton;
    UIButton *closeButton;
    UILabel *titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton;
@property(retain, nonatomic) UIView *titleContentView; // @synthesize titleContentView;
@property(nonatomic) id <APMidasTitleViewDelegate> dele; // @synthesize dele;
- (void).cxx_destruct;
- (void)onClose;
- (void)onBack;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

