//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "DTSPreferenceCell-Protocol.h"
#import "OHAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTSPreferenceButtonItemData, NSArray, NSIndexPath, NSString;

@interface DTSSettingVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, OHAttributedLabelDelegate, DTSPreferenceCell>
{
    _Bool _processingEnabled;
    NSIndexPath *_brandIndexPath;
    NSIndexPath *_switchIndexPath;
    NSIndexPath *_accessoryIndexPath;
    NSIndexPath *_stereoIndexPath;
    NSIndexPath *_geqIndexPath;
    NSArray *_DTSPreferenceButtonItemDataLine1;
    NSArray *_DTSPreferenceButtonItemDataLine2;
    DTSPreferenceButtonItemData *_inEarButtonData;
    DTSPreferenceButtonItemData *_overEarButtonData;
    DTSPreferenceButtonItemData *_speakerButtonData;
    DTSPreferenceButtonItemData *_wideModeButtonData;
    DTSPreferenceButtonItemData *_frontModeButtonData;
    DTSPreferenceButtonItemData *_nearModeButtonData;
}

@property(retain) DTSPreferenceButtonItemData *nearModeButtonData; // @synthesize nearModeButtonData=_nearModeButtonData;
@property(retain) DTSPreferenceButtonItemData *frontModeButtonData; // @synthesize frontModeButtonData=_frontModeButtonData;
@property(retain) DTSPreferenceButtonItemData *wideModeButtonData; // @synthesize wideModeButtonData=_wideModeButtonData;
@property(retain) DTSPreferenceButtonItemData *speakerButtonData; // @synthesize speakerButtonData=_speakerButtonData;
@property(retain) DTSPreferenceButtonItemData *overEarButtonData; // @synthesize overEarButtonData=_overEarButtonData;
@property(retain) DTSPreferenceButtonItemData *inEarButtonData; // @synthesize inEarButtonData=_inEarButtonData;
@property(retain) NSArray *DTSPreferenceButtonItemDataLine2; // @synthesize DTSPreferenceButtonItemDataLine2=_DTSPreferenceButtonItemDataLine2;
@property(retain) NSArray *DTSPreferenceButtonItemDataLine1; // @synthesize DTSPreferenceButtonItemDataLine1=_DTSPreferenceButtonItemDataLine1;
@property _Bool processingEnabled; // @synthesize processingEnabled=_processingEnabled;
@property(retain) NSIndexPath *geqIndexPath; // @synthesize geqIndexPath=_geqIndexPath;
@property(retain) NSIndexPath *stereoIndexPath; // @synthesize stereoIndexPath=_stereoIndexPath;
@property(retain) NSIndexPath *accessoryIndexPath; // @synthesize accessoryIndexPath=_accessoryIndexPath;
@property(retain) NSIndexPath *switchIndexPath; // @synthesize switchIndexPath=_switchIndexPath;
@property(retain) NSIndexPath *brandIndexPath; // @synthesize brandIndexPath=_brandIndexPath;
- (void).cxx_destruct;
- (void)audioRouteChanged;
- (void)audioProcessingStateChanged;
- (void)reloadDTSSection;
- (void)updatePreferenceButtonState;
- (void)updateButtonImage;
- (void)loadThreeButtonDatas;
- (void)_onEnableDTS:(id)arg1;
- (void)addStereoStat:(int)arg1;
- (void)addAccessoryStat:(int)arg1;
- (void)onTouchUpInsideDTSPreferenceCell:(id)arg1;
- (void)logForButtonid:(long long)arg1;
- (void)setMoreRootCell:(id)arg1;
- (void)setFootTextStyle:(id)arg1;
- (void)gotoDTSIntroducePage;
- (void)loginOKFunc;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)getSeperateLineWidth;
- (void)reFresh;
- (int)vcType;
- (id)emptyViewBgImage;
- (id)emptyViewCustomButton;
- (id)emptyViewText;
- (id)emptyViewBgText;
- (_Bool)isNeedAddBottomLine;
- (_Bool)useBgImage;
- (void)checkQPlay;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

