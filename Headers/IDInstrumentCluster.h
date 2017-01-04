//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDHmiActionDelegate-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDHmiAction, IDListModel, IDModel, IDView, NSString;
@protocol IDInstrumentClusterDataSource, IDInstrumentClusterDelegate;

@interface IDInstrumentCluster : NSObject <IDHmiActionDelegate, IDHmiServiceLifecycleProtocol>
{
    id <IDInstrumentClusterDataSource> _dataSource;
    id <IDInstrumentClusterDelegate> _delegate;
    unsigned long long _mode;
    IDView *_playlistTargetView;
    IDModel *_playlistModel;
    IDModel *_modeSwitchModel;
    IDListModel *_listModel;
    IDHmiAction *_playlistSelectAction;
    IDHmiAction *_dataRequestAction;
}

+ (id)new;
@property(retain, nonatomic) IDHmiAction *dataRequestAction; // @synthesize dataRequestAction=_dataRequestAction;
@property(retain, nonatomic) IDHmiAction *playlistSelectAction; // @synthesize playlistSelectAction=_playlistSelectAction;
@property(readonly, nonatomic) IDListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) IDModel *modeSwitchModel; // @synthesize modeSwitchModel=_modeSwitchModel;
@property(retain, nonatomic) IDModel *playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) __weak IDView *playlistTargetView; // @synthesize playlistTargetView=_playlistTargetView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property __weak id <IDInstrumentClusterDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDInstrumentClusterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)preparePlaylist;
- (void)clearPlaylist;
- (void)flushPlaylistItemsInRange:(struct _NSRange)arg1;
- (void)handleDataRequestAction:(id)arg1;
- (void)handlePlaylistSelectAction:(id)arg1;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)reloadPlaylist;
- (void)reloadPlaylistItemAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithPlaylistModel:(id)arg1 modeSwitchModel:(id)arg2 playlistSelectAction:(id)arg3 dataRequestAction:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

