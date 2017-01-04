//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImageHttpManager.h"

#import "ProtocolHostDelegate-Protocol.h"

@class ImageProtocol, NSMutableArray;

@interface ImageManager : ImageHttpManager <ProtocolHostDelegate>
{
    NSMutableArray *objectInRun;
    NSMutableArray *ItemsNeedAddress;
    ImageProtocol *protocol;
    NSMutableArray *_hostArray;
    NSMutableArray *_ipDownLoadQueue;
    NSMutableArray *_itemNeedNotify;
}

+ (id)getAlbumImageWithPayIcon:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)scaleBannerImageToProperSize:(id)arg1;
+ (id)sharedImageManager;
+ (id)scrollImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)getClusterFileBy:(id)arg1;
+ (id)getResourceFileBy:(id)arg1;
+ (id)getUserImageFilePath:(id)arg1;
+ (id)getAppImageFilePath:(id)arg1;
+ (_Bool)fileNameIsUnValid:(id)arg1;
+ (id)getCategoryImageFilePath:(id)arg1;
+ (id)getChannelImageFilePath:(id)arg1;
+ (id)getGDTBannerImageFilePath:(id)arg1;
+ (id)getBannerImageFilePath:(id)arg1;
+ (id)getFocusFileByName:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itemNeedNotify; // @synthesize itemNeedNotify=_itemNeedNotify;
- (void).cxx_destruct;
- (_Bool)shouldSupport304WithURLString:(id)arg1;
- (id)getImageAsynchronizedByUrl:(id)arg1 inDirectoryPath:(id)arg2 Support304:(_Bool)arg3 WithCallback:(id)arg4 AndObject:(id)arg5 lowPriority:(_Bool)arg6;
- (id)getImageAsynchronizedByUrl:(id)arg1 inDirectoryPath:(id)arg2 Support304:(_Bool)arg3 WithCallback:(id)arg4 AndObject:(id)arg5;
- (id)getImageAsynchronizedByUrl:(id)arg1 Support304:(_Bool)arg2 WithCallback:(id)arg3 AndObject:(id)arg4;
- (id)getImageAsynchronizedByUrl:(id)arg1 WithCallback:(id)arg2 AndObject:(id)arg3;
- (id)downloadImageByUrl:(id)arg1 WithCallback:(id)arg2 AndObject:(id)arg3;
- (id)getImageByUrl:(id)arg1 Force:(_Bool)arg2 Support304:(_Bool)arg3 WithCallback:(id)arg4 AndObject:(id)arg5;
- (id)getImageByUrl:(id)arg1 WithCallback:(id)arg2 AndObject:(id)arg3;
- (id)getLocalImageByUrl:(id)arg1;
- (id)getLocalImageByInfo:(id)arg1 Option:(unsigned long long)arg2;
- (void)getImageAsynchronizedByInfo:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3 AndObject:(id)arg4;
- (void)getImageAsynchronizedByInfo:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3;
- (id)getImageByInfo:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3 AndObject:(id)arg4;
- (id)getImageByInfo:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3;
- (id)imageOptionStr:(unsigned long long)arg1;
- (void)deleteFileByInfo:(id)arg1 ImageOption:(unsigned long long)arg2;
- (void)deleteAlbumImage:(id)arg1;
- (void)deleteSingerImage:(id)arg1;
- (void)getSingerOrAlbumImageBy:(id)arg1 Option:(unsigned long long)arg2 AutoScale:(_Bool)arg3 Callback:(id)arg4 AndObject:(id)arg5;
- (void)removeDelegate:(id)arg1;
- (id)getAlbumImageWithPayIconBySong:(id)arg1;
- (id)getAlbumImageBySong:(id)arg1 Callback:(id)arg2;
- (id)getPlayingViewCacheImageBySong:(id)arg1;
- (id)getCacheUIImageBySong:(id)arg1;
- (id)getbigImageBySong:(id)arg1 Callback:(id)arg2 ForceReload:(_Bool)arg3 returnImageSpec:(long long *)arg4;
- (_Bool)canSupport304;
- (id)getBigImageBySong:(id)arg1 Callback:(id)arg2 ForceReload:(_Bool)arg3;
- (id)getBigImageBySong:(id)arg1 Callback:(id)arg2;
- (id)getSmallImageBySong:(id)arg1 Callback:(id)arg2;
- (void)getAlbumImageAsynchronized:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3;
- (void)getAlbumImageBy:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3;
- (void)getSingerImageBy:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3 context:(id)arg4;
- (void)getSingerImageBy:(id)arg1 Option:(unsigned long long)arg2 Callback:(id)arg3;
- (id)getUserImageByUin:(unsigned long long)arg1 Url:(id)arg2 AndCallback:(id)arg3 context:(id)arg4;
- (id)getAppImageByAppName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getImageByCategory:(id)arg1 AndCallback:(id)arg2;
- (void)getCategoryImageAsynchronizedByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getCategoryImageBy:(id)arg1 AndCallback:(id)arg2;
- (void)getChannelImageAsynchronizedByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getImageByUrl:(id)arg1 CanDownload:(_Bool)arg2 AndCallback:(id)arg3 AndObject:(id)arg4;
- (id)getChannelImageByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (void)getGDTBannerImageAsynchronizedByName:(id)arg1 Url:(id)arg2 WithSuccessBlock:(CDUnknownBlockType)arg3;
- (void)getGDTBannerImageAsynchronizedByName:(id)arg1 Url:(id)arg2 andCallback:(id)arg3;
- (id)getGDTBannerImageByName:(id)arg1 Url:(id)arg2 andCallback:(id)arg3;
- (void)getBannerImageAsynchronizedByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (void)getBannerImageAsynchronizedByName:(id)arg1 Url:(id)arg2 WithSuccessBlock:(CDUnknownBlockType)arg3;
- (id)getBannerImageByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (void)getFocusImageAsynchronizedByName:(id)arg1 Url:(id)arg2 andRetryUrl:(id)arg3 AndCallback:(id)arg4;
- (id)getFocusImageByName:(id)arg1 Url:(id)arg2 andRetryUrl:(id)arg3 AndCallback:(id)arg4;
- (void)getHotImageAsynchronizedByUrl:(id)arg1 WithCallback:(id)arg2 AndObject:(id)arg3 AndRetryUrl:(id)arg4;
- (id)getQQFriendImageByNode:(id)arg1 AndCallback:(id)arg2;
- (id)getClusterImageBy:(id)arg1 AndCallback:(id)arg2;
- (id)getDirectImageBy:(id)arg1 AndCallback:(id)arg2;
- (void)downloadFail:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)queryImageBySong:(id)arg1 imageOption:(unsigned long long)arg2 delegate:(id)arg3 object:(id)arg4 logString:(id)arg5;
- (_Bool)distinctByInfo:(id)arg1;
- (void)DelayToRequestFromServerNext;
- (void)addItem:(id)arg1;
- (id)buildItem:(id)arg1 ImageOption:(unsigned long long)arg2 Callback:(id)arg3 AndObject:(id)arg4 ignoreLocalFile:(_Bool)arg5;
- (id)buildItem:(id)arg1 ImageOption:(unsigned long long)arg2 Callback:(id)arg3 AndObject:(id)arg4;
- (void)dealloc;
- (id)init;

@end

