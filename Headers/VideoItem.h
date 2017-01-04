//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface VideoItem : NSObject <NSCoding>
{
    NSString *_jumpUrl;
    unsigned long long _albumId;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

