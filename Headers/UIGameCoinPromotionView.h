//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIListViewDataSource-Protocol.h"
#import "UIListViewDeleate-Protocol.h"
#import "UIPayHeaderViewDelegate-Protocol.h"

@class NSString;
@protocol UIGameCoinPromotionViewDatasource, UIGameCoinPromotionViewDelegate;

@interface UIGameCoinPromotionView : UIView <UIPayHeaderViewDelegate, UIListViewDataSource, UIListViewDeleate>
{
    long long _orientation;
    id <UIGameCoinPromotionViewDelegate> _delegate;
    id <UIGameCoinPromotionViewDatasource> _datasource;
}

@property(nonatomic) id <UIGameCoinPromotionViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) id <UIGameCoinPromotionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)cellCountOfListView:(id)arg1;
- (id)listView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (double)seperatorMarginWidthOfListView:(id)arg1;
- (void)listView:(id)arg1 onSelectedAtIndex:(unsigned long long)arg2;
- (void)onRightImgBtnTaped;
- (struct CGSize)getPaddingByOrientation;
- (void)layoutSubviews;
- (void)initAllSubviews;
- (void)update;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

