//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MyMusicRootGuessLikeImageView;
@protocol GuessLikeControlClickDelegate;

@interface MyMusicRootGuessLikeControl : UIControl
{
    id <GuessLikeControlClickDelegate> _clickDelegate;
    MyMusicRootGuessLikeImageView *_imageView;
}

@property(retain) MyMusicRootGuessLikeImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) id <GuessLikeControlClickDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)didTap;
- (void)updateUI;
- (void)onTouchUpInsidePlayGuessLike:(id)arg1;
- (double)fontSize;
- (void)layoutSubviews;
- (void)buildSubViews;
- (id)init;

@end

