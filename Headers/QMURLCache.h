//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLCache.h>

@class NSDictionary, NSString;

@interface QMURLCache : NSURLCache
{
    NSDictionary *_mimeTypes;
    _Bool _isFetchingToken;
    NSString *_tokenRequestAppID;
    NSString *_tokenRequestParameterString;
    unsigned long long _defaultDiskCapacity;
    unsigned long long _defaultMemoryCapacity;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)mimeTypeForURL:(id)arg1;
- (id)init;

@end

