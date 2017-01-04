//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class ChannelCreator, NSMutableArray;

@interface SongFolderListItem : NSObject <NSCoding>
{
    ChannelCreator *_creator;
    long long _type;
    unsigned long long _uin;
    long long _sin;
    long long _ein;
    long long _sum;
    NSMutableArray *_channelItemList;
}

@property(retain, nonatomic) NSMutableArray *channelItemList; // @synthesize channelItemList=_channelItemList;
@property(nonatomic) long long sum; // @synthesize sum=_sum;
@property(nonatomic) long long ein; // @synthesize ein=_ein;
@property(nonatomic) long long sin; // @synthesize sin=_sin;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

