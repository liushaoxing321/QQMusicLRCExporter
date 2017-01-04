//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class NSMutableArray;
@protocol DTSPreferenceCell;

@interface DTSPreferenceCell : QQMusicCell
{
    _Bool _uiCreated;
    id <DTSPreferenceCell> _delegate;
    NSMutableArray *_buttons;
}

@property(retain) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property _Bool uiCreated; // @synthesize uiCreated=_uiCreated;
@property __weak id <DTSPreferenceCell> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (_Bool)showArrow;
- (id)buttonAtIndex:(long long)arg1;
- (void)updateDatas:(id)arg1;
- (void)updateData:(id)arg1 atIndex:(long long)arg2;
- (void)onTouchUpInsideBtn:(id)arg1;
- (void)buildSubViews;
- (id)createSeprateLine;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

