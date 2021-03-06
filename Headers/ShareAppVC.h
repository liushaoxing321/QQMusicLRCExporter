//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "OHAttributedLabelDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSString;

@interface ShareAppVC : SkinViewController <UITableViewDataSource, UIAlertViewDelegate, MFMessageComposeViewControllerDelegate, OHAttributedLabelDelegate>
{
    unsigned long long _numberOfRow;
}

@property unsigned long long numberOfRow; // @synthesize numberOfRow=_numberOfRow;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)displaySMSComposerSheet;
- (void)alertViewWithContent:(id)arg1 cancelTitle:(id)arg2;
- (void)sendMsgToWXReq:(id)arg1 text:(id)arg2 isSendTosession:(_Bool)arg3;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)recommendToQQFriends;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidPop;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

