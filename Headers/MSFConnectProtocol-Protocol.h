//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSFConnect, NSData, NSDictionary, NSError, NSString;

@protocol MSFConnectProtocol <NSObject>
- (void)msfconnection:(MSFConnect *)arg1 didFailWithError:(NSError *)arg2 param:(NSDictionary *)arg3;
- (void)msfconnection:(MSFConnect *)arg1 didReceiveData:(NSData *)arg2 param:(NSDictionary *)arg3;
- (void)msfconnection:(MSFConnect *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3 param:(NSDictionary *)arg4;
@end

