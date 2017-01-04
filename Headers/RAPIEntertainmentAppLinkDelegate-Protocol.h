//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, RAPICarDescription, UIImage;

@protocol RAPIEntertainmentAppLinkDelegate <NSObject>

@optional
- (NSString *)getMoreLabelForGroup:(long long)arg1 forScreen:(long long)arg2;
- (void)onSearchStringChanged:(NSString *)arg1 forSearchScreen:(long long)arg2;
- (void)onRowFocused:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (NSString *)getLabelForEmptyListInScreen:(long long)arg1;
- (_Bool)isMasterOptionButtonCheckedForScreen:(long long)arg1;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (UIImage *)getImageForRow:(long long)arg1 forGroup:(long long)arg2 withPreferredSize:(struct CGSize)arg3 forScreen:(long long)arg4;
- (NSString *)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3 forScreen:(long long)arg4;
- (long long)getItemCountForGroup:(long long)arg1 forScreen:(long long)arg2;
- (NSString *)getGroupLabelForGroup:(long long)arg1 forScreen:(long long)arg2;
- (_Bool)isGroupLabelVisibleForGroup:(long long)arg1 forScreen:(long long)arg2;
- (long long)getGroupCountForScreen:(long long)arg1;
- (_Bool)currentPlaylistAvailable;
- (long long)getTotalTrackTime;
- (long long)getCurrentTrackTime;
- (float)getCurrentTrackProgress;
- (void)onScreenAppeared:(long long)arg1 triggeredByScreen:(long long)arg2 andGroup:(long long)arg3 andItem:(long long)arg4;
- (void)onScreenChangedFrom:(long long)arg1 to:(long long)arg2 withClickedItemIndex:(long long)arg3 andGroupIndex:(long long)arg4;
- (NSString *)getLoadingLabelForScreen:(long long)arg1;
- (_Bool)canProvideDataImmediately:(long long)arg1;
- (NSString *)getTitleForScreen:(long long)arg1;
- (NSString *)getDefaultLabel:(int)arg1;
- (void)onTextLog:(NSString *)arg1 source:(long long)arg2;
- (void)onCarLanguageChanged:(NSString *)arg1;
- (_Bool)canSkipPrev;
- (_Bool)canSkipNext;
- (void)onEndSeek;
- (void)onJumpToTrackStart;
- (void)onBeginSeekForward;
- (void)onBeginSeekBackward;
- (void)onSkipPrev;
- (void)onSkipNext;
- (void)onPausePlayback;
- (void)onStartPlayback;
- (void)onDisconnectedFromCar;
- (_Bool)onConnectionError:(NSError *)arg1;
- (void)onConnectedToCar:(RAPICarDescription *)arg1;
@end

