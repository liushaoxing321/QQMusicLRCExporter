//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PassthroughView.h"

@protocol TADAdViewDelegate;

@interface TADAdView : PassthroughView
{
    id <TADAdViewDelegate> _delegate;
}

@property(nonatomic) id <TADAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
