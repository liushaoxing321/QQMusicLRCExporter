//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ChannelsView, UIImage;

@interface KKButton : UIButton
{
    _Bool selected;
    ChannelsView *channelsView;
    UIImage *bgImage;
    long long channelId;
}

@property(nonatomic) long long channelId; // @synthesize channelId;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage;
@property(nonatomic) ChannelsView *channelsView; // @synthesize channelsView;
- (void)changeBgImageDefault;
- (void)changeBgImageSelected;
- (void)makeBackGroundImage:(id)arg1 withState:(unsigned long long)arg2;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)changeChannel:(id)arg1;

@end

