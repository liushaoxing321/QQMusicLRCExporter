//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIEmotionElement.h"

#import "UIEmotionDeleteElementDelegate-Protocol.h"

@class NSString, UIEmotionDeleteButton, UIEmotionDrawPanel;

@interface UIEmotionDeleteElement : UIEmotionElement <UIEmotionDeleteElementDelegate>
{
    UIEmotionDrawPanel *parentView;
    UIEmotionDeleteButton *button;
}

@property(retain, nonatomic) UIEmotionDeleteButton *button; // @synthesize button;
@property(nonatomic) __weak UIEmotionDrawPanel *parentView; // @synthesize parentView;
- (void).cxx_destruct;
- (void)draw;
- (void)delButtonClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

