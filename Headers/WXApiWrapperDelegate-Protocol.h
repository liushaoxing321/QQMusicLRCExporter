//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WXApiWrapper;

@protocol WXApiWrapperDelegate <NSObject>

@optional
- (void)WXLogInDidLogOut:(WXApiWrapper *)arg1;
- (void)WXLogInDidSuccess:(WXApiWrapper *)arg1;
- (void)WXLogInDidFail:(WXApiWrapper *)arg1 error:(NSError *)arg2;
- (void)WXLogInStart:(WXApiWrapper *)arg1;
@end
