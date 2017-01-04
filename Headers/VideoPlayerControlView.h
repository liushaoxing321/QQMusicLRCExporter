//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ImageManagerDelegate-Protocol.h"
#import "ProcessViewDelegate-Protocol.h"
#import "QMChorusSliderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPVolumeView, NSString, ProcessView, QMChorusSlider, UIButton, UIImageView, UILabel, UISlider, UITableView;
@protocol VideoPlayerControlViewDataSoure, VideoPlayerControlViewDelegate;

@interface VideoPlayerControlView : UIView <QMChorusSliderDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, ImageManagerDelegate, ProcessViewDelegate>
{
    UIView *_gestureView;
    UIButton *_returnBtn;
    UIView *_topView;
    UILabel *_titleLabel;
    UIButton *_selBtn;
    UIView *_bottomView;
    UIButton *_playBtn;
    UIButton *_playPre;
    UIButton *_playNext;
    UILabel *_playTimeLabel;
    UILabel *_totalTimeLabel;
    UIButton *_volumeBtn;
    UIButton *_shareBtn;
    UIButton *_clarityBtn;
    UIButton *_chinaFreeBtn;
    UIButton *_downloadBtn;
    UIImageView *_volumeBgView;
    UISlider *_volumeViewSlider;
    UIImageView *_clarityBgView;
    ProcessView *_bufferProgressView;
    QMChorusSlider *_curPlayProgressSlider;
    UIButton *_pipBtn;
    _Bool _showToolBar;
    _Bool _isSliderUsing;
    _Bool _isSliderUse;
    UIImageView *_tableBgView;
    UILabel *_taTitleLabel;
    UITableView *_listTable;
    _Bool _showListView;
    UIImageView *_proBgView;
    UISlider *_progressView;
    UILabel *_progressTimeLabel;
    UIImageView *_iconView;
    double _gestureX;
    double _gestureY;
    double _threshhold;
    double _ratio;
    _Bool _geChangeMediaState;
    _Bool _geChangeVolumeState;
    _Bool _progressForward;
    MPVolumeView *_airplayButton;
    UIButton *_airplayButtonView;
    _Bool _airPlayBtnIsRendering;
    UIImageView *_loadingBgView;
    UIView *_loadingView;
    UIImageView *_loadingLogo;
    double _changeTime;
    int _playState;
    _Bool _fullScreen;
    id <VideoPlayerControlViewDelegate> _delegate;
    id <VideoPlayerControlViewDataSoure> _dataSource;
}

@property(nonatomic) __weak id <VideoPlayerControlViewDataSoure> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <VideoPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)QMChorusSliderTapGesture:(id)arg1 location:(struct CGPoint)arg2 tapChorusPoint:(_Bool)arg3;
- (void)onNotifyMVDownloadCompleted:(id)arg1;
- (void)onNotifyShowMVFirstDownloadedTips:(id)arg1;
- (void)onNotifyShowMVInDownloadedTips:(id)arg1;
- (void)onNotifyShowMVInDownloadingTips:(id)arg1;
- (struct CGSize)imageSizeForProcessView:(id)arg1 position:(int)arg2;
- (id)imageNameForProcessView:(id)arg1 position:(int)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)delayPlaySongIndex:(id)arg1;
- (void)changeVideo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)curPlayProgressValueChanged:(id)arg1;
- (void)curPlayProgressSliderDrag:(id)arg1;
- (void)curPlayProgressSliderTouchUp:(id)arg1;
- (void)curPlayProgressSliderTouchDown:(id)arg1;
- (void)setImageForSoundBtn;
- (void)volumeSliderValueChange:(id)arg1;
- (void)showListView:(id)arg1;
- (void)downloadMV:(id)arg1;
- (void)changTingPress:(id)arg1;
- (void)pipAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)changeClarityAction:(id)arg1;
- (void)showChooseClarityView:(id)arg1;
- (void)changeVolumeAction:(id)arg1;
- (void)playNext:(id)arg1;
- (void)playPre:(id)arg1;
- (void)playStateChange:(id)arg1;
- (void)quitAction:(id)arg1;
- (void)panChangeMediaState:(id)arg1;
- (void)changeMovieScale;
- (void)fadeOutAndIn;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addGestureRecognize;
- (void)isDownloadedMV:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetAirPlayBtnUsingCustomizedIcon;
- (struct CGRect)getPiPBtnFrame;
- (void)updateFreeFlowBtnHidden:(_Bool)arg1 free:(_Bool)arg2;
- (void)pipBtnEnabled:(_Bool)arg1;
- (void)clarityBtnEnable:(_Bool)arg1;
- (void)updateClarity;
- (_Bool)isPlayingState;
- (void)hiddenAllView;
- (void)showLoadingBgView:(_Bool)arg1;
- (void)showLoadingView:(_Bool)arg1;
- (_Bool)needShowStatusBar;
- (void)upDateTotalTime:(double)arg1 playAbleTime:(double)arg2 playTime:(double)arg3;
- (void)willPlaySong;
- (void)seekDone;
- (void)setPlayState:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setVolumeProgress:(float)arg1;
- (void)recoverInitState;
- (void)showControlView;
- (_Bool)needShowPiPBtn;
- (void)showClarityView;
- (void)hiddenListAfterSelect;
- (void)changePlayBtnIcon;
- (void)computeThreshold;
- (void)resetProgressView:(int)arg1;
- (void)resetToolBarView;
- (void)reLayouTo:(int)arg1;
- (void)initFreeFlowIconView;
- (void)initAdjustProgressView;
- (void)initLoadingView;
- (void)initLoadingBgView;
- (void)initListView;
- (void)initVolumeView;
- (void)initClarityView;
- (void)initProgressView;
- (void)initToolBarView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
