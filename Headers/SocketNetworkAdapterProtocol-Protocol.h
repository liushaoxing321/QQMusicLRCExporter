//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, SocketNetworkAdapter;

@protocol SocketNetworkAdapterProtocol <NSObject>
- (void)onSocket:(SocketNetworkAdapter *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (void)onSocketDidDisconnect:(SocketNetworkAdapter *)arg1;
- (void)onSocket:(SocketNetworkAdapter *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)onSocket:(SocketNetworkAdapter *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
@end
