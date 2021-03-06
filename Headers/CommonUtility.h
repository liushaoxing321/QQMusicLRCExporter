//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CommonUtility : NSObject
{
}

+ (_Bool)isSystemVersionAboveiOS7;
+ (void)registerUserAgent:(id)arg1;
+ (id)bundleSeedID:(int *)arg1;
+ (id)createGUID;
+ (_Bool)checkGUIDService;
+ (void)findService:(id)arg1 tag:(id)arg2 saveUID:(id)arg3 group:(id)arg4;
+ (void)registerAppUid;
+ (void)registerUid;
+ (void)registerInitVid;
+ (id)getMacAddress;
+ (_Bool)isWechatInstalled;
+ (_Bool)isQQInstalled;
+ (_Bool)isDeviceJailBroken;
+ (struct CGSize)getSizeDiff:(long long)arg1;
+ (void)setTransparentBackground:(id)arg1 alpha:(double)arg2 orientation:(long long)arg3;
+ (id)getSubImage:(id)arg1 orientation:(long long)arg2;
+ (_Bool)isRetinaDisplay;
+ (id)getScreenShotsImage:(long long)arg1;
+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 completion:(CDUnknownBlockType)arg4 onViewController:(id)arg5;
+ (struct CGSize)getSizeRatio:(long long)arg1;
+ (id)blurViewWithColor:(id)arg1;
+ (_Bool)ignoreOrientation;
+ (id)md5:(id)arg1;
+ (double)rotateAngleFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
+ (struct CGAffineTransform)transformForOrientation:(long long)arg1;
+ (struct CGAffineTransform)transformForCurrentOrientation;
+ (id)filePath:(id)arg1;
+ (void)deleteOldCfgFiles;
+ (id)vendorString;
+ (id)platform;
+ (id)frameworkBundle;
+ (id)imageNamed:(id)arg1;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineBreakMode:(long long)arg4;
+ (struct CGSize)getSystemScreenMetrics:(long long)arg1;
+ (id)getColorFromRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3 alpha:(unsigned long long)arg4;
+ (id)getSubview:(id)arg1 byTagId:(unsigned long long)arg2;

@end

