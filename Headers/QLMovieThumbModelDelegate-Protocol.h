//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QLMovieThumbConnectInfo;

@protocol QLMovieThumbModelDelegate <NSObject>
- (void)imgLoadFailed:(QLMovieThumbConnectInfo *)arg1;
- (void)imgLoaded:(QLMovieThumbConnectInfo *)arg1 path:(NSString *)arg2;
@end
