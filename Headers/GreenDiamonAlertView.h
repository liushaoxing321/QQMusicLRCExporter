//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GreenDiamonAlertView : NSObject
{
}

+ (id)showPurchaseAlertViewWithId:(long long)arg1 andDefaultConfig:(id)arg2;
+ (void)presentIAPPurchaseViewFromVC:(id)arg1 withJumpUrl:(id)arg2 withTitle:(id)arg3;
+ (void)getJumpUrlParametersInfo:(id)arg1;
+ (id)getAidFromJumpUrl:(id)arg1;
+ (id)getGreenDiamonDaysInfo:(long long)arg1;
+ (void)displayAlertviewWithId:(long long)arg1 withDays:(long long)arg2 withScoreLevel:(long long)arg3;
+ (void)popupExpireGreenDiamonAlertView;

@end

