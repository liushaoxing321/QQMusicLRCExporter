//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APMidasApi : NSObject
{
}

+ (void)registerUuId;
+ (_Bool)isMultiTouch;
+ (_Bool)handleApplication:(id)arg1 openUrl:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)launchNet:(id)arg1 delegate:(id)arg2;
+ (void)interLaunchPay:(id)arg1 delegate:(id)arg2;
+ (void)launchPay:(id)arg1 delegate:(id)arg2;
+ (void)enableLog:(_Bool)arg1;
+ (id)getVersion;
+ (void)setEnv:(id)arg1;

@end
