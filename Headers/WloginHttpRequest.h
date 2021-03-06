//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSString;

@interface WloginHttpRequest : NSObject <NSURLConnectionDataDelegate>
{
}

+ (id)getDomainName;
- (id)startHttpRequestSync:(id)arg1 postData:(id)arg2 andTimeout:(int)arg3 andError:(id *)arg4;
- (id)unpackResponsePackage:(id)arg1;
- (id)decryptWithRSAPublicKey:(id)arg1;
- (id)packRequestPackage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

