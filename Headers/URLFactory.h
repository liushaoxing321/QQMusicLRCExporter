//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface URLFactory : NSObject
{
}

+ (int)getSongTypeByMidPrefix:(id)arg1;
+ (id)getMVImageUrlByVid:(id)arg1;
+ (id)getAlbumUrlArrayByAlbumMid:(id)arg1 andImageOption:(unsigned long long)arg2;
+ (id)getAlbumUrlByAlbumMid:(id)arg1 andImageOption:(unsigned long long)arg2 forceJPEGFormat:(_Bool)arg3;
+ (id)getAlbumUrlByAlbumId:(unsigned long long)arg1 andImageOption:(unsigned long long)arg2 forceJPEGFormat:(_Bool)arg3;
+ (id)getSingerUrlArrayBySingerMid:(id)arg1 andImageOption:(unsigned long long)arg2;
+ (id)getSingerUrlBySingerMid:(id)arg1 andImageOption:(unsigned long long)arg2 forceJPEGFormat:(_Bool)arg3;
+ (id)getSingerUrlBySingerId:(unsigned long long)arg1 andImageOption:(unsigned long long)arg2 forceJPEGFormat:(_Bool)arg3;
+ (id)getJointUrlByType:(_Bool)arg1 andMid:(id)arg2 andImageOption:(unsigned long long)arg3 forceJPEGFormat:(_Bool)arg4;
+ (id)getJointUrlArraysByType:(_Bool)arg1 andMid:(id)arg2 andImageOption:(unsigned long long)arg3;
+ (id)getJointUrlByType:(_Bool)arg1 andId:(unsigned long long)arg2 andImageOption:(unsigned long long)arg3 forceJPEGFormat:(_Bool)arg4;
+ (id)getSingerImageFormatByImageOption:(unsigned long long)arg1;
+ (id)getAlbumImageFormatByImageOption:(unsigned long long)arg1;
+ (id)getImageFormatByImageOption:(unsigned long long)arg1 isSinger:(_Bool)arg2;
+ (id)getImageFormatByImageOption:(unsigned long long)arg1;
+ (id)getUrlBySongInfo:(id)arg1 andSongType:(int)arg2 forDownload:(_Bool)arg3;
+ (id)getUrlBySongInfo:(id)arg1 andSongType:(int)arg2 vkeyNeeded:(_Bool)arg3 forDownload:(_Bool)arg4 assetsType:(int)arg5;
+ (id)getUrlBySongInfo:(id)arg1 andSongType:(int)arg2 vkeyNeeded:(_Bool)arg3 forDownload:(_Bool)arg4;
+ (id)getURLByUid:(id)arg1 AndSongId:(unsigned long long)arg2 AndURLType:(int)arg3 vkeyNeeded:(_Bool)arg4;
+ (id)getURLByUid:(id)arg1 AndSongMid:(id)arg2 AndURLType:(int)arg3 pc:(_Bool)arg4;
+ (id)getURLByUid:(id)arg1 AndSongId:(unsigned long long)arg2 AndURLType:(int)arg3 vkeyNeeded:(_Bool)arg4 pc:(_Bool)arg5;

@end
