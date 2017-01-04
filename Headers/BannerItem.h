//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString, UIImage;

@interface BannerItem : NSObject <NSCoding, NSCopying>
{
    int bannerid;
    int type;
    int showtime;
    NSString *target_url;
    NSDate *startTime;
    NSDate *endTime;
    UIImage *bannerImage;
    NSString *target_name;
    NSString *mid;
    NSString *tType;
    NSString *mType;
    NSString *srcPic;
    NSArray *picSizeArray;
    NSArray *fAdClickUrls;
    NSArray *fAdExposureUrls;
}

@property(retain, nonatomic) NSArray *fAdExposureUrls; // @synthesize fAdExposureUrls;
@property(retain, nonatomic) NSArray *fAdClickUrls; // @synthesize fAdClickUrls;
@property(retain, nonatomic) NSArray *picSizeArray; // @synthesize picSizeArray;
@property(retain, nonatomic) NSString *srcPic; // @synthesize srcPic;
@property(retain, nonatomic) NSString *mType; // @synthesize mType;
@property(retain, nonatomic) NSString *tType; // @synthesize tType;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *target_name; // @synthesize target_name;
@property(nonatomic) int showtime; // @synthesize showtime;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *target_url; // @synthesize target_url;
@property(nonatomic) int bannerid; // @synthesize bannerid;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)imageUrl;
- (id)imageFileNameForBanner;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
