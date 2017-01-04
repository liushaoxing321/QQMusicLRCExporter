//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSArray, NSRunLoop;

@interface IDRunLoopInvocationProxy : NSProxy
{
    id _target;
    NSRunLoop *_runLoop;
    unsigned long long _priority;
    NSArray *_runLoopModes;
}

+ (id)description;
@property(readonly) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(readonly) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(readonly) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 runLoop:(id)arg2 priority:(unsigned long long)arg3;

@end

