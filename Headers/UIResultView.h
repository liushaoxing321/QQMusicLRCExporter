//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GameProductModel, MpGoodsInfo, NSMutableArray, PayGoodsResovle;
@protocol UIResultViewDelegate;

@interface UIResultView : UIView
{
    unsigned long long _propCnt;
    long long _orientation;
    GameProductModel *_product;
    id <UIResultViewDelegate> _delegate;
    PayGoodsResovle *_re;
    NSMutableArray *_gifts;
    MpGoodsInfo *_sendCoin;
}

@property(retain, nonatomic) MpGoodsInfo *sendCoin; // @synthesize sendCoin=_sendCoin;
@property(retain, nonatomic) NSMutableArray *gifts; // @synthesize gifts=_gifts;
@property(retain, nonatomic) PayGoodsResovle *re; // @synthesize re=_re;
@property(nonatomic) id <UIResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GameProductModel *product; // @synthesize product=_product;
- (void)mixGift;
- (struct CGSize)getPropLabelSize;
- (void)continueToBuy;
- (void)returnToGame;
- (void)layoutSubviews;
- (void)initAllSubviews;
- (void)dealloc;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 goodsResolve:(id)arg2 product:(id)arg3 orientation:(long long)arg4;

@end

