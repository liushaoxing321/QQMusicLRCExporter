//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDBclBroadcastReceiver-Protocol.h"

@class NSHashTable, NSLock, NSOperationQueue;
@protocol IDBclBroadcastSender;

@interface IDMessagingService : NSObject <IDBclBroadcastReceiver>
{
    id <IDBclBroadcastSender> _broadcastSender;
    NSOperationQueue *_queue;
    NSHashTable *_subscribers;
    NSLock *_subscribersAccessLock;
}

@property(readonly, nonatomic) NSLock *subscribersAccessLock; // @synthesize subscribersAccessLock=_subscribersAccessLock;
@property(retain) NSHashTable *subscribers; // @synthesize subscribers=_subscribers;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain) id <IDBclBroadcastSender> broadcastSender; // @synthesize broadcastSender=_broadcastSender;
- (void).cxx_destruct;
- (void)sendBroadcast:(id)arg1;
- (id)messageWithJSONRPCString:(id)arg1;
- (void)processBroadcast:(id)arg1;
- (void)handleBroadcast:(id)arg1;
- (void)broadcastMessage:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)init;

@end

