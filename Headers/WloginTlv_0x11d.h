//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x11d : WloginTlv
{
    unsigned int dwAppid;
    NSData *acSigKey;
    NSData *acSig;
}

@property(retain) NSData *acSigKey; // @synthesize acSigKey;
@property(retain) NSData *acSig; // @synthesize acSig;
@property unsigned int dwAppid; // @synthesize dwAppid;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

