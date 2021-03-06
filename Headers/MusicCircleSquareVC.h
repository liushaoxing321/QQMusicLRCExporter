//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController_Comment.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "ListTagDelegate-Protocol.h"
#import "MusicCircleCellDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class ChannelCreatorFollowActionProtocol, EGORefreshTableHeaderView, NSArray, NSString, UIImageView;

@interface MusicCircleSquareVC : SkinViewController_Comment <EGORefreshTableHeaderDelegate, ImageManagerDelegate, ListTagDelegate, MusicCircleCellDelegate, ProtocolHostDelegate>
{
    _Bool _reloading;
    _Bool _loadingMore;
    _Bool _bAutoScroll;
    _Bool _bNeedResetPosition;
    _Bool _enteredProfileVC;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NSArray *_resultArray;
    UIImageView *_firstSinger;
    UIImageView *_secondSinger;
    UIImageView *_thirdSinger;
    ChannelCreatorFollowActionProtocol *_followProtocol;
}

@property(retain, nonatomic) ChannelCreatorFollowActionProtocol *followProtocol; // @synthesize followProtocol=_followProtocol;
@property(retain, nonatomic) UIImageView *thirdSinger; // @synthesize thirdSinger=_thirdSinger;
@property(retain, nonatomic) UIImageView *secondSinger; // @synthesize secondSinger=_secondSinger;
@property(retain, nonatomic) UIImageView *firstSinger; // @synthesize firstSinger=_firstSinger;
@property(retain, nonatomic) NSArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
- (void).cxx_destruct;
- (_Bool)isNeedHideContainViewWhenKeyBoardHide;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (long long)findCreatorIndex:(id)arg1;
- (void)creatorViewDidClick:(id)arg1;
- (void)_listenOrCancelListenSuccessCallback:(id)arg1;
- (void)onFollowOrCancelViewClicked:(_Bool)arg1 WithSingerInfo:(id)arg2;
- (void)queryFollowSingerWithSingerId:(unsigned long long)arg1 isFollow:(_Bool)arg2 AndCellIndex:(long long)arg3;
- (void)queryFollowQQFriendWithUin:(unsigned long long)arg1 isFollow:(_Bool)arg2 AndCellIndex:(long long)arg3;
- (void)followSinger:(id)arg1 atIndex:(long long)arg2;
- (void)enterFollowMoreVC;
- (void)updateHeaderViewSingersIcon;
- (id)buildHeaderView;
- (void)makeList;
- (void)reloadData;
- (void)reFresh;
- (int)vcType;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidPop;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

