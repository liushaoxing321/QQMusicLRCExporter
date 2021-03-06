//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;
@protocol KSPerformanceMonitorDelegate;

@interface KSGPUPerformanceTracker : NSObject
{
    _Bool _started;
    id <KSPerformanceMonitorDelegate> _gpuPerformanceWarningDelegate;
    NSMutableDictionary *_viewsDic;
    NSTimer *_checkTimer;
}

+ (id)sharedTracker;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSMutableDictionary *viewsDic; // @synthesize viewsDic=_viewsDic;
@property(nonatomic) __weak id <KSPerformanceMonitorDelegate> gpuPerformanceWarningDelegate; // @synthesize gpuPerformanceWarningDelegate=_gpuPerformanceWarningDelegate;
- (void).cxx_destruct;
- (_Bool)checkIfObject:(Class)arg1 overridesSelector:(SEL)arg2 fromSuperObject:(Class)arg3;
- (void)travelSubViews:(id)arg1 subviewCount:(unsigned long long *)arg2 translucentSubviewCount:(unsigned long long *)arg3 screenDrawingSubviewCount:(unsigned long long *)arg4 shouldMarkBackgroundColor:(_Bool)arg5;
- (void)checkWarningLevel;
- (id)markGPUExhaustedLayer:(id)arg1;
- (void)addVCPairs:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (id)init;

@end

