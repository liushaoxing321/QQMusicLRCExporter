//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WloginErrInfo : NSObject
{
    NSString *sErrorUserAccount;
    unsigned short wErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorAddType;
    NSString *sErrorAdd;
    NSMutableDictionary *detailInfo;
}

@property(retain) NSMutableDictionary *detailInfo; // @synthesize detailInfo;
@property(copy) NSString *sErrorUserAccount; // @synthesize sErrorUserAccount;
@property(copy) NSString *sErrorAdd; // @synthesize sErrorAdd;
@property unsigned short wErrorAddType; // @synthesize wErrorAddType;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned short wErrorCode; // @synthesize wErrorCode;
- (id)description;
- (void)dealloc;

@end
