//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXOMTAStore : NSObject
{
    struct dispatch_queue_s *task_queue;
    struct sqlite3 *db;
    unsigned int numStoredEvents;
}

+ (id)getInstance;
- (void)sendCachedEvents:(int)arg1;
- (void)storeEvent:(id)arg1 hasTrySent:(_Bool)arg2 CB:(CDUnknownBlockType)arg3;
- (void)loadConfig:(CDUnknownBlockType)arg1;
- (void)storeConfig:(id)arg1;
- (void)loadCachedEvents:(id)arg1;
- (unsigned int)storedEventCount;
- (void)close;
- (id)loadUser;
- (void)storeUser:(id)arg1;
- (void)updateEvents:(id)arg1 status:(unsigned int)arg2;
- (void)updateSendFailedEvents:(id)arg1;
- (void)deleteEvents:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned int)getStoredEventsNum;
- (id)getMtaOpenUDID;
- (int)updateDatabase:(const char *)arg1;
- (void)deleteDB;
- (void)closeDB;
- (struct sqlite3 *)getDB;
- (void)initDB;
- (void)launch;
- (id)init;

@end

