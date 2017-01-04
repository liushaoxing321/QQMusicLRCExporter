//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ImageManagerDelegate-Protocol.h"

@class CategoricalSongFolderListItem, NSString, UIButton, UIImageView, UILabel;

@interface ChannelV4CategoryHotTypeView : UIView <ImageManagerDelegate>
{
    _Bool _isBig;
    CategoricalSongFolderListItem *_cateItem;
    UIImageView *_defaultImageView;
    UIButton *_picImageBtn;
    UILabel *_categoryName;
    UILabel *_categoryDesc;
}

@property(nonatomic) _Bool isBig; // @synthesize isBig=_isBig;
@property(retain, nonatomic) UILabel *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(retain, nonatomic) UILabel *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) UIButton *picImageBtn; // @synthesize picImageBtn=_picImageBtn;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) CategoricalSongFolderListItem *cateItem; // @synthesize cateItem=_cateItem;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)dealloc;
- (void)enterCategoryDetailVC;
- (id)defaultImage;
- (id)imageFileNameForItem:(id)arg1;
- (id)imageUrlForItem:(id)arg1;
- (void)reloadData;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andCategoryItem:(id)arg2 isBig:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

