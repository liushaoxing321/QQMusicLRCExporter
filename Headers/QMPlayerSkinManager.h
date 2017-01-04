//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DownLoadTaskDelegate-Protocol.h"

@class DownLoadTask, NSString, QMPlayerSkinItem;

@interface QMPlayerSkinManager : NSObject <DownLoadTaskDelegate>
{
    QMPlayerSkinItem *_currentDownloadingItem;
    DownLoadTask *_currentDownloadTask;
}

+ (id)sharedInstance;
@property(retain) DownLoadTask *currentDownloadTask; // @synthesize currentDownloadTask=_currentDownloadTask;
@property(retain) QMPlayerSkinItem *currentDownloadingItem; // @synthesize currentDownloadingItem=_currentDownloadingItem;
- (void).cxx_destruct;
- (id)skinDir;
- (id)dirOfSkin:(id)arg1;
- (_Bool)isSkinBundleExist:(id)arg1;
- (id)filePathOfSkinZip:(id)arg1;
- (id)filePathOfSkinBundle:(id)arg1;
- (void)unzipSkin:(id)arg1;
- (_Bool)createBundleFromZipForSkin:(id)arg1;
- (id)imageNamed:(id)arg1 forSkin:(id)arg2;
- (id)jsdataForSkin:(id)arg1;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)deleteOldSkinFile:(id)arg1;
- (long long)downloadSkinItem:(id)arg1;
- (void)changePlayerSkin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

