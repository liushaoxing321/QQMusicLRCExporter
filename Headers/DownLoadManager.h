//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListBase.h"

#import "DownLoadTaskDelegate-Protocol.h"
#import "DownloadHistoryVCDelegate-Protocol.h"
#import "LaucherNumer-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class DownLoadTask, DownloadHistoryProtocol, FolderInfo, LaucherNumer, NSDate, NSMutableDictionary, NSString, VkeyData;

@interface DownLoadManager : ListBase <DownLoadTaskDelegate, ProtocolHostDelegate, LaucherNumer, DownloadHistoryVCDelegate>
{
    NSMutableDictionary *listDownLoadTasks;
    DownLoadTask *current;
    float lastPercent;
    ListBase *downloadedList;
    ListBase *downloadingList;
    ListBase *downloadHistoryList;
    FolderInfo *downloadedFolderInfo;
    FolderInfo *downloadingFolderInfo;
    DownloadHistoryProtocol *downloadHistoryProtocol;
    LaucherNumer *laucherNumber;
    unsigned int lastNetworkStatus;
    _Bool _keepDownloadViaCarrier;
    _Bool _hasShownDisableDownlaodViaNetworkAlert;
    _Bool _downloadedNewSong;
    _Bool _bHasUpdatedVkey;
    long long _downloadHistoryCount;
    ListBase *_paidDownloadSongList;
    VkeyData *_vkeyForDownload;
    NSDate *_vkeyUpdateDate;
}

