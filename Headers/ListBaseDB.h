//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ListBaseDBProtocol-Protocol.h"

@class UserDBAdapter;

@interface ListBaseDB : NSObject <ListBaseDBProtocol>
{
    UserDBAdapter *dbAdapter;
}

+ (id)shareDefaultListBaseDB;
- (void).cxx_destruct;
- (id)init;
- (void)onList:(id)arg1 dbInfo:(id)arg2 updateInfos:(id)arg3;
- (void)onList:(id)arg1 dbInfo:(id)arg2 delInfos:(id)arg3;
- (void)onList:(id)arg1 dbInfo:(id)arg2 addInfos:(id)arg3;
- (void)onList:(id)arg1 dbInfo:(id)arg2 delInfo:(id)arg3;
- (void)onList:(id)arg1 dbInfo:(id)arg2 addInfo:(id)arg3;
- (id)onList:(id)arg1 getDataByDB:(id)arg2;

@end

