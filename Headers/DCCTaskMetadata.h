//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DCCManager, NSDate, NSString;

@interface DCCTaskMetadata : NSObject
{
    _Bool _isBegun;
    _Bool _isComplete;
    NSString *_taskLabel;
    long long _taskId;
    DCCManager *_enqueueingManager;
    NSDate *_timeEnqueued;
    NSDate *_timeBegun;
    NSDate *_timeCompleted;
}

+ (int)totalAllocationsCount;
+ (int)livingInstanceCount;
+ (_Bool)isAllocDeallocLoggingEnabled;
+ (void)setAllocDeallocLoggingEnabled:(_Bool)arg1;
@property(retain, nonatomic) NSDate *timeCompleted; // @synthesize timeCompleted=_timeCompleted;
@property(retain, nonatomic) NSDate *timeBegun; // @synthesize timeBegun=_timeBegun;
@property(retain, nonatomic) NSDate *timeEnqueued; // @synthesize timeEnqueued=_timeEnqueued;
@property(nonatomic) __weak DCCManager *enqueueingManager; // @synthesize enqueueingManager=_enqueueingManager;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *taskLabel; // @synthesize taskLabel=_taskLabel;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) _Bool isBegun; // @synthesize isBegun=_isBegun;
- (void).cxx_destruct;
@property(readonly, nonatomic) double delayBeforeRun;
@property(readonly, nonatomic) double taskTime;
- (void)markAsComplete;
- (void)markAsBegun;
- (id)description;
- (void)dealloc;
- (id)init;

@end

