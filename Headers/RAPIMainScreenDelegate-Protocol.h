//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreenDelegate-Protocol.h"

@class NSString;

@protocol RAPIMainScreenDelegate <RAPIScreenDelegate>

@optional
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (NSString *)getLoadingLabel;
- (NSString *)getStringForLine:(long long)arg1 forRow:(long long)arg2;
- (long long)getItemCount;
- (_Bool)canProvideDataImmediately;
- (_Bool)currentPlaylistAvailable;
@end

