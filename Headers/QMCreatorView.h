//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "ImageManagerDelegate-Protocol.h"

@class ChannelCreator, NSString, UIColor, UIImageView;
@protocol QMCreatorViewDelegate;

@interface QMCreatorView : UIControl <ImageManagerDelegate>
{
    struct CGRect _restrictedRect;
    struct CGRect _originNameLabelRect;
    _Bool _disableHighlight;
    _Bool _bNeedGrayImage;
    _Bool _hideVipIcon;
    _Bool _showGreenIcon;
    _Bool _hasMask;
    id <QMCreatorViewDelegate> _delegate;
    long long _maxNumberOfLine;
    long long _numberOfLine;
    double _yOffsetForMutiLines;
    ChannelCreator *_creator;
    UIColor *_originalTextColor;
    UIImageView *_greenIcon;
}

@property(retain, nonatomic) UIImageView *greenIcon; // @synthesize greenIcon=_greenIcon;
@property(nonatomic) _Bool hasMask; // @synthesize hasMask=_hasMask;
@property(retain, nonatomic) UIColor *originalTextColor; // @synthesize originalTextColor=_originalTextColor;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
@property(nonatomic) _Bool showGreenIcon; // @synthesize showGreenIcon=_showGreenIcon;
@property(nonatomic) double yOffsetForMutiLines; // @synthesize yOffsetForMutiLines=_yOffsetForMutiLines;
@property(readonly, nonatomic) long long numberOfLine; // @synthesize numberOfLine=_numberOfLine;
@property(nonatomic) _Bool hideVipIcon; // @synthesize hideVipIcon=_hideVipIcon;
@property(nonatomic) long long maxNumberOfLine; // @synthesize maxNumberOfLine=_maxNumberOfLine;
@property(nonatomic) _Bool bNeedGrayImage; // @synthesize bNeedGrayImage=_bNeedGrayImage;
@property(nonatomic) _Bool disableHighlight; // @synthesize disableHighlight=_disableHighlight;
@property(nonatomic) __weak id <QMCreatorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)_didClick;
- (void)setNameColor:(id)arg1;
- (void)update:(id)arg1;
- (void)setNameLabelYOffset:(double)arg1;
- (id)nameLabel;
- (void)loadImage;
- (id)defaultHeadImage;
- (id)initWithDelegate:(id)arg1 restrictedRect:(struct CGRect)arg2 withAvatar:(_Bool)arg3 textFont:(id)arg4 textColor:(id)arg5 textInsets:(struct UIEdgeInsets)arg6 needGrayImage:(_Bool)arg7 animatedLabel:(_Bool)arg8 withAvatarSize:(struct CGSize)arg9;
- (id)initWithDelegate:(id)arg1 restrictedRect:(struct CGRect)arg2 withAvatar:(_Bool)arg3 textFont:(id)arg4 textColor:(id)arg5 textInsets:(struct UIEdgeInsets)arg6 needText:(_Bool)arg7 needGrayImage:(_Bool)arg8 withAvatarSize:(struct CGSize)arg9;
- (id)initWithDelegate:(id)arg1 restrictedRect:(struct CGRect)arg2 withAvatar:(_Bool)arg3 textFont:(id)arg4 textColor:(id)arg5 textInsets:(struct UIEdgeInsets)arg6 withAvatarSize:(struct CGSize)arg7;
- (id)initWithDelegate:(id)arg1 restrictedRect:(struct CGRect)arg2 withAvatar:(_Bool)arg3 textFont:(id)arg4 textColor:(id)arg5 textInsets:(struct UIEdgeInsets)arg6 needGrayImage:(_Bool)arg7 withAvatarSize:(struct CGSize)arg8;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

