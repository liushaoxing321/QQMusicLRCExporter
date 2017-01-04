//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface SpeedResult : NSObject
{
    _Bool _shouldRetry;
    int _retryCount;
    int _downTime;
    int _errorCode;
    NSString *_host;
    unsigned long long _speed;
    NSDate *_testDate;
    NSDate *_bindedUntilDate;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDate *bindedUntilDate; // @synthesize bindedUntilDate=_bindedUntilDate;
@property(nonatomic) int downTime; // @synthesize downTime=_downTime;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSDate *testDate; // @synthesize testDate=_testDate;
@property(nonatomic) unsigned long long speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end
