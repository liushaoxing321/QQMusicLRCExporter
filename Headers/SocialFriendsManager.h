//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSArray, NSMutableDictionary;

@interface SocialFriendsManager : NSObject <ProtocolHostDelegate>
{
    NSMutableDictionary *fansDic;
    NSMutableDictionary *followsSingerDic;
    NSMutableDictionary *followsUserDic;
    NSArray *followmoreFriendArray;
}

+ (id)sharedSocialFriendsManager;
@property(retain, nonatomic) NSArray *followmoreFriendArray; // @synthesize followmoreFriendArray;
@property(retain, nonatomic) NSMutableDictionary *followsUserDic; // @synthesize followsUserDic;
@property(retain, nonatomic) NSMutableDictionary *followsSingerDic; // @synthesize followsSingerDic;
@property(retain, nonatomic) NSMutableDictionary *fansDic; // @synthesize fansDic;
- (void).cxx_destruct;
- (void)postFollowsData:(id)arg1 returnCode:(long long)arg2 notifyName:(id)arg3;
- (void)postFunsData:(id)arg1 returnCode:(long long)arg2 notifyName:(id)arg3;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (id)get_fans:(long long)arg1 type:(int)arg2 totalFansCount:(long long)arg3;
- (id)getCachedFansList:(long long)arg1;
- (id)getCachedFansList:(long long)arg1 type:(int)arg2 totalFansCount:(long long)arg3 refresh:(_Bool)arg4;
- (id)get_follow_friends:(long long)arg1 totalFollowsCount:(long long)arg2 type:(long long)arg3;
- (id)getCachedFollowsList:(long long)arg1 type:(long long)arg2;
- (id)getCachedFollowsList:(long long)arg1 totalFollowsCount:(long long)arg2 type:(long long)arg3 refresh:(_Bool)arg4;
- (id)init;

@end

