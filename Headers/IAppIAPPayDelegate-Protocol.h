//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSError, SKPaymentTransaction;

@protocol IAppIAPPayDelegate <NSObject>
- (void)restoreTransactionFail:(NSError *)arg1;
- (void)restoreTransaction:(SKPaymentTransaction *)arg1 receipt:(NSData *)arg2;
- (void)restoreTransactions:(NSArray *)arg1 receipt:(NSData *)arg2;
- (void)failedTransaction:(SKPaymentTransaction *)arg1;
- (void)completeTransactions:(NSArray *)arg1 receipt:(NSData *)arg2;
- (void)completeTransaction:(SKPaymentTransaction *)arg1 receipt:(NSData *)arg2;
- (void)receiveProductsFail:(NSError *)arg1;
- (void)receiveProducts:(NSArray *)arg1;

@optional
- (void)receiveProductFinish;
@end

