//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface WBSDKStatisticsRecord : NSObject
{
    NSString *_aid;
    NSString *_eventID;
    NSString *_pageID;
    NSDictionary *_userInfo;
    NSDate *_time;
    double _duration;
    long long _recordType;
}

+ (id)recordWithEventID:(id)arg1 pageID:(id)arg2 userInfo:(id)arg3 recordType:(long long)arg4;
@property(nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
- (void).cxx_destruct;
- (id)description;
- (id)uniqueID;
- (id)initWithEventID:(id)arg1 pageID:(id)arg2 userInfo:(id)arg3 recordType:(long long)arg4;
- (id)init;

@end

