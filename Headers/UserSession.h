//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CloudFolder, CloudFolderEdit, CloudFolderHistory, CloudFolderStat, CloudProtocolsManager, DownloadHistoryUploader, FolderIcoUploaderManager, KSongNewInfo, LoginOutControl, PersistentConnection, QQUser, ReqSongRecord, SingerListenManager, SongInfoExtManager, UserSessionTimers;

@interface UserSession : NSObject
{
    _Bool _userSwitched;
    _Bool _didRefreshLogin;
    CloudFolder *_cloudFolder;
    CloudProtocolsManager *_cloudProtocolsManager;
    QQUser *_qqUser;
    LoginOutControl *_loginOutControl;
    PersistentConnection *_persistentConnection;
    UserSessionTimers *_userSessionTimers;
    CloudFolderEdit *_cloudFolderEdit;
    DownloadHistoryUploader *_downloadHistoryUploader;
    CloudFolderStat *_cloudFolderStat;
    ReqSongRecord *_reqSongRecord;
    SingerListenManager *_singerListenManager;
    CloudFolderHistory *_cloudFolderHistory;
    unsigned long long _iApprovedCount;
    FolderIcoUploaderManager *_folderIcoUploaderManager;
    KSongNewInfo *_ksongNewInfo;
    long long _uin;
    SongInfoExtManager *_songInfoExtManagerForNormal;
    SongInfoExtManager *_songInfoExtManagerForPersonal;
}

+ (void)loadUserSession;
@property(nonatomic) _Bool didRefreshLogin; // @synthesize didRefreshLogin=_didRefreshLogin;
@property(readonly) SongInfoExtManager *songInfoExtManagerForPersonal; // @synthesize songInfoExtManagerForPersonal=_songInfoExtManagerForPersonal;
@property(readonly) SongInfoExtManager *songInfoExtManagerForNormal; // @synthesize songInfoExtManagerForNormal=_songInfoExtManagerForNormal;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property _Bool userSwitched; // @synthesize userSwitched=_userSwitched;
@property(readonly) KSongNewInfo *ksongNewInfo; // @synthesize ksongNewInfo=_ksongNewInfo;
@property(readonly) FolderIcoUploaderManager *folderIcoUploaderManager; // @synthesize folderIcoUploaderManager=_folderIcoUploaderManager;
@property(readonly) unsigned long long iApprovedCount; // @synthesize iApprovedCount=_iApprovedCount;
@property(readonly) CloudFolderHistory *cloudFolderHistory; // @synthesize cloudFolderHistory=_cloudFolderHistory;
@property(readonly) SingerListenManager *singerListenManager; // @synthesize singerListenManager=_singerListenManager;
@property(readonly) ReqSongRecord *reqSongRecord; // @synthesize reqSongRecord=_reqSongRecord;
@property(readonly) CloudFolderStat *cloudFolderStat; // @synthesize cloudFolderStat=_cloudFolderStat;
@property(readonly) DownloadHistoryUploader *downloadHistoryUploader; // @synthesize downloadHistoryUploader=_downloadHistoryUploader;
@property(readonly) CloudFolderEdit *cloudFolderEdit; // @synthesize cloudFolderEdit=_cloudFolderEdit;
@property(readonly) UserSessionTimers *userSessionTimers; // @synthesize userSessionTimers=_userSessionTimers;
@property(readonly) PersistentConnection *persistentConnection; // @synthesize persistentConnection=_persistentConnection;
@property(readonly) LoginOutControl *loginOutControl; // @synthesize loginOutControl=_loginOutControl;
@property(readonly) QQUser *qqUser; // @synthesize qqUser=_qqUser;
@property(readonly) CloudProtocolsManager *cloudProtocolsManager; // @synthesize cloudProtocolsManager=_cloudProtocolsManager;
@property(readonly) CloudFolder *cloudFolder; // @synthesize cloudFolder=_cloudFolder;
- (void).cxx_destruct;
- (void)upDateSaveVkey:(id)arg1 needToUser:(_Bool)arg2;
- (void)updateSongInfoExtForPersonalAssets;
- (void)saveSongInfoExtToDisk;
- (void)updateAllSongControlBitFromServer;
- (void)updateSongInfoExt:(struct SongInfoExt *)arg1 forSongInfo:(id)arg2;
- (void)updateSongInfoExtForSongs:(id)arg1 assetsType:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)updateSongInfoExtForSongs:(id)arg1 isPaidSong:(_Bool)arg2;
- (void)updateSongInfoExtForrefreshUser;
- (void)updateSongInfoExtOnVipLevel:(int)arg1 userSwitched:(_Bool)arg2;
- (void)updateSongInfoExtByWillLogout;
- (void)initAllSongInfoExtManager;
- (id)getSongInfoExtManagerByAssetsType:(int)arg1;
- (void)handlePersisitCommandPaiedSingleSong:(id)arg1;
- (void)handlePersisitCommandPaiedAlbum:(id)arg1;
- (id)getQQSongInfoFromIdObject:(id)arg1;
- (void)handlePersisitCommandRefreshUser;
- (void)delayHandlePersisitCommandRefreshUser;
- (void)handlePersisitCommandForMe:(id)arg1;
- (void)handlePersisitCommandZaned:(id)arg1;
- (void)setApprovedCount:(unsigned long long)arg1;
- (void)onSyncFolderAddFinish:(id)arg1 serverFolder:(id)arg2;
- (void)onActive;
- (void)onLogouted;
- (void)onWillLogout;
- (void)onLoginSuccess;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)initWithUin:(unsigned long long)arg1;

@end

