//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x132 : WloginTlv
{
    NSData *accessToken;
    unsigned int dwExpireTime;
    NSData *openId;
}

@property(copy) NSData *openId; // @synthesize openId;
@property unsigned int dwExpireTime; // @synthesize dwExpireTime;
@property(retain) NSData *accessToken; // @synthesize accessToken;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (void)dealloc;

@end

