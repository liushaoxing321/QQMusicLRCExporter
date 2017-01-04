//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate-Protocol.h"
#import "MultiColumnTableViewDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CPDAdItem, CategoricalSongFolderListItem, FMShowItem, KSongItem, NSMutableArray, NSString, QMSingerNewsItem, SongDetailItem, SongInfo, SongListItem, UIImageView, UIView, VideoItem;
@protocol RecommendPlayingDelegate;

@interface RecommendPlayingFolderVC : SkinViewController <MultiColumnTableViewDelegate, UITableViewDelegate, UITableViewDataSource, ProtocolHostDelegate, ImageManagerDelegate>
{
    UIView *_noRecommendView;
    UIView *_loadingView;
    int rowCount;
    _Bool _noSingerAndAlbum;
    UIView *_tipView;
    _Bool _isShow;
    _Bool _isQuerySingered;
    int _columnCount;
    SongInfo *_playingSong;
    CategoricalSongFolderListItem *_folderListItem;
    SongListItem *_folderItem;
    UIImageView *_singerImageView;
    UIImageView *_albumImageView;
    id <RecommendPlayingDelegate> _delegate;
    long long _lastClickCellType;
    CPDAdItem *_adItem;
    VideoItem *_videoItem;
    FMShowItem *_fmShowItem;
    SongDetailItem *_songDetailItem;
    QMSingerNewsItem *_singerNewsItem;
    KSongItem *_kSongItem;
    UIView *_tapView;
    NSMutableArray *_mltArraySection1;
    NSMutableArray *_mltArraySection2;
    NSMutableArray *_cellTypeArray;
    struct CGRect _viewFrame;
}

@property(retain, nonatomic) NSMutableArray *cellTypeArray; // @synthesize cellTypeArray=_cellTypeArray;
@property(retain, nonatomic) NSMutableArray *mltArraySection2; // @synthesize mltArraySection2=_mltArraySection2;
@property(retain, nonatomic) NSMutableArray *mltArraySection1; // @synthesize mltArraySection1=_mltArraySection1;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) _Bool isQuerySingered; // @synthesize isQuerySingered=_isQuerySingered;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) KSongItem *kSongItem; // @synthesize kSongItem=_kSongItem;
@property(retain, nonatomic) QMSingerNewsItem *singerNewsItem; // @synthesize singerNewsItem=_singerNewsItem;
@property(retain, nonatomic) SongDetailItem *songDetailItem; // @synthesize songDetailItem=_songDetailItem;
@property(retain, nonatomic) FMShowItem *fmShowItem; // @synthesize fmShowItem=_fmShowItem;
@property(retain, nonatomic) VideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) CPDAdItem *adItem; // @synthesize adItem=_adItem;
@property(nonatomic) long long lastClickCellType; // @synthesize lastClickCellType=_lastClickCellType;
@property(nonatomic) __weak id <RecommendPlayingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(retain, nonatomic) UIImageView *singerImageView; // @synthesize singerImageView=_singerImageView;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) SongListItem *folderItem; // @synthesize folderItem=_folderItem;
@property(retain, nonatomic) CategoricalSongFolderListItem *folderListItem; // @synthesize folderListItem=_folderListItem;
@property(retain, nonatomic) SongInfo *playingSong; // @synthesize playingSong=_playingSong;
- (void).cxx_destruct;
- (void)reLayoutTo:(int)arg1;
- (void)reLayout:(long long)arg1;
- (void)reLayout:(long long)arg1 appWindMode:(int)arg2;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)showRecommendEmptyView;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)recommendVCToExposure;
- (void)addKSongCellToExposure;
- (void)addSongDetailToExposure;
- (void)addSingerNewsExposure;
- (void)recomendVideoToExposure;
- (void)adToExposure;
- (id)objectsForIndexPath:(id)arg1;
- (void)initArraySection2;
- (void)initArraySection1;
- (void)initCellTypeArray;
- (void)multiColumnTableViewCell:(id)arg1 didSelectAsset:(_Bool)arg2 atColumn:(unsigned long long)arg3;
- (void)scrollToShow:(_Bool)arg1;
- (void)fetchSingerShowFlag:(id)arg1;
- (void)fetchRecommendFloderList:(id)arg1 focusToReFresh:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)fillKSongCell:(id)arg1;
- (void)fillFMShowCell:(id)arg1;
- (void)fillVideoCell:(id)arg1;
- (void)fillHotChannelFolder:(id)arg1;
- (void)fillSingleRadioCell:(id)arg1;
- (void)fillChannelFolderCell:(id)arg1;
- (void)fillSingerNewsCell:(id)arg1;
- (void)fillSongDetailCell:(id)arg1;
- (void)fillAlbumCell:(id)arg1;
- (void)fillSingerCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)vcType;
- (void)refresh;
- (double)getSeperateLineWidth;
- (_Bool)hasRecomendAd;
- (void)showNoRecommendView;
- (void)showLoadingView;
- (void)showOrHideplayOPView:(id)arg1;
- (void)updateTapViewFrame;
- (id)footerView;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

