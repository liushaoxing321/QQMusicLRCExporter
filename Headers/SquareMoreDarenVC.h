//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMChannelInteractiveProtocol-Protocol.h"

@class CategoricalSongFolderListItem, NSMutableArray, NSString;

@interface SquareMoreDarenVC : SkinViewController <QMChannelInteractiveProtocol>
{
    _Bool _loadingMore;
    int _fromVCType;
    CategoricalSongFolderListItem *_listItem;
    NSMutableArray *_tableArray;
}

@property(nonatomic) int fromVCType; // @synthesize fromVCType=_fromVCType;
@property(retain, nonatomic) NSMutableArray *tableArray; // @synthesize tableArray=_tableArray;
@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) CategoricalSongFolderListItem *listItem; // @synthesize listItem=_listItem;
- (void).cxx_destruct;
- (void)requestToPlayChannel:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)listItemDataDidUpdate:(id)arg1;
- (void)doneWithTableArray;
- (void)reFresh;
- (int)vcType;
- (void)loadView;
- (void)dealloc;
- (id)initWithFromVCType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

