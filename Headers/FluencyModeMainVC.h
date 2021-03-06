//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

@class UILabel;

@interface FluencyModeMainVC : SkinViewController
{
    UILabel *_animationLabel;
    UILabel *_DTSLabel;
    UILabel *_albumRotateLabel;
    UILabel *_dataPrefetchLabel;
    UILabel *_autoOpenLabel;
}

@property(retain) UILabel *autoOpenLabel; // @synthesize autoOpenLabel=_autoOpenLabel;
@property(retain) UILabel *dataPrefetchLabel; // @synthesize dataPrefetchLabel=_dataPrefetchLabel;
@property(retain) UILabel *albumRotateLabel; // @synthesize albumRotateLabel=_albumRotateLabel;
@property(retain) UILabel *DTSLabel; // @synthesize DTSLabel=_DTSLabel;
@property(retain) UILabel *animationLabel; // @synthesize animationLabel=_animationLabel;
- (void).cxx_destruct;
- (void)onAutoOpenSwitchChanged:(id)arg1;
- (void)onDataPrefetchSwitchChanged:(id)arg1;
- (void)onAlbumRotateSwitchChanged:(id)arg1;
- (void)onDTSSwitchChanged:(id)arg1;
- (void)onAnimationSwitchChanged:(id)arg1;
- (id)autoOpenSecTitle;
- (id)dataPrefetchSecTitle;
- (id)albumRotateSecTitle;
- (id)DTSSecTitle;
- (id)animationSecTitle;
- (void)adjustSizeOfEnglishLabel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

