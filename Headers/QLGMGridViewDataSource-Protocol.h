//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QLGMGridView, QLGMGridViewCell;

@protocol QLGMGridViewDataSource <NSObject>
- (QLGMGridViewCell *)QLGMGridView:(QLGMGridView *)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)QLGMGridView:(QLGMGridView *)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInQLGMGridView:(QLGMGridView *)arg1;

@optional
- (_Bool)QLGMGridView:(QLGMGridView *)arg1 canDeleteItemAtIndex:(long long)arg2;
@end

