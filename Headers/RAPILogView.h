//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface RAPILogView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    long long _maxLogMessagesCount;
    NSMutableArray *_logMessages;
    NSMutableArray *_rowHeights;
}

@property(retain) NSMutableArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain) NSMutableArray *logMessages; // @synthesize logMessages=_logMessages;
@property long long maxLogMessagesCount; // @synthesize maxLogMessagesCount=_maxLogMessagesCount;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addLogMessage:(id)arg1 timeStamp:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

