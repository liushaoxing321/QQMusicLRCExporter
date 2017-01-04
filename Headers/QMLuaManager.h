//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DownLoadTaskDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WaxLuaPatch;

@interface QMLuaManager : NSObject <DownLoadTaskDelegate, ProtocolHostDelegate>
{
    WaxLuaPatch *_patchObj;
    NSMutableArray *_downloadList;
    NSMutableArray *_downloadTaskList;
    NSMutableDictionary *_downloadingLuaDic;
}

+ (_Bool)isLuaScriptFileValid:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *downloadingLuaDic; // @synthesize downloadingLuaDic=_downloadingLuaDic;
@property(retain, nonatomic) NSMutableArray *downloadTaskList; // @synthesize downloadTaskList=_downloadTaskList;
@property(retain, nonatomic) NSMutableArray *downloadList; // @synthesize downloadList=_downloadList;
@property(retain, nonatomic) WaxLuaPatch *patchObj; // @synthesize patchObj=_patchObj;
- (void).cxx_destruct;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)clearCrashWatchDog;
- (_Bool)isCrashWatchDogDeadForLuaFile:(id)arg1;
- (void)removeCrashWatchDogForLuaFile:(id)arg1;
- (void)addCrashWatchDogForLuaFile:(id)arg1;
- (void)writeAppVersionToFile:(id)arg1;
- (void)deleteAllLuaScriptWhenUpgrateApp;
- (void)unzipFile:(id)arg1 toFilePath:(id)arg2 overWrite:(_Bool)arg3;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)saveScriptFileVarifyInfo;
- (void)startDownload:(id)arg1;
- (void)startDownloadIfNeed;
- (void)addQMLuaScriptObjectToDownloadList:(id)arg1;
- (void)updateLuaScriptList;
- (void)runLuaFile:(id)arg1;
- (void)runLuaFileWithFileName:(id)arg1;
- (void)runScript;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

