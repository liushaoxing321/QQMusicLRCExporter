//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ColorStylePickerVC;

@protocol ColorStylePickerDelegate <NSObject>
- (unsigned long long)colorOfPreDefine:(ColorStylePickerVC *)arg1 index:(int)arg2;
- (void)onPickCustom:(ColorStylePickerVC *)arg1 hue:(unsigned short)arg2 saturation:(BOOL)arg3 bright:(BOOL)arg4;
- (void)onPickPreDefine:(ColorStylePickerVC *)arg1 index:(unsigned long long)arg2;
@end

