//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FollowCreatorList : NSObject
{
    unsigned long long _uin;
    NSMutableArray *_creatorList;
}

+ (void)saveCreatorFollowlistWithItem:(id)arg1;
+ (id)loadCreatorFollowListByUin:(unsigned long long)arg1;
+ (id)getCreatorFollowFilePathForUin:(unsigned long long)arg1;
+ (id)unarchiveObjectFromFile:(id)arg1;
+ (void)archiveObject:(id)arg1 toFile:(id)arg2;
@property(retain, nonatomic) NSMutableArray *creatorList; // @synthesize creatorList=_creatorList;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

