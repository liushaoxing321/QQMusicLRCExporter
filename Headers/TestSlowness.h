//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TestSlowness : NSObject
{
    NSMutableDictionary *_mutableDic;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)testslowLog:(id)arg1 state:(long long)arg2 function:(id)arg3;
- (void)testslowLog:(id)arg1 state:(long long)arg2 function:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)getStateString:(long long)arg1;
- (id)init;

@end

