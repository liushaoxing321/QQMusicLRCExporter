//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TADAdSelectorItemView : UIView
{
    UIImageView *_thumbnailImageView;
    UILabel *_descriptionLabel;
    UIImageView *_playBtImgView;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *playBtImgView; // @synthesize playBtImgView=_playBtImgView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithSelectorItem:(id)arg1;

@end

