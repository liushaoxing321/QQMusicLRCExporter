//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface VQMTATestSpeed : NSObject
{
    NSString *_dm;
    NSNumber *_pt;
    NSString *_rip;
    NSNumber *_st;
    NSNumber *_ts;
    NSNumber *_tm;
}

@property(retain, nonatomic) NSNumber *tm; // @synthesize tm=_tm;
@property(retain, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSNumber *st; // @synthesize st=_st;
@property(retain, nonatomic) NSString *rip; // @synthesize rip=_rip;
@property(retain, nonatomic) NSNumber *pt; // @synthesize pt=_pt;
@property(retain, nonatomic) NSString *dm; // @synthesize dm=_dm;
- (id)description;
- (id)toJsonString;

@end

