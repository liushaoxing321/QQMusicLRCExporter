//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RAPICarDescription;

@protocol RAPIScreenDelegate <NSObject>

@optional
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (NSString *)getTitle;
- (void)onScreenAppearedTriggeredByScreen:(long long)arg1 andGroup:(long long)arg2 andItem:(long long)arg3;
- (void)onFocused;
- (void)onConnectedToCar:(RAPICarDescription *)arg1;
- (void)setup;
@end

