//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APMidasReqMarkObject : NSObject <NSCopying>
{
    NSString *_reqName;
    unsigned long long _reqTag;
    unsigned long long _tm;
}

@property(nonatomic) unsigned long long tm; // @synthesize tm=_tm;
@property(nonatomic) unsigned long long reqTag; // @synthesize reqTag=_reqTag;
@property(retain, nonatomic) NSString *reqName; // @synthesize reqName=_reqName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
