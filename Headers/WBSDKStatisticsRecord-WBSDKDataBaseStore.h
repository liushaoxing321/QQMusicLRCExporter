//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSDKStatisticsRecord.h"

#import "WBSDKDBObjectAccessDelgate-Protocol.h"

@class NSString;

@interface WBSDKStatisticsRecord (WBSDKDataBaseStore) <WBSDKDBObjectAccessDelgate>
+ (id)objectFromRS:(id)arg1;
+ (id)selectDB:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3;
+ (void)deleteInDB:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3;
+ (void)createTableIfNeeded:(id)arg1;
+ (id)tableName;
- (void)loadFromRS:(id)arg1;
- (void)deleteInDB:(id)arg1;
- (void)updateDB:(id)arg1;
- (void)insertToDataBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

