//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ForMeLink : NSObject <NSCopying, NSCoding>
{
    int _linkType;
    long long _linkId;
    NSString *_linkName;
    NSString *_linkUrl;
    NSString *_linkPic;
    unsigned long long _ownUin;
    NSString *_ownNick;
    NSString *_reportId;
}

+ (id)translateForMeFromURL:(id)arg1;
+ (id)translateForMeLinkFromJasonData:(id)arg1;
@property(retain, nonatomic) NSString *reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *ownNick; // @synthesize ownNick=_ownNick;
@property(nonatomic) unsigned long long ownUin; // @synthesize ownUin=_ownUin;
@property(retain, nonatomic) NSString *linkPic; // @synthesize linkPic=_linkPic;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkName; // @synthesize linkName=_linkName;
@property(nonatomic) long long linkId; // @synthesize linkId=_linkId;
@property(nonatomic) int linkType; // @synthesize linkType=_linkType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)translateForMeLinkToURL;

@end