+ (id)existedIndexSetInSongs:(id)arg1;
+ (void)checkHasRightToDownload:(struct ObjectWithExpInfo *)arg1 rate:(int)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)getRateStringBySong:(id)arg1;
+ (id)sharedDownLoadManager;
+ (_Bool)isDownloading;
+ (_Bool)isDownloading:(id)arg1;
+ (_Bool)isDownloadOK:(id)arg1;
+ (_Bool)isNeedToBeDownload:(id)arg1;
@property(retain, nonatomic) NSDate *vkeyUpdateDate; // @synthesize vkeyUpdateDate=_vkeyUpdateDate;
@property(nonatomic) _Bool bHasUpdatedVkey; // @synthesize bHasUpdatedVkey=_bHasUpdatedVkey;
@property _Bool downloadedNewSong; // @synthesize downloadedNewSong=_downloadedNewSong;
@property(nonatomic) _Bool hasShownDisableDownlaodViaNetworkAlert; // @synthesize hasShownDisableDownlaodViaNetworkAlert=_hasShownDisableDownlaodViaNetworkAlert;
@property(readonly, nonatomic) VkeyData *vkeyForDownload; // @synthesize vkeyForDownload=_vkeyForDownload;
@property(retain, nonatomic) ListBase *paidDownloadSongList; // @synthesize paidDownloadSongList=_paidDownloadSongList;
@property long long downloadHistoryCount; // @synthesize downloadHistoryCount=_downloadHistoryCount;
@property(readonly, nonatomic) _Bool keepDownloadViaCarrier; // @synthesize keepDownloadViaCarrier=_keepDownloadViaCarrier;
@property(readonly, nonatomic) LaucherNumer *laucherNumber; // @synthesize laucherNumber;
@property(readonly, nonatomic) DownloadHistoryProtocol *downloadHistoryProtocol; // @synthesize downloadHistoryProtocol;
@property(readonly, nonatomic) FolderInfo *downloadingFolderInfo; // @synthesize downloadingFolderInfo;
@property(readonly, nonatomic) FolderInfo *downloadedFolderInfo; // @synthesize downloadedFolderInfo;
@property(retain, nonatomic) ListBase *downloadHistoryList; // @synthesize downloadHistoryList;
@property(readonly, nonatomic) ListBase *downloadingList; // @synthesize downloadingList;
@property(readonly, nonatomic) ListBase *downloadedList; // @synthesize downloadedList;
@property(retain, nonatomic) DownLoadTask *current; // @synthesize current;
- (void).cxx_destruct;
- (void)onVKeyFresh:(id)arg1;
- (void)resetNeedRefreshVkeyStatus;
- (_Bool)updateVkeyIfNeededWithDownLoadFrom:(unsigned int)arg1;
- (void)BatchAddSongsToDownloading:(id)arg1 stat:(id)arg2 VCFrom:(id)arg3 assetType:(int)arg4;
- (void)onBatchAddSongsToDownloading:(id)arg1 stat:(id)arg2;
- (void)reallyAddToDownloaded:(id)arg1 assertType:(int)arg2 filePath:(id)arg3;
- (id)downLoadTaskForSongWithExpInfo:(id)arg1;
- (id)removeSameAndDownloadedSongs:(id)arg1;
- (_Bool)allSongsDownloadOkInDownloadHistoryInfos:(id)arg1;
- (_Bool)deleteDownLoadedSongsForSongFoler:(id)arg1 updateUIBlock:(CDUnknownBlockType)arg2;
- (void)batchDeleteSongs:(id)arg1 updateAll:(_Bool)arg2 tag:(int)arg3 currentVC:(id)arg4 upDateUIBlock:(CDUnknownBlockType)arg5;
- (void)updateDownloadedFolderCountTag:(int)arg1;
- (void)batchDeleteDiskFile:(id)arg1;
- (void)showCommentInviteAlert:(id)arg1 statFrom:(id)arg2;
- (void)queryDownloadHistoryCount;
- (_Bool)isDownloadedAndDownloadingEmpty;
- (long long)laucherNumberNextUpdateTime;
- (void)laucherNumerSaveLastTime:(long long)arg1;
- (long long)laucherNumerLastTime;
- (_Bool)laucherNumerIsDataLoadFinish;
- (void)_makeClearTimeoutReason:(id)arg1;
- (_Bool)allInterruptNeedAutoStart;
- (_Bool)allNeedManualStart;
- (void)showDisableDownloadViaCarrierAlertBeforeAdded:(CDUnknownBlockType)arg1;
- (void)showDisableDownloadViaCarrierAlertWithCancelActionBlock:(CDUnknownBlockType)arg1 leftActionBlock:(CDUnknownBlockType)arg2 rightActionBlock:(CDUnknownBlockType)arg3;
- (int)clickStatusOfAlertBeforeAddedForWangsuRoamByButtonIndex:(int)arg1;
- (int)clickStatusOfAlertBeforeAddedByButtonIndex:(int)arg1;
- (void)showDisableDownloadViaCarrierAlert:(CDUnknownBlockType)arg1;
- (_Bool)needShowDisableDownloadViaCarrierAlert;
- (void)onDownloadNetworkSettingChanged;
- (void)disableKeepDownloadViaCarrier;
- (void)enableKeepDownloadViaCarrier;
- (id)filterSongs:(id)arg1 assetsType:(int)arg2;
- (id)getAllDownloadSongs:(id)arg1 assetsType:(int)arg2;
- (unsigned int)_guessDownloaded48KAacSizeOfSong:(id)arg1;
- (unsigned int)_guessDownloadedSizeOfSong:(id)arg1 highQuality:(_Bool)arg2;
- (void)addStat;
- (void)updateDownloadFolderCount;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)insertNewDownloaded:(id)arg1;
- (void)handlePaidDownloadSongsProtocol:(id)arg1 protocolError:(id)arg2;
- (void)getPaidDownloadHistoryListDataFromSerial:(unsigned long long)arg1 queryCount:(unsigned long long)arg2;
- (void)getDownloadHistoryListDataFromSerial:(unsigned long long)arg1 toSerial:(unsigned long long)arg2 lastReceivedSongID:(unsigned long long)arg3 addTime:(unsigned long long)arg4;
- (void)downloadOK:(id)arg1;
- (void)download:(id)arg1 willUseAddress:(id)arg2 urlEncoded:(_Bool)arg3;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)download:(id)arg1 onForbiddenDownload:(long long)arg2 msg:(id)arg3 forSong:(id)arg4;
- (_Bool)isSongDownloadedBefore:(id)arg1;
- (_Bool)checkIsDownload:(id)arg1;
- (void)processNext;
- (void)processNextWhenNetworkAvailable;
- (_Bool)canDownloadCurrent:(id)arg1;
- (_Bool)canStartWithPayContentCheck:(id)arg1;
- (_Bool)canDownloadViaCurrentNetwork;
- (void)clearAllSongs;
- (long long)getDownloadedHighQualityCounts;
- (void)deleteDownloadTask:(id)arg1;
- (void)batchDeleteDownloadtask:(id)arg1;
- (void)InterruptWaitingTask;
- (void)pauseAllTask;
- (_Bool)pauseOrResumeDownloadTask:(id)arg1;
- (void)startAll;
- (_Bool)isDownloading:(id)arg1;
- (void)_checkAddResult:(id)arg1;
- (void)innerbackgroundBatchAddToDownload:(id)arg1 quality:(int)arg2 stat:(id)arg3 block:(CDUnknownBlockType)arg4 showNetAlert:(_Bool)arg5;
- (void)backgroundBatchAddToDownload:(id)arg1 quality:(int)arg2 stat:(id)arg3 block:(CDUnknownBlockType)arg4 showNetAlert:(_Bool)arg5;
- (void)_backgroundBatchAddToDownload:(id)arg1 quality:(int)arg2 stat:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)batchAddToDownload:(id)arg1 quality:(int)arg2 stat:(id)arg3 stopedCurrent:(_Bool)arg4;
- (void)_reverseOrder:(id *)arg1;
- (void)_restoreDataFromDownloadingResult:(id)arg1;
- (void)_saveDataToDownloadingResult:(id)arg1;
- (void)addToDownload:(id)arg1 quality:(int)arg2 stat:(id)arg3;
- (void)addTodownloadBySongId:(unsigned long long)arg1;
- (id)_joinDownloadingTask:(id)arg1 newTaskInfos:(id)arg2 insertBelowFirstOne:(_Bool)arg3;
- (void)_fixAddToDownloadExpInfoCount:(id)arg1 songsCount:(unsigned long long)arg2 quality:(int)arg3;
- (void)_statAddToDownload:(id)arg1 stat:(id)arg2;
- (void)transferAutoSaveToDownloadBySongId:(unsigned long long)arg1 songType:(int)arg2;
- (void)transferAutoSaveToDownloadBySongId:(unsigned long long)arg1;
- (unsigned int)_getMaxAddTimeFromList:(id)arg1;
- (unsigned int)_getMaxAddTime:(_Bool)arg1;
- (unsigned int)nextUpdateTime;
- (unsigned int)nextAddTimeToDownloaded;
- (unsigned int)nextAddTimeToDownloading;
- (void)decryptExclusiveSong:(id)arg1;
- (void)writeDownloadSongAttributeAndReport:(id)arg1 stat:(id)arg2 addResult:(id)arg3;
- (id)getDownloadList:(id)arg1 quality:(int)arg2 statFrom:(id)arg3 addResult:(id)arg4;
- (void)downloadSucc:(id)arg1 File:(id)arg2 downloaded:(id)arg3;
- (void)upDateDownloadedSongRate:(id)arg1;
- (void)_notifyUIAfterDownloadSuccess:(id)arg1;
- (void)addToDownloaded:(id)arg1 File:(id)arg2;
- (void)processDownloadingData;
- (id)getTask:(id)arg1;
- (void)reloadDownloadedDbData;
- (void)reloadDBData;
- (void)dealloc;
- (void)netChange;
- (void)reachabilityChanged:(id)arg1;
- (void)_autoDownloadAllAfterStartup;
- (void)onNofityLogout:(id)arg1;
- (void)autoRefreshDownloadingSongExt;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

