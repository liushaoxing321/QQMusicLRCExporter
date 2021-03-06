//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KKMediaPlayer, NSError, QQMediaPlayerController;

@protocol KKMediaPlayerDelegate <NSObject>
- (void)mediaPlayerStateNotify:(KKMediaPlayer *)arg1 withState:(long long)arg2 withError:(NSError *)arg3 withFileCacheOrder:(long long)arg4 withIsCurrentFile:(_Bool)arg5;
- (void)mediaPlayerCheckMediaUrlError:(QQMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRequestStateChange:(QQMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerPlaybackDidFinish:(QQMediaPlayerController *)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(QQMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerLoadStateDidChange:(QQMediaPlayerController *)arg1 withError:(NSError *)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(QQMediaPlayerController *)arg1;

@optional
- (_Bool)isHDMIMode;
- (void)mediaPlayerAirplayState:(_Bool)arg1;
- (void)mediaPlayerDidExitFullscreen:(QQMediaPlayerController *)arg1;
- (void)mediaPlayerDidEnterFullscreen:(QQMediaPlayerController *)arg1;
@end

