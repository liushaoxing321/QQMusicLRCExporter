//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@interface WloginTlv_0x17b : WloginTlv
{
    unsigned short wAvailMsgCnt;
    unsigned short wTimeLimit;
}

@property unsigned short wTimeLimit; // @synthesize wTimeLimit;
@property unsigned short wAvailMsgCnt; // @synthesize wAvailMsgCnt;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

