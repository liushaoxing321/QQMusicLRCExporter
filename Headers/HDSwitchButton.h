//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface HDSwitchButton : UIButton
{
    _Bool isPlaying;
    long long streamType;
}

@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying;
@property(nonatomic) long long streamType; // @synthesize streamType;
- (void)changeButtonState:(_Bool)arg1;
- (void)makeBackGroundImage:(id)arg1 withState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withFontSize:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

