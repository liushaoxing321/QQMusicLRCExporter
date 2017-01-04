//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIImageView;
@protocol QLActionSheetDelegate;

@interface QLActionSheet : UIView
{
    UIButton *_darkScreen;
    UIImageView *_actionList;
    id <QLActionSheetDelegate> _delegate;
    NSArray *_items;
}

@property(retain) NSArray *items; // @synthesize items=_items;
- (void)subBtnDown:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)hide:(id)arg1;
- (void)hideWithSelectedIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 titles:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
