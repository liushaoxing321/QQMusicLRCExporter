//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CustomIOS7AlertViewDelegate-Protocol.h"

@class NSArray;
@protocol CustomIOS7AlertViewDelegate;

@interface CustomIOS7AlertView : UIView <CustomIOS7AlertViewDelegate>
{
    _Bool useMotionEffects;
    UIView *parentView;
    UIView *containerView;
    UIView *dialogView;
    CDUnknownBlockType onButtonTouchUpInside;
    id <CustomIOS7AlertViewDelegate> delegate;
    NSArray *buttonTitles;
}

@property(nonatomic) _Bool useMotionEffects; // @synthesize useMotionEffects;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles;
@property(nonatomic) id <CustomIOS7AlertViewDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType onButtonTouchUpInside; // @synthesize onButtonTouchUpInside;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (void)applyMotionEffects;
- (struct CGSize)countScreenSize;
- (struct CGSize)countDialogSize;
- (void)addButtonsToView:(id)arg1;
- (id)createContainerView;
- (void)setSubView:(id)arg1;
- (void)close;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1;
- (void)show;
- (id)init;
- (id)initWithParentView:(id)arg1;

@end

