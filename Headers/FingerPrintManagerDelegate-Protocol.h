//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SongInfo;

@protocol FingerPrintManagerDelegate <NSObject>
- (void)onFingerPrintStatusChange:(SongInfo *)arg1 fingerPrintStatus:(int)arg2 lyric:(NSString *)arg3 SongId:(unsigned long long)arg4 lyricType:(int)arg5;
@end

