//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QMImportSongDisconnectClientDelegate-Protocol.h"
#import "QMImportSongVerifyConnectionDelegate-Protocol.h"
#import "QMImportSongsHttpServerDelegate-Protocol.h"

@class ImportSongInfo, ImportSongList, NSMutableArray, NSString, QMImportSongDisconnectClient, QMImportSongVerifyConnection, QMImportSongsHttpServer;

@interface QMImportSongsManager : NSObject <QMImportSongVerifyConnectionDelegate, QMImportSongsHttpServerDelegate, QMImportSongDisconnectClientDelegate>
{
    _Bool _bClosedByUser;
    long long lastNetworkStatus;
    QMImportSongVerifyConnection *_connection;
    QMImportSongDisconnectClient *_disconnection;
    QMImportSongsHttpServer *_importServer;
    unsigned long long _serverState;
    ImportSongInfo *_curUploadSong;
    ImportSongList *_curUploadSongList;
    NSMutableArray *_songsInSession;
    NSString *_pcIpAddr;
    long long _pcPort;
    NSString *_importToken;
    NSString *_lastServerIp;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *lastServerIp; // @synthesize lastServerIp=_lastServerIp;
@property(nonatomic) _Bool bClosedByUser; // @synthesize bClosedByUser=_bClosedByUser;
@property(retain, nonatomic) NSString *importToken; // @synthesize importToken=_importToken;
@property(nonatomic) long long pcPort; // @synthesize pcPort=_pcPort;
@property(retain, nonatomic) NSString *pcIpAddr; // @synthesize pcIpAddr=_pcIpAddr;
@property(retain, nonatomic) NSMutableArray *songsInSession; // @synthesize songsInSession=_songsInSession;
@property(retain, nonatomic) ImportSongList *curUploadSongList; // @synthesize curUploadSongList=_curUploadSongList;
@property(nonatomic) ImportSongInfo *curUploadSong; // @synthesize curUploadSong=_curUploadSong;
@property(nonatomic) unsigned long long serverState; // @synthesize serverState=_serverState;
@property(retain, nonatomic) QMImportSongsHttpServer *importServer; // @synthesize importServer=_importServer;
@property(retain, nonatomic) QMImportSongDisconnectClient *disconnection; // @synthesize disconnection=_disconnection;
@property(retain, nonatomic) QMImportSongVerifyConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) long long lastNetworkStatus; // @synthesize lastNetworkStatus;
- (void).cxx_destruct;
- (void)didHttpServerClosed;
- (void)didClientFinished;
- (void)didClientClosedAwkward;
- (void)didClientCanceled;
- (void)didPrepareUploadImportSong:(id)arg1;
- (void)didFailedUploadImportSong:(id)arg1;
- (void)didFinishedUploadImportSong:(id)arg1;
- (void)didFailedUploadImportSongList;
- (void)didFinishedUploadImportSongList:(id)arg1;
- (void)didDisconnectedClientFail;
- (void)didDisconnectedClient;
- (void)didVerifyConnectionFailed;
- (void)didVerifyConnectionOK;
- (void)sortAllSongs:(id)arg1;
- (void)addWiFiImportSong:(id)arg1;
- (void)showAlertViewInMainThread;
- (void)showExceptionAlertView;
- (void)disconnectForException;
- (void)highLightScreenWithState:(unsigned long long)arg1;
- (double)processpercent;
- (long long)allUploadSongsInSession;
- (long long)totalUploadedSongs;
- (long long)totalWaitingForUploadSongs;
- (id)currentUploadingSongTitle;
- (_Bool)isImportServerRunning;
- (void)closeImportServer;
- (void)startImportServer;
- (unsigned long long)importServerState;
- (void)addUploadSong:(id)arg1;
- (void)clearCurrentClient;
- (void)disconnectToPCClient;
- (void)startVerifyConnectionWithHostIp:(id)arg1 Port:(long long)arg2;
- (void)netChange;
- (void)reachabilityChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

