//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "ImageManagerDelegate-Protocol.h"

@class NSObject, NSString, UIImageView, UILabel;

@interface LibraryImageCell : QQMusicCell <ImageManagerDelegate>
{
    NSObject *_curObject;
    UILabel *_centerLabel;
    UIImageView *_iconImageView;
    UIImageView *_vipIcon;
    UIImageView *_headerLine;
    UIImageView *_seperateLine;
    UIImageView *_piaoIcon;
    UIImageView *_buluoIcon;
}

@property(retain, nonatomic) UIImageView *buluoIcon; // @synthesize buluoIcon=_buluoIcon;
@property(retain, nonatomic) UIImageView *piaoIcon; // @synthesize piaoIcon=_piaoIcon;
@property(retain, nonatomic) UIImageView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIImageView *headerLine; // @synthesize headerLine=_headerLine;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) NSObject *curObject; // @synthesize curObject=_curObject;
- (void).cxx_destruct;
- (int)qmCellType;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)setImageByInfo:(id)arg1 placeholderImage:(id)arg2;
- (void)setIsShowBuluoIcon:(_Bool)arg1;
- (void)setIsShowPiaoIcon:(_Bool)arg1;
- (void)setVipLogo:(_Bool)arg1;
- (void)addImageView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

