//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasCommChannel.h"

@interface APMidasQQWalletChannel : APMidasCommChannel
{
}

- (void)onQQWalletPayBack:(id)arg1;
- (void)onSaveSuccess;
- (void)onSaveErr:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3;
- (void)onSaveNetErr:(long long)arg1;
- (void)doBuy;
- (void)doGetTokenAndBuy;
- (void)channelFlow;

@end

