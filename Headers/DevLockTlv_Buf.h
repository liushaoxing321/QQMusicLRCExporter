//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DevLockTlv_base.h"

@class NSData;

@interface DevLockTlv_Buf : DevLockTlv_base
{
    NSData *acSigBuff;
}

@property(retain) NSData *acSigBuff; // @synthesize acSigBuff;
- (id)copy;
- (void)dealloc;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end
