//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StatProtocol.h"

@class StatInfo;

@interface ImmStatProtocol : StatProtocol
{
    StatInfo *_statInfo;
}

@property(readonly, nonatomic) StatInfo *statInfo; // @synthesize statInfo=_statInfo;
- (void).cxx_destruct;
- (id)initWithStatInfo:(id)arg1;

@end

