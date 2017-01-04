//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UIImage;

@interface SharePlayBtn : UIView
{
    int _btnState;
    UIActivityIndicatorView *_loadingIndicator;
    UIButton *_playBtn;
    UIImage *_playIcon;
    UIImage *_stopIcon;
}

@property(retain, nonatomic) UIImage *stopIcon; // @synthesize stopIcon=_stopIcon;
@property(retain, nonatomic) UIImage *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) int btnState; // @synthesize btnState=_btnState;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setState:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 playIcon:(id)arg2 stopIcon:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
