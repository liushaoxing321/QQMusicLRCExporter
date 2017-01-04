//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class NSString, UIButton, UITextView;

@interface QMGlobalCommentHotFooterCell : QQMusicCell
{
    UITextView *_textView;
    UIButton *_subTitleButton;
    NSString *_subTitleUrl;
}

@property(retain, nonatomic) NSString *subTitleUrl; // @synthesize subTitleUrl=_subTitleUrl;
@property(retain, nonatomic) UIButton *subTitleButton; // @synthesize subTitleButton=_subTitleButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)addSubTitle:(id)arg1 withUrl:(id)arg2;
- (void)updateUIWithText:(id)arg1 hiddenCenterLine:(_Bool)arg2;
- (void)onSubTitleButtonClicked:(id)arg1;
- (void)buildSubViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

