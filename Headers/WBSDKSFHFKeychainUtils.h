//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBSDKSFHFKeychainUtils : NSObject
{
}

+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;

@end
