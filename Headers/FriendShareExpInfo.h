//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExpInfo.h"

@class NSArray, NSString;

@interface FriendShareExpInfo : ExpInfo
{
    int loveCount;
    int shareCont;
    unsigned long long shareTime;
    NSString *reason;
    _Bool hasZan;
    int zanNum;
    NSString *topicId;
    NSString *reportID;
    int serverSubType;
    NSArray *zanArray;
    _Bool isExpand;
    int shareCount;
}

@property(nonatomic) _Bool isExpand; // @synthesize isExpand;
@property(nonatomic) int zanNum; // @synthesize zanNum;
@property(retain, nonatomic) NSArray *zanArray; // @synthesize zanArray;
@property(nonatomic) int serverSubType; // @synthesize serverSubType;
@property(retain, nonatomic) NSString *reportID; // @synthesize reportID;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId;
@property(nonatomic) _Bool hasZan; // @synthesize hasZan;
@property(retain, nonatomic) NSString *reason; // @synthesize reason;
@property(nonatomic) unsigned long long shareTime; // @synthesize shareTime;
@property(nonatomic) int loveCount; // @synthesize loveCount;
@property(nonatomic) int shareCount; // @synthesize shareCount;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
