//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue;

@interface APMidasQQHttpClient : NSObject
{
    int _networkReachabilityStatus;
    struct dispatch_queue_s *_reqProcessQueue;
    struct __SCNetworkReachability *_networkReachability;
    NSMutableArray *_noramlReqArrary;
    NSMutableArray *_resourceReqArrary;
    NSMutableArray *_lowPriorityReqArrar;
    NSOperationQueue *_normalOpReqQueue;
    NSOperationQueue *_resourceOpReqQueue;
    NSOperationQueue *_lowPriorityOpReqQueue;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *lowPriorityOpReqQueue; // @synthesize lowPriorityOpReqQueue=_lowPriorityOpReqQueue;
@property(retain, nonatomic) NSOperationQueue *resourceOpReqQueue; // @synthesize resourceOpReqQueue=_resourceOpReqQueue;
@property(retain, nonatomic) NSOperationQueue *normalOpReqQueue; // @synthesize normalOpReqQueue=_normalOpReqQueue;
@property(retain, nonatomic) NSMutableArray *lowPriorityReqArrar; // @synthesize lowPriorityReqArrar=_lowPriorityReqArrar;
@property(retain, nonatomic) NSMutableArray *resourceReqArrary; // @synthesize resourceReqArrary=_resourceReqArrary;
@property(retain, nonatomic) NSMutableArray *noramlReqArrary; // @synthesize noramlReqArrary=_noramlReqArrary;
@property(nonatomic) int networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) struct dispatch_queue_s *reqProcessQueue; // @synthesize reqProcessQueue=_reqProcessQueue;
- (void).cxx_destruct;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 header:(id)arg4 body:(id)arg5;
- (int)currentReachabilityStatus;
- (void)NetworkReachabilityMoniorStop;
- (void)ChangeMaxConcurrentCount:(id)arg1;
- (void)NetworkReachabilityMonitorStart;
- (int)currentNetReachabilityStatus;
- (void)dealloc;
- (_Bool)checkExistAndBringFront:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (id)sessionWithSeq:(id)arg1;
- (void)requestFinished;
- (void)enqueueRequestSession:(id)arg1;
- (long long)concurrentOperationCount;
- (id)executingQueueForSessionType:(int)arg1;
- (id)waitingArrForSessionType:(int)arg1;
- (_Bool)shouldUseLocalCacheForSession:(id)arg1;
- (void)setup;
- (id)init;

@end

