//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMSongAnnotationManagerDelegate-Protocol.h"

@class NSString, QMLabel, QMSongAnnotationViewManager, RecognizedSong, RecognizedSongLyricView, UIButton, UIImageView, UILabel;
@protocol RecognizedSongDetailView;

@interface RecognizedSongDetailView : UIView <QMSongAnnotationManagerDelegate>
{
    _Bool _isHumResult;
    id <RecognizedSongDetailView> _callback;
    id <RecognizedSongDetailView> _recognizedDelegate;
    NSString *_reuseIdentifier;
    RecognizedSong *_recognizedSong;
    double _firstRecordedTime;
    RecognizedSongLyricView *_recognizedSongLyricView;
    UIImageView *_albumCoverImageView;
    QMLabel *_singerLable;
    QMLabel *_songNameLable;
    QMLabel *_timeLable;
    UILabel *_userNameLable;
    UIImageView *_avatarBgImageView;
    UIImageView *_avatarView;
    UIView *_operButtonView;
    UIButton *_selectButton;
    QMSongAnnotationViewManager *_viewManager;
    UIView *_cornerView;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIView *cornerView; // @synthesize cornerView=_cornerView;
@property(retain, nonatomic) QMSongAnnotationViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIView *operButtonView; // @synthesize operButtonView=_operButtonView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *avatarBgImageView; // @synthesize avatarBgImageView=_avatarBgImageView;
@property(retain, nonatomic) UILabel *userNameLable; // @synthesize userNameLable=_userNameLable;
@property(retain, nonatomic) QMLabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) QMLabel *songNameLable; // @synthesize songNameLable=_songNameLable;
@property(retain, nonatomic) QMLabel *singerLable; // @synthesize singerLable=_singerLable;
@property(retain, nonatomic) UIImageView *albumCoverImageView; // @synthesize albumCoverImageView=_albumCoverImageView;
@property(retain) RecognizedSongLyricView *recognizedSongLyricView; // @synthesize recognizedSongLyricView=_recognizedSongLyricView;
@property _Bool isHumResult; // @synthesize isHumResult=_isHumResult;
@property double firstRecordedTime; // @synthesize firstRecordedTime=_firstRecordedTime;
@property(retain) RecognizedSong *recognizedSong; // @synthesize recognizedSong=_recognizedSong;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property __weak id <RecognizedSongDetailView> recognizedDelegate; // @synthesize recognizedDelegate=_recognizedDelegate;
@property(nonatomic) __weak id <RecognizedSongDetailView> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (double)timeLabelCenterY;
- (struct CGRect)albumImageFrame;
- (void)setSongDetailViewSelected:(_Bool)arg1;
- (void)onTouchUpInsideSelect:(id)arg1;
- (void)downloadSong:(id)arg1;
- (void)onClickMore;
- (int)eStatusClickShare;
- (int)eStatusClickDislike;
- (void)onClickShare;
- (void)onClickDown;
- (int)eStatusClickLike;
- (void)onClickInfo:(id)arg1;
- (void)showLinkSelectButton:(_Bool)arg1 title:(id)arg2;
- (void)showOrHideOperButtonView;
- (id)relatTime:(id)arg1;
- (void)hideLyric;
- (void)onTouchUpInsideLyric:(id)arg1;
- (void)showLyric;
- (void)onClickLike;
- (id)songInfo;
- (void)onClickPlay;
- (void)updateAvatar:(id)arg1;
- (void)updateAlbumCover:(id)arg1;
- (_Bool)isLikeBtnSelected;
- (void)setLikeBtnSelected:(_Bool)arg1;
- (void)hideUserView;
- (void)showUserView;
- (void)hideOperButtonView;
- (void)prepareForScroll;
- (void)prepareForReuse;
- (void)showOperButtonView;
- (void)initOperButtonView;
- (void)updateSubViews;
- (_Bool)shouldShowSelectButton;
- (_Bool)shouldShowAvatar;
- (void)resetViewManager;
- (void)initSubViews;
- (struct CGRect)labelFrameByPercent:(double)arg1 albumBottom:(double)arg2 labelTotalHeight:(double)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
