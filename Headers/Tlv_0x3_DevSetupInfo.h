//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DevLockTlv_base.h"

@class NSString;

@interface Tlv_0x3_DevSetupInfo : DevLockTlv_base
{
    unsigned int dwDevSetup;
    BOOL cAllowSet;
    NSString *sProtectInfo;
    NSString *sWarnTitle;
    NSString *sWarnMsg;
    unsigned short wWarnInfoType;
    NSString *sWarnInfo;
}

@property(copy) NSString *sWarnInfo; // @synthesize sWarnInfo;
@property unsigned short wWarnInfoType; // @synthesize wWarnInfoType;
@property(copy) NSString *sWarnMsg; // @synthesize sWarnMsg;
@property(copy) NSString *sWarnTitle; // @synthesize sWarnTitle;
@property(copy) NSString *sProtectInfo; // @synthesize sProtectInfo;
@property BOOL cAllowSet; // @synthesize cAllowSet;
@property unsigned int dwDevSetup; // @synthesize dwDevSetup;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

