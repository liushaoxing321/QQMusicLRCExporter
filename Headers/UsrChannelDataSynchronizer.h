//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSError, SubscribeListItem, SubscribeProtocol, SubscribedChannelsUpdateProtocol;
@protocol UsrChannelDataSynchronizerDelegate;

@interface UsrChannelDataSynchronizer : NSObject <ProtocolHostDelegate>
{
    SubscribedChannelsUpdateProtocol *_updateProtocol;
    SubscribeProtocol *_subscribeProtocol;
    SubscribeProtocol *_reorderProtocol;
    _Bool _running;
    id <UsrChannelDataSynchronizerDelegate> _delegate;
    SubscribeListItem *_item;
    NSError *_error;
}

+ (id)_pendingReorderDataFilePathForUin:(unsigned long long)arg1;
+ (id)_pendingSubscribeDataFilePathForUin:(unsigned long long)arg1;
+ (id)_unarchiveObjectFromFile:(id)arg1;
+ (void)_archiveObject:(id)arg1 toFile:(id)arg2;
+ (_Bool)_deletePendingReorderDataForUin:(unsigned long long)arg1;
+ (_Bool)_hasPendingReorderDataForUin:(unsigned long long)arg1;
+ (_Bool)_deletePendingSubscribeDataForUin:(unsigned long long)arg1;
+ (_Bool)_hasPendingSubscribeDataForUin:(unsigned long long)arg1;
+ (void)archivePendingReorderData:(id)arg1 forUin:(unsigned long long)arg2;
+ (id)pendingReorderDataForUin:(unsigned long long)arg1;
+ (void)archivePendingSubscribeData:(id)arg1 forUin:(unsigned long long)arg2;
+ (id)pendingSubscribeDataForUin:(unsigned long long)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SubscribeListItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <UsrChannelDataSynchronizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateSubscribedListData;
- (void)_uploadPendingReorderData;
- (void)_uploadPendingSubscribeData;
- (void)_processNext;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (id)updateProtocol;
- (void)cancel;
- (void)start;
- (void)dealloc;

@end

