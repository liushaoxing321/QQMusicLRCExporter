//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class QMLabel;

@interface TitleCell : QQMusicCell
{
    QMLabel *_title;
}

@property(retain) QMLabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (double)fontSize;
- (int)qmCellType;
- (void)updateTitle:(id)arg1;
- (void)layoutSubviews;
- (void)buildSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

