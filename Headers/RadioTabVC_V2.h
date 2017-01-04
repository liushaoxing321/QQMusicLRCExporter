//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelBaseTabVC.h"

@class ChannelItem, NSDateFormatter, NSMutableArray, NSTimer, SongListItem, UITableView;

@interface RadioTabVC_V2 : ChannelBaseTabVC
{
    _Bool _firstLoadCats;
    _Bool _dataDirty;
    _Bool _onlyRefreshStatus;
    _Bool _isPlayingRadioTab;
    SongListItem *_playingRadioItem;
    ChannelItem *_curLoadingRadioItem;
    long long _selectedCategoryId;
    unsigned long long _recentGroupIndex;
    UITableView *_radioIndexTableView;
    UITableView *_detailTableView;
    NSMutableArray *_itemGroups;
    NSMutableArray *_groupDetailOffset;
    NSDateFormatter *_HHFormat;
    long long _nowSceneType;
    NSTimer *_refreshTimer;
    struct CGRect _radioIndexFrame;
}

@property(nonatomic) _Bool isPlayingRadioTab; // @synthesize isPlayingRadioTab=_isPlayingRadioTab;
@property(nonatomic) _Bool onlyRefreshStatus; // @synthesize onlyRefreshStatus=_onlyRefreshStatus;
@property(nonatomic) _Bool dataDirty; // @synthesize dataDirty=_dataDirty;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) long long nowSceneType; // @synthesize nowSceneType=_nowSceneType;
@property(retain, nonatomic) NSDateFormatter *HHFormat; // @synthesize HHFormat=_HHFormat;
@property(nonatomic) _Bool firstLoadCats; // @synthesize firstLoadCats=_firstLoadCats;
@property(retain, nonatomic) NSMutableArray *groupDetailOffset; // @synthesize groupDetailOffset=_groupDetailOffset;
@property(retain, nonatomic) NSMutableArray *itemGroups; // @synthesize itemGroups=_itemGroups;
@property(nonatomic) struct CGRect radioIndexFrame; // @synthesize radioIndexFrame=_radioIndexFrame;
@property(retain, nonatomic) UITableView *detailTableView; // @synthesize detailTableView=_detailTableView;
@property(retain, nonatomic) UITableView *radioIndexTableView; // @synthesize radioIndexTableView=_radioIndexTableView;
@property(nonatomic) unsigned long long recentGroupIndex; // @synthesize recentGroupIndex=_recentGroupIndex;
@property(nonatomic) long long selectedCategoryId; // @synthesize selectedCategoryId=_selectedCategoryId;
@property(retain, nonatomic) ChannelItem *curLoadingRadioItem; // @synthesize curLoadingRadioItem=_curLoadingRadioItem;
@property(retain, nonatomic) SongListItem *playingRadioItem; // @synthesize playingRadioItem=_playingRadioItem;
- (void).cxx_destruct;
- (void)autoScollToGroupItemIndex:(int)arg1 categoryId:(int)arg2 isDetailView:(_Bool)arg3;
- (void)reloadCellData:(id)arg1 onlyRefreshStatus:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createSeperateCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleFetchRadioListStatus:(long long)arg1 radioProtocol:(id)arg2 protocolError:(id)arg3;
- (_Bool)addRadioToRecentGroup:(id)arg1;
- (void)playRadio:(id)arg1 inCategoryId:(int)arg2;
- (void)requestToShowChannel:(id)arg1 inCategoryId:(int)arg2;
- (void)onChannelItemClicked:(id)arg1;
- (void)centerTheLeftPosition:(int)arg1;
- (int)getCategoryIndexIngroups:(id)arg1 withContentOffset:(struct CGPoint)arg2;
- (id)createFrom:(id)arg1;
- (id)getCurPlayingRadioItem;
- (id)getCurPlayingList;
- (void)_nofityAddRecentRadio:(id)arg1;
- (void)_nofityRadioChanged:(id)arg1;
- (void)_loginSuccess;
- (void)onNotifyUserLanguageChanged:(id)arg1;
- (void)_channelListDidUpdate:(id)arg1;
- (void)reFreshWithNetworkDetection;
- (void)calcDetailGroupOffset;
- (void)radioCategoriesDataDidUpdate:(id)arg1;
- (id)makeRecentGroupItem;
- (long long)defaultSelectedCategoryId:(id)arg1;
- (void)onColorStyleChanged;
- (void)serverChanged;
- (void)reFreshRadioIndex;
- (id)emptyViewText;
- (id)emptyViewBgText;
- (id)emptyViewBgImage;
- (void)showEmptyView;
- (int)vcType;
- (void)willResignCurrentTab;
- (void)willActiveCurrentTab;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onNotifyPlayingSongChange:(id)arg1;
- (void)initCoverFlow;
- (void)initIndexView;
- (void)loadView;
- (long long)getNowSceneType;
- (void)dealloc;
- (id)init;

@end

