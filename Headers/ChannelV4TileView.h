//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "ImageManagerDelegate-Protocol.h"
#import "QMCreatorViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class ChannelItem, NSString, QMCreatorView, UIActivityIndicatorView, UIButton, UIButtonWithUserInfo, UIImageView, UIImageViewWithUserInfo, UILabel, UIView;
@protocol UIViewControllerPreviewing;

@interface ChannelV4TileView : UIControl <QMCreatorViewDelegate, UIViewControllerPreviewingDelegate, ImageManagerDelegate>
{
    _Bool _shouldReloadImage;
    double leftTitleMargin;
    _Bool _isFromRecommendTab;
    ChannelItem *_item;
    double _realHeight;
    double _rate;
    id _actionTarget;
    SEL _action;
    SEL _playAction;
    UIImageView *_defaultImageView;
    UIButtonWithUserInfo *_imageButton;
    UIImageViewWithUserInfo *_badgeImageView;
    UIImageView *_listenIconImageView;
    UILabel *_listenNumLabel;
    UIImageView *_djImageView;
    UIImageView *_brandImageView;
    UIImageView *_djButtomImageView;
    UILabel *_titleLabel;
    QMCreatorView *_creatorView;
    UIActivityIndicatorView *_loadingIndiView;
    UIImageView *_nowplayingImgView;
    UILabel *_dujiaLabel;
    UIView *_bottomArea;
    UIView *_maskBgView;
    UIActivityIndicatorView *_songListLoadingIndicatorView;
    UIButton *_songListPlayingButton;
    unsigned long long _titleLineType;
    id <UIViewControllerPreviewing> _vcPreviewing;
}

@property(retain, nonatomic) id <UIViewControllerPreviewing> vcPreviewing; // @synthesize vcPreviewing=_vcPreviewing;
@property(nonatomic) unsigned long long titleLineType; // @synthesize titleLineType=_titleLineType;
@property(retain, nonatomic) UIButton *songListPlayingButton; // @synthesize songListPlayingButton=_songListPlayingButton;
@property(retain, nonatomic) UIActivityIndicatorView *songListLoadingIndicatorView; // @synthesize songListLoadingIndicatorView=_songListLoadingIndicatorView;
@property(retain, nonatomic) UIView *maskBgView; // @synthesize maskBgView=_maskBgView;
@property(retain, nonatomic) UIView *bottomArea; // @synthesize bottomArea=_bottomArea;
@property(retain, nonatomic) UILabel *dujiaLabel; // @synthesize dujiaLabel=_dujiaLabel;
@property(retain, nonatomic) UIImageView *nowplayingImgView; // @synthesize nowplayingImgView=_nowplayingImgView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndiView; // @synthesize loadingIndiView=_loadingIndiView;
@property(retain, nonatomic) QMCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *djButtomImageView; // @synthesize djButtomImageView=_djButtomImageView;
@property(retain, nonatomic) UIImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(retain, nonatomic) UIImageView *djImageView; // @synthesize djImageView=_djImageView;
@property(retain, nonatomic) UILabel *listenNumLabel; // @synthesize listenNumLabel=_listenNumLabel;
@property(retain, nonatomic) UIImageView *listenIconImageView; // @synthesize listenIconImageView=_listenIconImageView;
@property(retain, nonatomic) UIImageViewWithUserInfo *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIButtonWithUserInfo *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(nonatomic) SEL playAction; // @synthesize playAction=_playAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) _Bool isFromRecommendTab; // @synthesize isFromRecommendTab=_isFromRecommendTab;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) double realHeight; // @synthesize realHeight=_realHeight;
@property(retain, nonatomic) ChannelItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)imageFileNameForItem:(id)arg1;
- (id)imageUrlForItem:(id)arg1;
- (id)trimImage:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (id)defaultImage;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (_Bool)titleIsMoreThanOneLine;
- (void)unRegisterForceTouch;
- (void)registerForceTouch;
- (void)reloadDataForLoading:(_Bool)arg1 forNowPlaying:(_Bool)arg2;
- (void)reloadSongListPlayingStatus;
- (void)playStatusDidChange:(id)arg1;
- (void)playListDidChange:(id)arg1;
- (void)reloadData;
- (double)titleLabelWidth;
- (void)setPlayingTarget:(id)arg1 action:(SEL)arg2;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)doClickPlayingButton:(id)arg1;
- (void)imageButtonDidTap:(id)arg1;
- (void)freshSkinChange;
- (id)initWithFrame:(struct CGRect)arg1 titleLineType:(unsigned long long)arg2 isFromRecommendTab:(_Bool)arg3 isPlayButtonOnEdge:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
