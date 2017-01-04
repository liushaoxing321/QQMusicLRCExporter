//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class QMGlobalCommentMuscritItem, QMLabel, ScoreView, UIImageView;
@protocol QMGlobalCommentMuscritContentCellDelegate;

@interface QMGlobalCommentMuscritContentCell : QQMusicCell
{
    id <QMGlobalCommentMuscritContentCellDelegate> _delegate;
    QMGlobalCommentMuscritItem *_muscritItem;
    QMLabel *_titleLabel;
    QMLabel *_authorLabel;
    ScoreView *_scoreView;
    QMLabel *_scoreLabel;
    UIImageView *_avatarImageView;
    QMLabel *_contentLabel;
    QMLabel *_showMoreLabel;
}

+ (double)caculateTitleHeight:(id)arg1;
+ (double)caculateContentHeight:(id)arg1;
+ (double)caculateCellHeightWithTitle:(id)arg1 withContent:(id)arg2 hasScoreView:(_Bool)arg3 hasShowMoreLabel:(_Bool)arg4;
@property(retain, nonatomic) QMLabel *showMoreLabel; // @synthesize showMoreLabel=_showMoreLabel;
@property(retain, nonatomic) QMLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) QMLabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) ScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) QMLabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) QMLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QMGlobalCommentMuscritItem *muscritItem; // @synthesize muscritItem=_muscritItem;
@property(nonatomic) __weak id <QMGlobalCommentMuscritContentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAvatarClicked;
- (void)updateUIWithMuscritItem:(id)arg1 withCellHeight:(double)arg2;
- (double)contentTextViewHeightWithCellHeight:(double)arg1 hasScoreView:(_Bool)arg2 hasShowMoreLabel:(_Bool)arg3;
- (void)buildSubViews;
- (int)qmCellType;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

