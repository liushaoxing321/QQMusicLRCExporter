//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, UIEvent;

@protocol TouchUIImageDelegate <NSObject>
- (void)imageTouch:(NSSet *)arg1 withEvent:(UIEvent *)arg2 whichView:(id)arg3;

@optional
- (void)imageTouchBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2 whichView:(id)arg3;
@end

