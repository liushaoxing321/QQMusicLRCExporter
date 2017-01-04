//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UITableViewDataSource-Protocol.h"

@class NSIndexPath, NSString;

@interface UserPrivateSettingViewController : SkinViewController <UITableViewDataSource>
{
    long long _indexCount;
    NSIndexPath *_userPageIndexPath;
    NSIndexPath *_hearingStateIndexPath;
    NSIndexPath *_friendHotIndexPath;
}

@property(retain, nonatomic) NSIndexPath *friendHotIndexPath; // @synthesize friendHotIndexPath=_friendHotIndexPath;
@property(retain, nonatomic) NSIndexPath *hearingStateIndexPath; // @synthesize hearingStateIndexPath=_hearingStateIndexPath;
@property(retain, nonatomic) NSIndexPath *userPageIndexPath; // @synthesize userPageIndexPath=_userPageIndexPath;
@property(nonatomic) long long indexCount; // @synthesize indexCount=_indexCount;
- (void).cxx_destruct;
- (void)showErrorTips:(id)arg1;
- (void)switchGateOn:(_Bool)arg1 AtIndexPath:(id)arg2;
- (void)updateCellRightSwitchUI:(id)arg1 withRequesting:(_Bool)arg2 withLockState:(_Bool)arg3;
- (void)onNotificationFriendHotChangeFailed:(id)arg1;
- (void)onNotificationFriendHotChange:(id)arg1;
- (void)onNotificationHearingStateChangeFailed:(id)arg1;
- (void)onNotificationHearingStateChange:(id)arg1;
- (void)onNotificationUserPageChangeFailed:(id)arg1;
- (void)onNotificationUserPageChange:(id)arg1;
- (void)onNotificationLookAll:(id)arg1;
- (void)onFriendHotSwitchChanged:(id)arg1;
- (void)onHearingStateSwitchChanged:(id)arg1;
- (void)onUserProfileSwitchChanged:(id)arg1;
- (_Bool)checkLoginBeforeSwitch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

