//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DCC, DCCTaskMetadata;
@protocol DCALocalPersistenceStore, DCAReaderWriterConcurrencyDelegate, DCAReaderWriterInterface, DCCSDKConfigurationSource, OS_dispatch_queue;

@interface DCCManager : NSObject
{
    _Bool _taskLoggingEnabled;
    DCC *_client;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_taskCallbackQueue;
    DCCTaskMetadata *_lastEnqueuedTaskMetadata;
    DCCTaskMetadata *_lastBegunTaskMetadata;
    id <DCCSDKConfigurationSource> _sdkConfiguration;
    id <DCAReaderWriterInterface> _defaultReaderWriter;
    id <DCALocalPersistenceStore> _localPersistenceStore;
    long long _taskIdCounter;
    id <DCAReaderWriterConcurrencyDelegate> _defaultReaderWriterConcurrencyDelegate;
}

+ (void)resetSharedManager;
+ (id)manager;
@property(retain, nonatomic) id <DCAReaderWriterConcurrencyDelegate> defaultReaderWriterConcurrencyDelegate; // @synthesize defaultReaderWriterConcurrencyDelegate=_defaultReaderWriterConcurrencyDelegate;
@property(nonatomic) long long taskIdCounter; // @synthesize taskIdCounter=_taskIdCounter;
@property(nonatomic) _Bool taskLoggingEnabled; // @synthesize taskLoggingEnabled=_taskLoggingEnabled;
@property(retain, nonatomic) id <DCALocalPersistenceStore> localPersistenceStore; // @synthesize localPersistenceStore=_localPersistenceStore;
@property(retain, nonatomic) id <DCAReaderWriterInterface> defaultReaderWriter; // @synthesize defaultReaderWriter=_defaultReaderWriter;
@property(retain, nonatomic) id <DCCSDKConfigurationSource> sdkConfiguration; // @synthesize sdkConfiguration=_sdkConfiguration;
@property(retain, nonatomic) DCCTaskMetadata *lastBegunTaskMetadata; // @synthesize lastBegunTaskMetadata=_lastBegunTaskMetadata;
@property(retain, nonatomic) DCCTaskMetadata *lastEnqueuedTaskMetadata; // @synthesize lastEnqueuedTaskMetadata=_lastEnqueuedTaskMetadata;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) DCC *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (_Bool)areTasksPending;
- (id)enqueueDCCTaskWithTag:(id)arg1 andTaskBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskCallbackQueue; // @synthesize taskCallbackQueue=_taskCallbackQueue;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
