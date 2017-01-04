//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;

@protocol KKMediaPlayerEventProtocol <NSObject>

@optional
- (void)didMediaPlayerEventOccur:(int)arg1 userInfo:(NSDictionary *)arg2;
- (void)didMediaPlayerScreenChanged:(_Bool)arg1;
- (void)didMediaPlayerProgressUpdated:(double)arg1 playableDuration:(double)arg2 duration:(double)arg3;
- (void)didMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(NSError *)arg2;
@end

