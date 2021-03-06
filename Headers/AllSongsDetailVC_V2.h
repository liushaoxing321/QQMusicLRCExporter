//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "DownLoadEditProtocol-Protocol.h"
#import "QMRecommendViewDelegate-Protocol.h"

@class AllSongsVC_V2, NSIndexPath, NSString, QMRecommendView, UILabel, UIView;
@protocol QMAllSongDetailSearchDelegate;

@interface AllSongsDetailVC_V2 : SkinViewController <DownLoadEditProtocol, QMRecommendViewDelegate>
{
    _Bool _forbidInvokeDisplayRecommendViewAllSongFlag;
    _Bool _forbidInvokeDisplayRecommendViewLocalSongFlag;
    AllSongsVC_V2 *_container;
    NSString *_identiferString;
    unsigned long long _indexOfHiddenCell;
    id <QMAllSongDetailSearchDelegate> _searchDelegate;
    long long _sortDataIndex;
    UIView *_foot;
    UILabel *_footLabel;
    NSIndexPath *_tableCellSelectIndexPath;
    QMRecommendView *_recommendViewAllSong;
    QMRecommendView *_recommendViewLocalSong;
    unsigned long long _lastAllSongCount;
    unsigned long long _currentAllSongCount;
    unsigned long long _lastNativeSongCount;
    unsigned long long _currentNativeSongCount;
    UIView *_tableViewAllSongFootView;
    UIView *_tableViewLocalSongFootView;
    UIView *_searchBarView;
}

@property(nonatomic) _Bool forbidInvokeDisplayRecommendViewLocalSongFlag; // @synthesize forbidInvokeDisplayRecommendViewLocalSongFlag=_forbidInvokeDisplayRecommendViewLocalSongFlag;
@property(nonatomic) _Bool forbidInvokeDisplayRecommendViewAllSongFlag; // @synthesize forbidInvokeDisplayRecommendViewAllSongFlag=_forbidInvokeDisplayRecommendViewAllSongFlag;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) UIView *tableViewLocalSongFootView; // @synthesize tableViewLocalSongFootView=_tableViewLocalSongFootView;
@property(retain, nonatomic) UIView *tableViewAllSongFootView; // @synthesize tableViewAllSongFootView=_tableViewAllSongFootView;
@property(nonatomic) unsigned long long currentNativeSongCount; // @synthesize currentNativeSongCount=_currentNativeSongCount;
@property(nonatomic) unsigned long long lastNativeSongCount; // @synthesize lastNativeSongCount=_lastNativeSongCount;
@property(nonatomic) unsigned long long currentAllSongCount; // @synthesize currentAllSongCount=_currentAllSongCount;
@property(nonatomic) unsigned long long lastAllSongCount; // @synthesize lastAllSongCount=_lastAllSongCount;
@property(retain, nonatomic) QMRecommendView *recommendViewLocalSong; // @synthesize recommendViewLocalSong=_recommendViewLocalSong;
@property(retain, nonatomic) QMRecommendView *recommendViewAllSong; // @synthesize recommendViewAllSong=_recommendViewAllSong;
@property(nonatomic) __weak NSIndexPath *tableCellSelectIndexPath; // @synthesize tableCellSelectIndexPath=_tableCellSelectIndexPath;
@property(retain, nonatomic) UILabel *footLabel; // @synthesize footLabel=_footLabel;
@property(retain, nonatomic) UIView *foot; // @synthesize foot=_foot;
@property(nonatomic) long long sortDataIndex; // @synthesize sortDataIndex=_sortDataIndex;
@property(nonatomic) __weak id <QMAllSongDetailSearchDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(nonatomic) unsigned long long indexOfHiddenCell; // @synthesize indexOfHiddenCell=_indexOfHiddenCell;
@property(retain, nonatomic) NSString *identiferString; // @synthesize identiferString=_identiferString;
@property(nonatomic) __weak AllSongsVC_V2 *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (struct CGPoint)anchorButtonPosition:(struct CGSize)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onIndexTouchupInside:(struct CGPoint)arg1;
- (void)onIndexChanged:(id)arg1;
- (void)onNotifyQPlayModeChanged:(id)arg1;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(unsigned long long)arg4;
- (void)searchBarTouchDown:(id)arg1;
- (void)updateSearchBarPlaceHolder;
- (id)getPlaceHolderOfSearchBar;
- (id)createSearchBarView;
- (void)onColorStyleChanged;
- (void)displayQMRecommendViewLocalSong;
- (void)displayQMRecommendViewAllSong;
- (void)onNotifyUpdateAllFinish:(id)arg1;
- (void)onNotifyReloadUIForAllSongsView:(id)arg1;
- (void)onSongsEdit:(id)arg1;
- (void)downloadEditViewControllerClickHeaderFinish:(id)arg1;
- (void)reloadTableView;
- (void)onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)_onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)delObject:(id)arg1;
- (void)handleCellLongPress:(id)arg1;
- (void)handleBatchAction:(long long)arg1;
- (void)addTableViewHeaderView;
- (void)willResignCurrentTab;
- (void)willActiveCurrentTab;
- (void)setViewFrame:(struct CGRect)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateUI;
- (_Bool)isNeedAddBottomLine;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showLoadingView;
- (id)loadingViewText;
- (id)emptyViewText;
- (void)randomButtonClicked:(id)arg1;
- (void)changePlayModel;
- (id)getAllVCType;
- (int)vcType;
- (int)contextHight;
- (double)customIndexViewY;
- (void)recommendViewWillHide:(id)arg1;
- (void)recommendViewWillShow:(id)arg1;
- (void)popRecommendView;
- (void)changePlayModelPopRecommendView;
- (void)viewDidLoad;
- (void)viewDidPop;
- (void)reFresh;
- (id)songsTableView;
- (void)newTable;
- (_Bool)isNeedSearchBar;
- (void)resetSongTableFrame;
- (void)reLayout:(long long)arg1;
- (struct CGRect)reFrame;
- (void)loadView;
- (_Bool)useBgImage;
- (_Bool)isNeedSongTableView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

