//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class QMLabel, UIImageView, UIView;
@protocol ListSpeedControlDelegate;

@interface ListenSpeedControl : UIControl
{
    _Bool _isShowActivityText;
    id <ListSpeedControlDelegate> _delegate;
    UIImageView *_listenSpeedUpIcoView1;
    UIImageView *_listenSpeedUpIcoView2;
    UIImageView *_listenSpeedUpIcoView3;
    UIView *_speedIconView;
    QMLabel *_listenTimeLabel;
    long long _listenTime;
}

@property(nonatomic) long long listenTime; // @synthesize listenTime=_listenTime;
@property(nonatomic) _Bool isShowActivityText; // @synthesize isShowActivityText=_isShowActivityText;
@property(retain) QMLabel *listenTimeLabel; // @synthesize listenTimeLabel=_listenTimeLabel;
@property(retain) UIView *speedIconView; // @synthesize speedIconView=_speedIconView;
@property(retain) UIImageView *listenSpeedUpIcoView3; // @synthesize listenSpeedUpIcoView3=_listenSpeedUpIcoView3;
@property(retain) UIImageView *listenSpeedUpIcoView2; // @synthesize listenSpeedUpIcoView2=_listenSpeedUpIcoView2;
@property(retain) UIImageView *listenSpeedUpIcoView1; // @synthesize listenSpeedUpIcoView1=_listenSpeedUpIcoView1;
@property(nonatomic) __weak id <ListSpeedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickedListenSpeedControl;
- (void)refreshSkinSetting;
- (void)setListenSpeedIconProgress:(long long)arg1;
- (void)setToActivityText:(id)arg1;
- (void)setToUserListenTimeText;
- (void)updateUserListenTime:(long long)arg1;
- (void)buildSubViews:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

