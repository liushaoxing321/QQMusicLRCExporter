//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface FlashScreenItem : NSObject <NSCoding>
{
    _Bool isClickable;
    _Bool isGDTSplash;
    long long iId;
    NSString *strName;
    NSString *strPath;
    NSString *strStartTime;
    NSString *strEndTime;
    NSString *strClickURL;
    NSString *strExposureURL;
    NSString *strSplashType;
    NSString *strPageType;
    long long jumpType;
    long long longJumpId;
    long long jumpId;
    long long jumpOverFlag;
    NSString *zipPackageUrl;
    long long staticTimeout;
    long long dynamicTimeout;
    NSString *mvId;
    NSString *mvTitle;
    NSString *singerName;
    NSDate *getSplashDate;
    NSString *mvPic;
    NSString *_oId;
    NSArray *_fAdClickUrls;
    NSArray *_fAdExposureUrls;
}

+ (void)saveFlashScreens:(id)arg1;
@property(retain, nonatomic) NSArray *fAdExposureUrls; // @synthesize fAdExposureUrls=_fAdExposureUrls;
@property(retain, nonatomic) NSArray *fAdClickUrls; // @synthesize fAdClickUrls=_fAdClickUrls;
@property(retain, nonatomic) NSString *oId; // @synthesize oId=_oId;
@property(retain, nonatomic) NSString *mvPic; // @synthesize mvPic;
@property(retain, nonatomic) NSDate *getSplashDate; // @synthesize getSplashDate;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName;
@property(retain, nonatomic) NSString *mvTitle; // @synthesize mvTitle;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId;
@property(nonatomic) long long dynamicTimeout; // @synthesize dynamicTimeout;
@property(nonatomic) long long staticTimeout; // @synthesize staticTimeout;
@property(retain, nonatomic) NSString *zipPackageUrl; // @synthesize zipPackageUrl;
@property(nonatomic) long long jumpOverFlag; // @synthesize jumpOverFlag;
@property(nonatomic) long long jumpId; // @synthesize jumpId;
@property(nonatomic) long long longJumpId; // @synthesize longJumpId;
@property(nonatomic) long long jumpType; // @synthesize jumpType;
@property(nonatomic) _Bool isGDTSplash; // @synthesize isGDTSplash;
@property(nonatomic) _Bool isClickable; // @synthesize isClickable;
@property(retain, nonatomic) NSString *strPageType; // @synthesize strPageType;
@property(retain, nonatomic) NSString *strSplashType; // @synthesize strSplashType;
@property(retain, nonatomic) NSString *strExposureURL; // @synthesize strExposureURL;
@property(retain, nonatomic) NSString *strClickURL; // @synthesize strClickURL;
@property(retain, nonatomic) NSString *strEndTime; // @synthesize strEndTime;
@property(retain, nonatomic) NSString *strStartTime; // @synthesize strStartTime;
@property(retain, nonatomic) NSString *strPath; // @synthesize strPath;
@property(retain, nonatomic) NSString *strName; // @synthesize strName;
@property(nonatomic) long long iId; // @synthesize iId;
- (void).cxx_destruct;
- (id)staticSplashResourceName;
- (id)dynamicSplashJSIndexPath;
- (id)dynamicSplashDirPath;
- (id)dynamicSplashDirPathWithZip;
- (id)dynamicSplashDirPathAddiID:(id)arg1;
- (_Bool)isAD;
- (_Bool)isDynamicSplashPrepared;
- (_Bool)isStaticSplashPrepared;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

