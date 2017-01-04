//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIDocumentInteractionController, UITableView;

@interface ExplorerViewController : SkinViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UIDocumentInteractionControllerDelegate>
{
    int _actionSheetDelete;
    int _actionSheetEmail;
    int _actionSheetShowProperty;
    int _actionSheetOpenInOtherApp;
    int _actionSheetZipFile;
    _Bool _ignoreZipSize;
    NSString *basePath;
    UITableView *_tableView;
    NSArray *_folderItems;
    UIDocumentInteractionController *_interactionController;
}

@property(retain) UIDocumentInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property _Bool ignoreZipSize; // @synthesize ignoreZipSize=_ignoreZipSize;
@property(retain) NSArray *folderItems; // @synthesize folderItems=_folderItems;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSString *basePath; // @synthesize basePath;
- (void).cxx_destruct;
- (void)openWithOtherApp:(id)arg1;
- (void)zipAllFileInPath:(id)arg1 zipBlock:(CDUnknownBlockType)arg2;
- (void)scanFolder:(id)arg1 findedItemBlock:(CDUnknownBlockType)arg2;
- (id)createFileName;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)zipFilesinPaths:(id)arg1 zipPath:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)htmlContentWithText:(id)arg1;
- (void)zipFiles:(id)arg1;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(long long)arg2;
- (void)_newActionSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getLastAccessTimeDesc:(id)arg1;
- (void)getAllFolderItems;
- (void)dealloc;
- (void)loadView;
- (id)initWithBasePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

