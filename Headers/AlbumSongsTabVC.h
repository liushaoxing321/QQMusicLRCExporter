//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTabVC.h"

#import "SimilarRecAlbumCellDelegate-Protocol.h"
#import "SimilarRecHeaderCellMoreDelegate-Protocol.h"

@class NSArray, NSString;

@interface AlbumSongsTabVC : BaseTabVC <SimilarRecAlbumCellDelegate, SimilarRecHeaderCellMoreDelegate>
{
    _Bool completelyVisible;
    _Bool _bClickedSimilarRec;
    _Bool _isPayAlbum;
    NSArray *jumpArgumentArray;
    unsigned long long _albumId;
    long long _groupID;
}

@property(nonatomic) long long groupID; // @synthesize groupID=_groupID;
@property _Bool isPayAlbum; // @synthesize isPayAlbum=_isPayAlbum;
@property _Bool bClickedSimilarRec; // @synthesize bClickedSimilarRec=_bClickedSimilarRec;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property _Bool completelyVisible; // @synthesize completelyVisible;
@property(retain, nonatomic) NSArray *jumpArgumentArray; // @synthesize jumpArgumentArray;
- (void).cxx_destruct;
- (void)didClickedMore;
- (void)didClickedSimilarRecAlbumCell:(id)arg1 AtCloumn:(long long)arg2;
- (void)setChannelItemTjReport:(id)arg1;
- (void)handleBatchAction:(long long)arg1;
- (void)randomButtonClicked:(id)arg1;
- (void)setBannerAlbumImageWithImage:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setPrefer;
- (void)setDnotLike;
- (_Bool)shouldShowPerfreSet;
- (_Bool)shouldShowDoNotLike;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCircleSongPoint:(id)arg1;
- (void)showJumpCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)delaySetBackgroundColor:(id)arg1;
- (void)handleCellLongPress:(id)arg1;
- (id)payAlbumNotOnShelfCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)recommendSectionIndex;
- (_Bool)hasRecommendSection;
- (_Bool)isPayAlbumNotOnShelf;
- (id)_getAdjustHeaderviewImage:(id)arg1;
- (long long)_getNormalIndexFormIndexPath:(id)arg1;
- (id)_getIndexPathFormNormalIndex:(long long)arg1;
- (id)_getSongInfoFrom:(id)arg1 atIndex:(long long)arg2;
- (id)_getAlbumSectionList:(long long)arg1;
- (id)currentAlbumSingerName;
- (_Bool)_needShowSection;
- (double)totalTableCellsHeight;
- (_Bool)showAlbumInfoBtnInActionSheet:(id)arg1;
- (void)addSubviewsToHeaderView:(id)arg1;
- (_Bool)isShowShareAction;
- (_Bool)isShowSubTitle;
- (_Bool)isShowCommonTitle;
- (void)loadImage;
- (void)updataDataSuccess:(id)arg1;
- (void)updataCurUI;
- (void)updateLoveBtn;
- (id)getSongInfoAtIndexPath:(id)arg1;
- (int)getPlayingIndexIfPlayingCurrentList:(int)arg1;
- (void)reFresh;
- (id)strVCtype;
- (int)vcType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

