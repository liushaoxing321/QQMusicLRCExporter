//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NewVersionInfo : NSObject
{
    long long versionID;
    NSString *versionName;
    NSString *mainTitle;
    NSString *subTitle;
    NSString *jumpUrl;
}

@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle;
@property(retain, nonatomic) NSString *versionName; // @synthesize versionName;
@property(nonatomic) long long versionID; // @synthesize versionID;
- (void).cxx_destruct;
- (id)description;

@end

