//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ImageManagerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol ImageCellDelegate;

@interface ImageCell : UITableViewCell <ImageManagerDelegate>
{
    id <ImageCellDelegate> cellDelegate;
    UIImageView *bottomBg;
    UILabel *firstStrLabel;
    UILabel *secondStrLabel;
    UIImageView *imageView;
    UILabel *thirdStrLabel;
    id _modelObject;
}

@property(retain, nonatomic) id modelObject; // @synthesize modelObject=_modelObject;
@property(nonatomic) __weak id <ImageCellDelegate> cellDelegate; // @synthesize cellDelegate;
@property(retain, nonatomic) UILabel *thirdStrLabel; // @synthesize thirdStrLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(retain, nonatomic) UILabel *secondStrLabel; // @synthesize secondStrLabel;
@property(retain, nonatomic) UILabel *firstStrLabel; // @synthesize firstStrLabel;
- (void).cxx_destruct;
- (void)_onNotifyColorStyleChanged:(id)arg1;
- (int)qmCellType;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)autoAdjustRoundMask;
- (void)setDefaultColor;
- (void)setRankingRow:(long long)arg1 rankInfo:(id)arg2;
- (void)dealloc;
- (void)setSecondStr:(id)arg1;
- (void)setFirstStr:(id)arg1;
- (void)setCellImage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleCellLongPress:(id)arg1;
- (void)addImageCellLongPressGesture;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
