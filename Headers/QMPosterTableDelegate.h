//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;
@protocol QMPosterCellDelegate;

@interface QMPosterTableDelegate : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _bShouldShowLoadMore;
    _Bool _bLoading;
    NSArray *_arrayData;
    NSString *_strTitle;
    id <QMPosterCellDelegate> _delegate;
}

@property(nonatomic) _Bool bLoading; // @synthesize bLoading=_bLoading;
@property(nonatomic) _Bool bShouldShowLoadMore; // @synthesize bShouldShowLoadMore=_bShouldShowLoadMore;
@property(nonatomic) __weak id <QMPosterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
@property(retain, nonatomic) NSArray *arrayData; // @synthesize arrayData=_arrayData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)getSingLineHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)init;
- (void)removeAllConnection;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

