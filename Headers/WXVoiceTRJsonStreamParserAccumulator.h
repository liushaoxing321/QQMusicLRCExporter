//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXVoiceTRJsonStreamParserAdapterDelegate-Protocol.h"

@interface WXVoiceTRJsonStreamParserAccumulator : NSObject <WXVoiceTRJsonStreamParserAdapterDelegate>
{
    id value;
}

@property(readonly, copy) id value; // @synthesize value;
- (void)parser:(id)arg1 foundObject:(id)arg2;
- (void)parser:(id)arg1 foundArray:(id)arg2;
- (void)dealloc;

@end

