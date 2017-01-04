//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "ImageManagerDelegate-Protocol.h"

@class BEKeyButton, NSString, NowPlayingAnimationView, UIImageView, UILabel;
@protocol SongCellDelegate;

@interface SongCell : QQMusicCell <ImageManagerDelegate>
{
    UILabel *songNameLabel;
    UILabel *albumAndSingerNameLabel;
    NowPlayingAnimationView *playingImageview;
    UIImageView *hqImageView;
    _Bool isPlaying;
    _Bool isErr;
    _Bool isHq;
    int version;
    int lang;
    int tag;
    id <SongCellDelegate> cellDelegate;
    UIImageView *m_checkImageView;
    _Bool checked;
    _Bool isSq;
    _Bool isSongNew;
    _Bool isExclusive;
    _Bool _isGray;
    _Bool _isTry;
    _Bool _lockCalLayout;
    _Bool _canChangeOrder;
    _Bool _hasRightIcon;
    _Bool _bNeedLayoutSecondLable;
    int _ePayIcoStatus;
    UIImageView *sqImageView;
    UIImageView *songNewImageView;
    UIImageView *exclusiveImageView;
    UIImageView *mvImageView;
    UIImageView *versionImageView;
    UIImageView *_tryImageView;
    UIImageView *_payImageView;
    double _toRightMagrin;
    BEKeyButton *_mvButtonView;
}

@property(nonatomic) int ePayIcoStatus; // @synthesize ePayIcoStatus=_ePayIcoStatus;
@property(retain, nonatomic) BEKeyButton *mvButtonView; // @synthesize mvButtonView=_mvButtonView;
@property(nonatomic) double toRightMagrin; // @synthesize toRightMagrin=_toRightMagrin;
@property(nonatomic) _Bool bNeedLayoutSecondLable; // @synthesize bNeedLayoutSecondLable=_bNeedLayoutSecondLable;
@property(nonatomic) _Bool hasRightIcon; // @synthesize hasRightIcon=_hasRightIcon;
@property(nonatomic) _Bool canChangeOrder; // @synthesize canChangeOrder=_canChangeOrder;
@property(retain, nonatomic) UIImageView *payImageView; // @synthesize payImageView=_payImageView;
@property(retain, nonatomic) UIImageView *tryImageView; // @synthesize tryImageView=_tryImageView;
@property(nonatomic) _Bool lockCalLayout; // @synthesize lockCalLayout=_lockCalLayout;
@property(nonatomic) _Bool isTry; // @synthesize isTry=_isTry;
@property(nonatomic) _Bool isGray; // @synthesize isGray=_isGray;
@property(nonatomic) __weak id <SongCellDelegate> cellDelegate; // @synthesize cellDelegate;
@property(nonatomic) int lang; // @synthesize lang;
@property(nonatomic) int version; // @synthesize version;
@property(retain, nonatomic) UIImageView *versionImageView; // @synthesize versionImageView;
@property(retain, nonatomic) UIImageView *mvImageView; // @synthesize mvImageView;
@property(retain, nonatomic) NowPlayingAnimationView *playingImageview; // @synthesize playingImageview;
@property(nonatomic) _Bool checked; // @synthesize checked;
@property(retain, nonatomic) UIImageView *exclusiveImageView; // @synthesize exclusiveImageView;
@property(retain, nonatomic) UIImageView *songNewImageView; // @synthesize songNewImageView;
@property(retain, nonatomic) UIImageView *sqImageView; // @synthesize sqImageView;
@property(retain, nonatomic) UIImageView *hqImageView; // @synthesize hqImageView;
@property(retain, nonatomic) UILabel *albumAndSingerNameLabel; // @synthesize albumAndSingerNameLabel;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive;
@property(nonatomic) _Bool isSongNew; // @synthesize isSongNew;
@property(nonatomic) _Bool isSq; // @synthesize isSq;
@property(nonatomic) _Bool isHq; // @synthesize isHq;
@property(nonatomic) _Bool isErr; // @synthesize isErr;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying;
- (void).cxx_destruct;
- (void)setPayIcoStatus:(int)arg1;
- (void)setPayIcoStatus:(int)arg1 needLayout:(_Bool)arg2;
- (void)hideSongNameLabelTailImageViews;
- (void)onNotifySkinSettingChange:(id)arg1;
- (_Bool)showArrow;
- (int)qmCellType;
- (void)handleLongPress:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (id)accessibilityLabel;
- (void)layoutSecondLevelLabelIcons:(double)arg1;
- (void)layoutSecondLevelLabelIcons;
- (void)layoutSecondLevelLabelIconsForce;
- (void)layoutFirstLevelLabelIcons:(double)arg1;
- (void)layoutFirstLevelLabelIcons;
- (id)firstLevelLabel;
- (void)setMvLogo:(_Bool)arg1;
- (void)setRankingRow:(long long)arg1 rankInfo:(id)arg2 isSpecialType:(_Bool)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutFirstLevelLabelIconsforce;
- (void)resetSecondLevelLabelFrame;
- (void)layoutSubviews;
- (void)setCheckImageViewCenter:(struct CGPoint)arg1 alpha:(double)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (void)setCellBackgroundColor;
- (void)addLongPressGesture;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

