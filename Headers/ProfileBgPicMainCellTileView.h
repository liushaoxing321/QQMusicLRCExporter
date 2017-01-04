//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ProfileBgPicItem, UIButton, UIImageView, UILabel;
@protocol ProfileBgPicSettingDelegate;

@interface ProfileBgPicMainCellTileView : UIView
{
    id <ProfileBgPicSettingDelegate> _delegate;
    UIImageView *_bgPicView;
    UILabel *_bgPicTitleLabel;
    UILabel *_bgPicSizeLabel;
    UIButton *_bgPicActionBtn;
    ProfileBgPicItem *_bgPicItem;
}

@property(retain, nonatomic) ProfileBgPicItem *bgPicItem; // @synthesize bgPicItem=_bgPicItem;
@property(retain, nonatomic) UIButton *bgPicActionBtn; // @synthesize bgPicActionBtn=_bgPicActionBtn;
@property(retain, nonatomic) UILabel *bgPicSizeLabel; // @synthesize bgPicSizeLabel=_bgPicSizeLabel;
@property(retain, nonatomic) UILabel *bgPicTitleLabel; // @synthesize bgPicTitleLabel=_bgPicTitleLabel;
@property(retain, nonatomic) UIImageView *bgPicView; // @synthesize bgPicView=_bgPicView;
@property(nonatomic) __weak id <ProfileBgPicSettingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createEmptyViewButton:(id)arg1 sel:(SEL)arg2;
- (void)updateBtnStatus;
- (void)bgPicActionBtnClick:(id)arg1;
- (void)updateUIWithBgPicItem:(id)arg1;
- (void)initSubViews;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

