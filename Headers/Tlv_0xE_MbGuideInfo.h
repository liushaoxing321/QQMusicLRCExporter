//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DevLockTlv_base.h"

@class NSString;

@interface Tlv_0xE_MbGuideInfo : DevLockTlv_base
{
    unsigned short wMbGuideType;
    NSString *sMbGuideMsg;
    unsigned short wMbGuideInfoType;
    NSString *sMbGuideInfo;
}

@property(copy) NSString *sMbGuideInfo; // @synthesize sMbGuideInfo;
@property unsigned short wMbGuideInfoType; // @synthesize wMbGuideInfoType;
@property(copy) NSString *sMbGuideMsg; // @synthesize sMbGuideMsg;
@property unsigned short wMbGuideType; // @synthesize wMbGuideType;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

