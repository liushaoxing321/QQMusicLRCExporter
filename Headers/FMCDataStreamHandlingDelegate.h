//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class FMCAbstractProtocol, NSString;

@interface FMCDataStreamHandlingDelegate : NSObject <NSStreamDelegate>
{
    unsigned char _serviceType;
    FMCAbstractProtocol *_protocol;
}

@property(retain, nonatomic) FMCAbstractProtocol *protocol; // @synthesize protocol=_protocol;
@property unsigned char serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

