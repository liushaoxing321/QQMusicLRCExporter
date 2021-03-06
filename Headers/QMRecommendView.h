//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMRecommendViewControllerDelegate-Protocol.h"

@class NSString, QMRecommendViewController, UIButton, UILabel;
@protocol QMRecommendViewDelegate;

@interface QMRecommendView : UIView <QMRecommendViewControllerDelegate>
{
    _Bool _isProtocolSuccessReturn;
    CDUnknownBlockType _cancleActionBlock;
    id <QMRecommendViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_bottomLinkLabel;
    long long _recommendType;
    long long _recommendPosition;
    long long _currentCount;
    NSString *_songIdList;
    long long _protocolReturnSongsCount;
    long long _protocolReturnSongListCount;
    UIView *_backGroundView;
    UIView *_containerView;
    UIButton *_dismissButton;
    QMRecommendViewController *_recommendVC;
}

+ (id)getSongIdListWithSongInfos:(id)arg1;
+ (id)getSongIdList:(id)arg1;
+ (void)addClickStatusCloseCount:(unsigned long long)arg1 recommendPosition:(long long)arg2;
+ (void)addClickStatusGotoSquareCount:(unsigned long long)arg1 recommendPosition:(long long)arg2;
+ (void)exposureStatusCount:(unsigned long long)arg1 recommendPosition:(long long)arg2;
+ (id)getSynchronizeKeyWithRecommendPosition:(long long)arg1 Count:(unsigned long long)arg2;
+ (void)popQMRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2;
+ (id)popQMRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3 parentView:(id)arg4 OriginY:(double)arg5;
+ (id)popQMRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3 parentView:(id)arg4 delegate:(id)arg5;
+ (id)popQMRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3 parentView:(id)arg4 OriginY:(double)arg5 delegate:(id)arg6;
+ (void)popQMRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3;
@property(retain, nonatomic) QMRecommendViewController *recommendVC; // @synthesize recommendVC=_recommendVC;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) long long protocolReturnSongListCount; // @synthesize protocolReturnSongListCount=_protocolReturnSongListCount;
@property(nonatomic) long long protocolReturnSongsCount; // @synthesize protocolReturnSongsCount=_protocolReturnSongsCount;
@property(nonatomic) _Bool isProtocolSuccessReturn; // @synthesize isProtocolSuccessReturn=_isProtocolSuccessReturn;
@property(retain, nonatomic) NSString *songIdList; // @synthesize songIdList=_songIdList;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) long long recommendPosition; // @synthesize recommendPosition=_recommendPosition;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) UILabel *bottomLinkLabel; // @synthesize bottomLinkLabel=_bottomLinkLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <QMRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType cancleActionBlock; // @synthesize cancleActionBlock=_cancleActionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTapGesture:(id)arg1;
- (void)setBottomLinkLabelText:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)displayRecommendView;
- (void)hideWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismiss:(id)arg1;
- (void)dismissRecommendView;
- (void)cancelRecommendViewEvent:(id)arg1;
- (void)createTableView;
- (void)createBottomLinkMessage;
- (void)createTitle;
- (void)createDismissButton;
- (int)headerHight;
- (double)getContainerViewHeight;
- (void)createContainerView;
- (void)createBackgroundView;
- (void)realDisplayRecommend;
- (void)show;
- (void)registerTag;
- (int)getRecommendViewTag;
- (id)initWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2;
- (id)initWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3;
- (id)initWithRecommendPosition:(long long)arg1;
- (id)initAssetRecommendViewWithRecommendPosition:(long long)arg1 count:(unsigned long long)arg2 songsList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

