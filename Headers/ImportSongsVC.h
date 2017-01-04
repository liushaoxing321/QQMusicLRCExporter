//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "DownLoadEditProtocol-Protocol.h"
#import "IndexViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class ClusterInfo, ListBase, NSIndexPath, NSString;
@protocol ImportSongsVCDelegate;

@interface ImportSongsVC : SkinViewController <UITableViewDataSource, IndexViewDelegate, UIScrollViewDelegate, DownLoadEditProtocol>
{
    int songsListTag;
    id <ImportSongsVCDelegate> deletgate;
    _Bool bLoadIpodSong;
    ClusterInfo *clusterInfo;
    NSIndexPath *tableCellSelectIndexPath;
    ListBase *allImportListBase;
}

@property(retain) ClusterInfo *clusterInfo; // @synthesize clusterInfo;
@property(nonatomic) __weak id <ImportSongsVCDelegate> deletgate; // @synthesize deletgate;
@property(nonatomic) int songsListTag; // @synthesize songsListTag;
@property(nonatomic) _Bool bLoadIpodSong; // @synthesize bLoadIpodSong;
- (void).cxx_destruct;
- (void)onNotifyQPlayModeChanged:(id)arg1;
- (void)onColorStyleChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onIndexTouchupInside:(struct CGPoint)arg1;
- (void)onIndexChanged:(id)arg1;
- (void)delayToReturn;
- (void)cancelAllRequest;
- (void)onNotifyUpdateAllFinish:(id)arg1;
- (void)onNotifyLoadIpodSongsFinish:(id)arg1;
- (void)onNotifyPlayErrorOnLocalFiles:(id)arg1;
- (void)delObject:(id)arg1;
- (void)onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)onSongsEdit:(id)arg1;
- (void)downloadEditViewControllerClickHeaderFinish:(id)arg1;
- (void)handleCellLongPress:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)emptyViewText;
- (id)loadingViewText;
- (_Bool)showDelBtnInActionSheet:(id)arg1;
- (int)vcType;
- (void)reFresh;
- (void)removeRandomButtonInHeader:(id)arg1;
- (void)addRandomButtonInHeader:(id)arg1;
- (void)handleBatchAction:(long long)arg1;
- (void)randomButtonClicked:(id)arg1;
- (id)keyForStatusClick:(_Bool)arg1 tag:(int)arg2;
- (id)list;
- (void)sortAllSongs:(id)arg1;
- (void)updateDataSource;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidPop;
- (void)reLayout:(long long)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
