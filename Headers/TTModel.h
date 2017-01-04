//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTModel-Protocol.h"

@class NSMutableArray, NSString;

@interface TTModel : NSObject <TTModel>
{
    NSMutableArray *_delegates;
}

- (void)didDeleteObject:(id)arg1 atIndexPath:(id)arg2;
- (void)didInsertObject:(id)arg1 atIndexPath:(id)arg2;
- (void)didUpdateObject:(id)arg1 atIndexPath:(id)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (void)didCancelLoad;
- (void)didFailLoadWithError:(id)arg1;
- (void)didFinishLoad;
- (void)didStartLoad;
- (void)invalidate:(_Bool)arg1;
- (void)cancel;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (_Bool)isOutdated;
- (_Bool)isLoadingMore;
- (_Bool)isLoading;
- (_Bool)isLoaded;
- (id)delegates;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

