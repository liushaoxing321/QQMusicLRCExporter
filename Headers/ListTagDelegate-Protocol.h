//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ListBase, NSString, ObjectWithExpInfo;

@protocol ListTagDelegate <NSObject>

@optional
- (void)onList:(ListBase *)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(ObjectWithExpInfo *)arg4;
- (void)onList:(ListBase *)arg1 InfoChangeByInfo:(ObjectWithExpInfo *)arg2 ChangeType:(int)arg3 Index:(unsigned long long)arg4;
- (void)onList:(ListBase *)arg1 WithResult:(int)arg2 AndAct:(NSString *)arg3;
@end
