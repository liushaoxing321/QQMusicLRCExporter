//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLASIHTTPDelegate-Protocol.h"

@class NSDate, NSString, NSURL, QLASIHTTPRequest;
@protocol QLRequestModelDelegate;

@interface QLRequestModel : NSObject <QLASIHTTPDelegate>
{
    NSDate *_loadedTime;
    NSString *_cacheKey;
    NSURL *_cacheUrl;
    _Bool _isLoadingMore;
    QLASIHTTPRequest *_loadingRequest;
    id <QLRequestModelDelegate> _delegate;
    double _invalidateAge;
}

@property(nonatomic) double invalidateAge; // @synthesize invalidateAge=_invalidateAge;
@property(copy, nonatomic) NSURL *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSDate *loadedTime; // @synthesize loadedTime=_loadedTime;
@property _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property id <QLRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) QLASIHTTPRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void)requestDidRetryRequest:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)requestPartDidFinishLoad:(id)arg1;
- (void)requestDidFinishLoadNoUpdate:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (_Bool)isOutdated;
@property(readonly) _Bool isLoaded;
@property(readonly) _Bool isLoading;
- (void)invalidate:(_Bool)arg1;
- (void)cancel;
- (void)reset;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

