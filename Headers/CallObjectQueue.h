//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Queue;

@interface CallObjectQueue : NSObject
{
    _Bool _lasyMode;
    Queue *queue;
    _Bool _working;
    double time;
}

@property(nonatomic) double time; // @synthesize time;
- (void).cxx_destruct;
- (void)clear;
- (void)addCallObject:(id)arg1;
- (void)doneAndTick;
- (void)tick;
- (id)getCallObject;
- (id)initWithLasyMode:(_Bool)arg1;

@end

