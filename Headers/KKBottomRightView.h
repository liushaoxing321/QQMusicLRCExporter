//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HVMPBottomView, UIButton;

@interface KKBottomRightView : UIView
{
    _Bool _bShowListButton;
    UIButton *_btnClarity;
    UIButton *_btnList;
    _Bool _bShowClarityButton;
    HVMPBottomView *delegate;
}

@property(nonatomic) _Bool bShowClarityButton; // @synthesize bShowClarityButton=_bShowClarityButton;
@property(nonatomic) _Bool bShowListButton; // @synthesize bShowListButton=_bShowListButton;
@property(readonly) UIButton *btnClarity; // @synthesize btnClarity=_btnClarity;
@property(retain, nonatomic) UIButton *btnList; // @synthesize btnList=_btnList;
@property(nonatomic) HVMPBottomView *delegate; // @synthesize delegate;
- (id)mediaPlayer;
- (void)adjustControlForDLNA:(_Bool)arg1;
- (void)customAirplayShow;
- (void)showClarityButton:(_Bool)arg1;
- (void)showListButton:(_Bool)arg1 withTitle:(id)arg2 animated:(_Bool)arg3;
- (id)buttonWithImage:(id)arg1 tag:(long long)arg2;
- (void)controlClarityButtonHidden:(_Bool)arg1;
- (void)controlMoreButtonHidden:(_Bool)arg1;
- (void)adjustClarityButtonTitle:(id)arg1 withValityLevel:(id)arg2;
- (void)adjustValityButtonState:(_Bool)arg1;
- (void)clearresources;
- (void)clipButtonDown:(id)arg1;
- (void)sendButtonDown:(id)arg1;
- (void)downloadDown:(id)arg1;
- (void)controlListView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

