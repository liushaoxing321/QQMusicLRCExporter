//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

@class NSArray;

@interface QMNetCheckVC : SkinViewController
{
    _Bool _isChoseCheckType;
    NSArray *_checkMethodArray;
    NSArray *_checkTypeArray;
}

@property _Bool isChoseCheckType; // @synthesize isChoseCheckType=_isChoseCheckType;
@property(retain) NSArray *checkTypeArray; // @synthesize checkTypeArray=_checkTypeArray;
@property(retain) NSArray *checkMethodArray; // @synthesize checkMethodArray=_checkMethodArray;
- (void).cxx_destruct;
- (void)setSeperateLineLeftMargin:(id)arg1;
- (id)createMoreRootCell:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

