//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IPodAudioHelper : NSObject
{
}

+ (id)translateMediaItem:(id)arg1;
+ (void)syncIPodMediaLibraryIfNeedAfterDelay:(double)arg1;
+ (_Bool)isIPodNeedSync;
+ (id)getIpodSongImageBySongInfo:(id)arg1;
+ (id)asyncGetIpodSongImageBySongInfo:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)getIPodSongImage:(id)arg1;
+ (id)getAllIPodData;

@end

