//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHttpRequest.h"

@interface WBComposerHttpRequest : WBHttpRequest
{
}

+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)requestWithURL:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 delegate:(id)arg4 withTag:(id)arg5;
- (id)postBodyHasRawData:(_Bool *)arg1;
- (void)setHttpHeaderForRequest:(id)arg1;
- (id)initWithURL:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 delegate:(id)arg4 withTag:(id)arg5;

@end

