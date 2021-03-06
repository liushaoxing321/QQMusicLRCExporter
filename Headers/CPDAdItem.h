//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class CPDAdExtraMessage, NSArray, NSString;

@interface CPDAdItem : NSObject <NSCoding>
{
    _Bool _bShowed;
    long long _itemId;
    long long _playTime;
    long long _startPlayTime;
    NSString *_imageUrl;
    double _startTime;
    double _endTime;
    long long _jumpId;
    long long _jumpType;
    NSString *_jumpUrl;
    NSString *_title;
    NSString *_subTitle;
    CPDAdExtraMessage *_extraMessage;
    long long _lvmonth;
    long long _opentimes;
    long long _gdItemReaminTimes;
    long long _configType;
    long long _eventId;
    NSArray *_singerIds;
}

@property(retain, nonatomic) NSArray *singerIds; // @synthesize singerIds=_singerIds;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
@property(nonatomic) _Bool bShowed; // @synthesize bShowed=_bShowed;
@property(nonatomic) long long configType; // @synthesize configType=_configType;
@property(nonatomic) long long gdItemReaminTimes; // @synthesize gdItemReaminTimes=_gdItemReaminTimes;
@property(nonatomic) long long opentimes; // @synthesize opentimes=_opentimes;
@property(nonatomic) long long lvmonth; // @synthesize lvmonth=_lvmonth;
@property(retain, nonatomic) CPDAdExtraMessage *extraMessage; // @synthesize extraMessage=_extraMessage;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) long long jumpId; // @synthesize jumpId=_jumpId;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isItemReadyToShow;
- (id)getChannelItem;
- (_Bool)gdItemCanShow;
- (_Bool)isValid;
- (_Bool)isExpired;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

