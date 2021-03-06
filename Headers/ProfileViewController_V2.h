//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate-Protocol.h"
#import "ListComCellProtocol-Protocol.h"
#import "ProfileHeadViewDelegate-Protocol.h"
#import "ProfileIdentifyDelegate-Protocol.h"
#import "ProfileUserDissDelegate-Protocol.h"
#import "QMTabBarDelegate-Protocol.h"

@class FollowsViewController, FunsViewController, NSString, ProfileCardItem, ProfileDataItem, ProfileHeadView_V2, ProfileUserDissViewController, QMTabBar, UITableView, UIView;
@protocol ProfileViewControllerDelegate;

@interface ProfileViewController_V2 : SkinViewController <ProfileIdentifyDelegate, ProfileHeadViewDelegate, ImageManagerDelegate, QMTabBarDelegate, ListComCellProtocol, ProfileUserDissDelegate>
{
    _Bool _isRootVCProfile;
    _Bool _isNeedToShowTips;
    _Bool _isCancelFollow;
    id <ProfileViewControllerDelegate> _delegate;
    unsigned long long _navigateItemType;
    unsigned long long _visitUin;
    ProfileDataItem *_profileData;
    unsigned long long _selectTab;
    unsigned long long _isFirstCome;
    ProfileCardItem *_followInfo;
    ProfileCardItem *_orderInfo;
    unsigned long long _songFolderListCount;
    ProfileHeadView_V2 *_headerView;
    UIView *_detailView;
    UITableView *_leftTable;
    UIView *_seperateView;
    ProfileUserDissViewController *_dissViewController;
    FollowsViewController *_followsViewController;
    FunsViewController *_funsViewController;
    QMTabBar *_tabbar;
    UIView *_tabbarContainer;
}

@property(retain, nonatomic) UIView *tabbarContainer; // @synthesize tabbarContainer=_tabbarContainer;
@property(retain, nonatomic) QMTabBar *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) FunsViewController *funsViewController; // @synthesize funsViewController=_funsViewController;
@property(retain, nonatomic) FollowsViewController *followsViewController; // @synthesize followsViewController=_followsViewController;
@property(retain, nonatomic) ProfileUserDissViewController *dissViewController; // @synthesize dissViewController=_dissViewController;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) UITableView *leftTable; // @synthesize leftTable=_leftTable;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) ProfileHeadView_V2 *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned long long songFolderListCount; // @synthesize songFolderListCount=_songFolderListCount;
@property(retain, nonatomic) ProfileCardItem *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) ProfileCardItem *followInfo; // @synthesize followInfo=_followInfo;
@property(nonatomic) unsigned long long isFirstCome; // @synthesize isFirstCome=_isFirstCome;
@property(nonatomic) unsigned long long selectTab; // @synthesize selectTab=_selectTab;
@property(nonatomic) _Bool isCancelFollow; // @synthesize isCancelFollow=_isCancelFollow;
@property(nonatomic) _Bool isNeedToShowTips; // @synthesize isNeedToShowTips=_isNeedToShowTips;
@property(retain, nonatomic) ProfileDataItem *profileData; // @synthesize profileData=_profileData;
@property(nonatomic) unsigned long long visitUin; // @synthesize visitUin=_visitUin;
@property(nonatomic) _Bool isRootVCProfile; // @synthesize isRootVCProfile=_isRootVCProfile;
@property(nonatomic) unsigned long long navigateItemType; // @synthesize navigateItemType=_navigateItemType;
@property(nonatomic) __weak id <ProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tabbarText;
- (void)layoutTabbar:(id)arg1;
- (id)accessibilityLabel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)touchUpInside:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (id)selectetdItemImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)pressedItemImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)backgroundImage:(id)arg1;
- (id)imageFor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)navigateToVCByCardItem:(id)arg1;
- (id)getPushVCByItem:(id)arg1;
- (void)navigateToSubPage;
- (void)updateSongFolerListCount:(unsigned long long)arg1;
- (void)cellWillHighlied:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)profileHeadViewClick;
- (void)profileLvInfoClick:(id)arg1;
- (void)profileMedalClick:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)showSongFolderList;
- (void)jumpTofollowVC;
- (void)jumpTofanVC;
- (void)clickFollowBtn;
- (void)clickFansBtn;
- (void)headIconClick;
- (void)didClickSettingBtn:(id)arg1;
- (void)showTableView:(_Bool)arg1;
- (struct CGRect)initialDetailViewFrame;
- (void)createLeftTable;
- (void)createTabbar;
- (void)buildMainView;
- (void)requestProfile;
- (void)reFresh;
- (_Bool)isGuest;
- (void)updateDetailView;
- (void)updateHeaderView;
- (void)updateGreenInfo:(id)arg1;
- (void)onNotifyLogout:(id)arg1;
- (void)onNotifyFolderDataSaved:(id)arg1;
- (void)onNotifyCreatorFollowActionDoneInner:(id)arg1;
- (id)getCardByType:(unsigned long long)arg1;
- (void)onNotifyProfileUpdate:(id)arg1;
- (unsigned long long)getVisitUin;
- (id)initWithUin:(unsigned long long)arg1;
- (int)vcType;
- (void)actionInBack;
- (void)longPressBack:(id)arg1;
- (void)back:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBgImage;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

