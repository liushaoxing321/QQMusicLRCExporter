//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString, QMBulletSendGiftPlugin;

@protocol QMBulletSendGiftPluginDelegate <NSObject>

@optional
- (void)bulletSendGiftPlugin:(QMBulletSendGiftPlugin *)arg1 didClickBuyStarWithUrl:(NSString *)arg2;
- (void)didCanceledByBulletSendGiftPlugin:(QMBulletSendGiftPlugin *)arg1;
- (void)bulletSendGiftPlugin:(QMBulletSendGiftPlugin *)arg1 didSendGiftFailWithErrorCode:(NSNumber *)arg2;
- (void)bulletSendGiftPlugin:(QMBulletSendGiftPlugin *)arg1 didSendGiftSuccWithCgiResponse:(NSDictionary *)arg2;
@end

