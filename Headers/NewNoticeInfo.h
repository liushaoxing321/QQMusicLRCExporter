//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NewNoticeInfo : NSObject
{
    long long noticeID;
    NSString *mainTitle;
    NSString *subTitle;
    NSString *jumpUrl;
    NSString *startTime;
    NSString *endTime;
}

@property(retain, nonatomic) NSString *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle;
@property(nonatomic) long long noticeID; // @synthesize noticeID;
- (void).cxx_destruct;
- (id)getUniqueID;
- (id)description;

@end

