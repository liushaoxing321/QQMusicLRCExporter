//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol TVKMakeJsonDataDelegate <NSObject>
- (void)didRequestFailedWithInterfaceType:(long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)didDataErrorWithInterfaceType:(long long)arg1 errorCodeStr:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)didDataFinishedWithInterfaceType:(long long)arg1 datas:(NSArray *)arg2 userInfo:(NSDictionary *)arg3;
@end

