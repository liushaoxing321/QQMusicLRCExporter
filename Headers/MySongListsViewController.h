//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "FolderUpdateDelegate-Protocol.h"
#import "ForceTouchCellDelegate-Protocol.h"
#import "OHAttributedLabelDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "QMRecommendViewDelegate-Protocol.h"
#import "QMTabBarDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class FolderInfo, NSMutableArray, NSString, QMRecommendView, QMTabBar, SongListOperateView, UIButton;

@interface MySongListsViewController : SkinViewController <ForceTouchCellDelegate, UITableViewDataSource, UIAlertViewDelegate, OHAttributedLabelDelegate, ProtocolHostDelegate, FolderUpdateDelegate, QMTabBarDelegate, QMRecommendViewDelegate>
{
    int _folderType;
    int _selectTabIndex;
    NSMutableArray *arrayDeleted;
    FolderInfo *_currentFolder;
    NSMutableArray *_arrayAll;
    QMTabBar *_tabbar;
    SongListOperateView *_operateView;
    unsigned long long _favSongListCount;
    QMRecommendView *_recommendView;
    UIButton *_btnRestore;
}

@property(retain, nonatomic) UIButton *btnRestore; // @synthesize btnRestore=_btnRestore;
@property(retain, nonatomic) QMRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) unsigned long long favSongListCount; // @synthesize favSongListCount=_favSongListCount;
@property(retain) SongListOperateView *operateView; // @synthesize operateView=_operateView;
@property(retain, nonatomic) QMTabBar *tabbar; // @synthesize tabbar=_tabbar;
@property(nonatomic) int selectTabIndex; // @synthesize selectTabIndex=_selectTabIndex;
@property(nonatomic) int folderType; // @synthesize folderType=_folderType;
@property(retain, nonatomic) NSMutableArray *arrayAll; // @synthesize arrayAll=_arrayAll;
@property(retain, nonatomic) FolderInfo *currentFolder; // @synthesize currentFolder=_currentFolder;
@property(retain, nonatomic) NSMutableArray *arrayDeleted; // @synthesize arrayDeleted;
- (void).cxx_destruct;
- (void)customPopAction:(id)arg1 commitViewController:(id)arg2;
- (id)vcForForceTouchCell:(id)arg1;
- (void)touchDown:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)getFavouriteSongListCount;
- (void)touchUpInside:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (id)selectedImageView:(id)arg1;
- (id)selectetdItemImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)pressedItemImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)backgroundImage:(id)arg1;
- (id)accessibilityLabel:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)imageFor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)restoreFolderPressed:(id)arg1;
- (void)longPressToDo:(id)arg1;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (id)getAllVCType;
- (int)vcType;
- (void)makeList;
- (id)currentFolders;
- (void)doHandlePushComming:(id)arg1;
- (void)editFinishByResult:(id)arg1 isOrderChanged:(_Bool)arg2 deleteFolders:(id)arg3 shouldDeleteEntiryFileSongs:(id)arg4;
- (void)onTouchUpInsideManage:(id)arg1;
- (void)onTouchUpInsideDoneEdit:(id)arg1;
- (void)newFolderCallBack:(id)arg1;
- (void)onTouchUpInsideAdd:(id)arg1;
- (id)operateViewPlayTitle;
- (id)createEditView;
- (void)refreshSonglistPic:(id)arg1;
- (void)onNotifyFolderPictureChanged:(id)arg1;
- (void)onNotifyFolderNameSaveFailed:(id)arg1;
- (void)_onNotifyAppDidEnterBackground:(id)arg1;
- (void)onNotifyUpdateCloudNumber:(id)arg1;
- (void)onNotifyFolderDataSaved:(id)arg1;
- (void)onNotifyFolderSongDataSaved:(id)arg1;
- (void)_onNotifyUpdateCloudFolderLocalSonngsCount:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)jumpToFolder:(id)arg1;
- (void)_handlConfirmDeleteAlertView:(long long)arg1;
- (void)jumpToIndexView:(id)arg1;
- (void)deleteDiskFile:(id)arg1;
- (void)alsoDeleteDiskFile:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateFolderImage:(id)arg1 andFolderInfo:(id)arg2;
- (double)getSeperateLineWidth;
- (void)dealloc;
- (id)emptyViewCustomButton;
- (id)emptyViewBgText2;
- (id)emptyViewBgText;
- (void)showTable;
- (void)reFresh;
- (void)recommendViewWillHide:(id)arg1;
- (void)recommendViewWillShow:(id)arg1;
- (void)reLayout:(long long)arg1;
- (struct CGRect)reFrame;
- (void)viewDidPop;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupTabbarView;
- (void)loadView;
- (id)initWithUin:(unsigned long long)arg1 AndType:(int)arg2;
- (id)initWithUin:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

