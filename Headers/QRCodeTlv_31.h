//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface QRCodeTlv_31 : WloginTlv
{
    unsigned char cIsRoot;
    NSString *sOs;
    NSString *sOsVer;
    unsigned short wNetInfo;
    NSString *sNetDetail;
    NSString *sAddr;
}

@property(copy) NSString *sAddr; // @synthesize sAddr;
@property(copy) NSString *sNetDetail; // @synthesize sNetDetail;
@property unsigned short wNetInfo; // @synthesize wNetInfo;
@property(copy) NSString *sOsVer; // @synthesize sOsVer;
@property(copy) NSString *sOs; // @synthesize sOs;
@property unsigned char cIsRoot; // @synthesize cIsRoot;
- (_Bool)_isJailbreak;
- (void)dealloc;
- (int)encode:(id)arg1;
- (id)init;

@end

