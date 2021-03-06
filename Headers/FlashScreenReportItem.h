//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class FlashScreenClickInfo, FlashScreenExposureInfo, NSString;

@interface FlashScreenReportItem : NSObject <ProtocolHostDelegate, NSCoding>
{
    FlashScreenClickInfo *_clickInfo;
    FlashScreenExposureInfo *_exposureInfo;
    NSString *_clickUrl;
    NSString *_exposureUrl;
    long long _splashId;
    long long _optype;
    long long _showFlag;
    long long _clickFlag;
    long long _showTime;
    long long _jumpOver;
    long long _preSplashType;
    long long _curdayFlag;
    long long _getSplashType;
    long long _splashType;
}

+ (void)cleanCachedReportItems;
+ (id)loadFlashScreenReportItems;
+ (void)saveFlashScreenReportItems:(id)arg1;
@property(nonatomic) long long splashType; // @synthesize splashType=_splashType;
@property(nonatomic) long long getSplashType; // @synthesize getSplashType=_getSplashType;
@property(nonatomic) long long curdayFlag; // @synthesize curdayFlag=_curdayFlag;
@property(nonatomic) long long preSplashType; // @synthesize preSplashType=_preSplashType;
@property(nonatomic) long long jumpOver; // @synthesize jumpOver=_jumpOver;
@property(nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(nonatomic) long long clickFlag; // @synthesize clickFlag=_clickFlag;
@property(nonatomic) long long showFlag; // @synthesize showFlag=_showFlag;
@property(nonatomic) long long optype; // @synthesize optype=_optype;
@property(nonatomic) long long splashId; // @synthesize splashId=_splashId;
@property(retain, nonatomic) NSString *exposureUrl; // @synthesize exposureUrl=_exposureUrl;
@property(retain, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) FlashScreenExposureInfo *exposureInfo; // @synthesize exposureInfo=_exposureInfo;
@property(retain, nonatomic) FlashScreenClickInfo *clickInfo; // @synthesize clickInfo=_clickInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)reportClickInfo:(id)arg1;

@end

