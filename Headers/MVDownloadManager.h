//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListBase.h"

#import "DownLoadTaskDelegate-Protocol.h"
#import "LaucherNumer-Protocol.h"
#import "TVKMediaUrlRequestDelegate-Protocol.h"

@class DownLoadTask, FolderInfo, LaucherNumer, NSMutableDictionary, NSString, TVKMediaUrlRequest;

@interface MVDownloadManager : ListBase <TVKMediaUrlRequestDelegate, LaucherNumer, DownLoadTaskDelegate>
{
    NSMutableDictionary *listDownLoadTasks;
    DownLoadTask *current;
    float lastPercent;
    ListBase *downloadedList;
    ListBase *downloadingList;
    FolderInfo *downloadedFolderInfo;
    FolderInfo *downloadingFolderInfo;
    LaucherNumer *laucherNumber;
    unsigned int lastNetworkStatus;
    _Bool _keepDownloadViaCarrier;
    _Bool _hasShownDisableDownlaodViaNetworkAlert;
    TVKMediaUrlRequest *_mediaAddress;
    CDUnknownBlockType _block;
    DownLoadTask *_blockTask;
}

+ (id)existedIndexSetInSongs:(id)arg1;
+ (_Bool)isDownloading;
+ (_Bool)isDownloading:(id)arg1;
+ (_Bool)isDownloadOK:(id)arg1;
+ (id)sharedDownLoadManager;
@property(retain, nonatomic) DownLoadTask *blockTask; // @synthesize blockTask=_blockTask;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) TVKMediaUrlRequest *mediaAddress; // @synthesize mediaAddress=_mediaAddress;
@property(nonatomic) _Bool hasShownDisableDownlaodViaNetworkAlert; // @synthesize hasShownDisableDownlaodViaNetworkAlert=_hasShownDisableDownlaodViaNetworkAlert;
@property(readonly, nonatomic) _Bool keepDownloadViaCarrier; // @synthesize keepDownloadViaCarrier=_keepDownloadViaCarrier;
@property(readonly, nonatomic) LaucherNumer *laucherNumber; // @synthesize laucherNumber;
@property(readonly, nonatomic) FolderInfo *downloadingFolderInfo; // @synthesize downloadingFolderInfo;
@property(readonly, nonatomic) FolderInfo *downloadedFolderInfo; // @synthesize downloadedFolderInfo;
@property(readonly, nonatomic) ListBase *downloadingList; // @synthesize downloadingList;
@property(readonly, nonatomic) ListBase *downloadedList; // @synthesize downloadedList;
@property(retain, nonatomic) DownLoadTask *current; // @synthesize current;
- (void).cxx_destruct;
- (long long)laucherNumberNextUpdateTime;
- (void)laucherNumerSaveLastTime:(long long)arg1;
- (long long)laucherNumerLastTime;
- (_Bool)laucherNumerIsDataLoadFinish;
- (void)_notifyUIAfterDownloadSuccess;
- (id)filterSongs:(id)arg1;
- (unsigned int)_guessDownloadedSizeOfSong:(id)arg1 highQuality:(_Bool)arg2;
- (void)addStat;
- (void)downloadOK:(id)arg1;
- (void)download:(id)arg1 willUseAddress:(id)arg2 urlEncoded:(_Bool)arg3;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)didMediaUrlRequestFailed:(id)arg1 error:(id)arg2;
- (void)didMediaUrlRequestUpdated:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3;
- (void)didMediaUrlRequestFinished:(id)arg1 videoUrls:(id)arg2 viedoDurations:(id)arg3;
- (void)download:(id)arg1 needMVDownloadURLWithfinishBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkIsDownload:(id)arg1;
- (void)downloadSucc:(id)arg1 expInfo:(id)arg2 File:(id)arg3 downloaded:(id)arg4;
- (void)processNext;
- (long long)getDownloadedHighQualityCounts;
- (void)InterruptWaitingTask;
- (_Bool)isDownloading:(id)arg1;
- (void)_checkAddResult:(id)arg1;
- (void)_restoreDataFromDownloadingResult:(id)arg1;
- (void)_saveDataToDownloadingResult:(id)arg1;
- (id)_joinDownloadingTask:(id)arg1 newTaskInfos:(id)arg2 insertBelowFirstOne:(_Bool)arg3;
- (void)_fixAddToDownloadExpInfoCount:(id)arg1 songsCount:(unsigned long long)arg2;
- (void)_statAddToDownload:(id)arg1 stat:(id)arg2;
- (unsigned int)_getMaxAddTimeFromList:(id)arg1;
- (unsigned int)_getMaxAddTime:(_Bool)arg1;
- (unsigned int)nextAddTimeToDownloaded;
- (unsigned int)nextAddTimeToDownloading;
- (id)getDownloadList:(id)arg1 statFrom:(id)arg2 addResult:(id)arg3 addTime:(unsigned int)arg4;
- (void)downloadSucc:(id)arg1 File:(id)arg2 downloaded:(id)arg3;
- (void)processDownloadingData;
- (void)netChange;
- (void)reachabilityChanged:(id)arg1;
- (void)_autoDownloadAllAfterStartup;
- (unsigned int)nextUpdateTime;
- (_Bool)allInterruptNeedAutoStart;
- (_Bool)allNeedManualStart;
- (void)showDisableDownloadViaCarrierAlert:(CDUnknownBlockType)arg1;
- (_Bool)needShowDisableDownloadViaCarrierAlert;
- (_Bool)canDownloadViaCurrentNetwork;
- (void)onDownloadNetworkSettingChanged;
- (void)disableKeepDownloadViaCarrier;
- (void)enableKeepDownloadViaCarrier;
- (void)updateDownloadFolderCount;
- (id)getTask:(id)arg1;
- (void)startAll;
- (void)clearAllMVs;
- (void)reloadDownloadedDbData;
- (void)pauseAllTask;
- (void)deleteDownloadTask:(id)arg1;
- (void)batchDeleteDownloadtask:(id)arg1;
- (_Bool)pauseOrResumeDownloadTask:(id)arg1;
- (id)batchAddToDownload:(id)arg1 stat:(id)arg2 stopedCurrent:(_Bool)arg3;
- (void)addToDownload:(id)arg1 expInfo:(id)arg2 stat:(id)arg3;
- (void)addToDownloaded:(id)arg1 File:(id)arg2;
- (void)addToDownload:(id)arg1 stat:(id)arg2;
- (void)reloadDBData;
- (void)dealloc;
- (void)postUpdateMVItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

