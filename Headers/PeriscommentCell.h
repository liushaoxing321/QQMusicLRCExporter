//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommentLabel, NSDictionary, PeriscommentConfig, PeriscommentMark, UIImageView, UILabel, URLImageView;

@interface PeriscommentCell : UIView
{
    int _cellStyle;
    PeriscommentMark *_mark;
    UILabel *_nameLabel;
    CommentLabel *_commentLabel;
    NSDictionary *_extroInfoDic;
    id _delegatge;
    PeriscommentConfig *_cellConfig;
    UIImageView *_footerImageView;
    URLImageView *_backgroundImageView;
    unsigned long long _addHeartCount;
}

@property(nonatomic) unsigned long long addHeartCount; // @synthesize addHeartCount=_addHeartCount;
@property(retain, nonatomic) URLImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) PeriscommentConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
@property(nonatomic) __weak id delegatge; // @synthesize delegatge=_delegatge;
@property(nonatomic) int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSDictionary *extroInfoDic; // @synthesize extroInfoDic=_extroInfoDic;
@property(retain, nonatomic) CommentLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) PeriscommentMark *mark; // @synthesize mark=_mark;
- (void).cxx_destruct;
- (void)setFavorColor;
- (void)removeFooterimage;
- (void)addHeart:(id)arg1;
- (void)setupView:(id)arg1 orProfileUrl:(id)arg2 authImage:(id)arg3 bubbleImageUrl:(id)arg4 comment:(id)arg5 config:(id)arg6;
- (void)setupView:(id)arg1 orProfileUrl:(id)arg2 authImage:(id)arg3 bubbleImageUrl:(id)arg4 name:(id)arg5 comment:(id)arg6 config:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 profileImageUrl:(id)arg2 authImage:(id)arg3 bubbleImageUrl:(id)arg4 comment:(id)arg5 commentCellStyle:(int)arg6 config:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 profileImageUrl:(id)arg2 authImage:(id)arg3 bubbleImageUrl:(id)arg4 name:(id)arg5 comment:(id)arg6 commentCellStyle:(int)arg7 config:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1 profileImage:(id)arg2 comment:(id)arg3 commentCellStyle:(int)arg4 config:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 profileImage:(id)arg2 name:(id)arg3 comment:(id)arg4 commentCellStyle:(int)arg5 config:(id)arg6;

@end

