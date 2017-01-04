//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSMutableArray, SingerListenItem, SingerListenQueryProtocol, SingerListenSyncProtocol;

@interface SingerListenManager : NSObject <ProtocolHostDelegate>
{
    unsigned long long _uin;
    SingerListenItem *_backSingerListenItem;
    NSMutableArray *_currentListenList;
    SingerListenQueryProtocol *_singerListenQueryProtocol;
    SingerListenSyncProtocol *_singerListenSyncProtocol;
}

@property(retain, nonatomic) SingerListenSyncProtocol *singerListenSyncProtocol; // @synthesize singerListenSyncProtocol=_singerListenSyncProtocol;
@property(retain, nonatomic) SingerListenQueryProtocol *singerListenQueryProtocol; // @synthesize singerListenQueryProtocol=_singerListenQueryProtocol;
@property(retain, nonatomic) NSMutableArray *currentListenList; // @synthesize currentListenList=_currentListenList;
@property(retain, nonatomic) SingerListenItem *backSingerListenItem; // @synthesize backSingerListenItem=_backSingerListenItem;
- (void).cxx_destruct;
- (void)onLogouted;
- (void)onLogSuccess;
- (void)processSingerListenCommand:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (_Bool)isCreatorFollowed:(id)arg1;
- (_Bool)isSingerListened:(id)arg1;
- (void)deleteListenSinger:(id)arg1 andNextCall:(id)arg2 selector:(SEL)arg3 param:(id)arg4;
- (void)addNewListenSinger:(id)arg1 andNextCall:(id)arg2 selector:(SEL)arg3 param:(id)arg4 refreshTaoge:(_Bool)arg5;
- (void)addNewListenSinger:(id)arg1 andNextCall:(id)arg2 selector:(SEL)arg3 param:(id)arg4;
- (void)checkSyncAndReloadSingerListenList;
- (void)_doneWithSyncSuccess;
- (void)_processLocalListDataWithNewListData:(id)arg1;
- (void)_syncSingerListenList:(id)arg1;
- (void)_reloadSingerListenList;
- (_Bool)_tryToSync;
- (id)_getFirstNeedSyncItem;
- (void)_getCurrentListenList;
- (void)_readDataFromFile;
- (void)dealloc;
- (id)initWithUin:(unsigned long long)arg1;

@end
