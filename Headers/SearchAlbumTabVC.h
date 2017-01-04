//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchResultBaseTabVC.h"

#import "ForceTouchCellDelegate-Protocol.h"

@class NSString;

@interface SearchAlbumTabVC : SearchResultBaseTabVC <ForceTouchCellDelegate>
{
}

- (id)vcForForceTouchCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)getSearchWordFrom;
- (int)getSearchType;
- (int)getListTag;
- (int)vcType;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
