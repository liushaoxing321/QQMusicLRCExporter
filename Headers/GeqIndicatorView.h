//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IndicatorScrollViewDataSource-Protocol.h"
#import "IndicatorScrollViewDelegate-Protocol.h"

@class IndicatorScrollView, NSMutableArray, NSString;
@protocol IndicatorScrollViewDelegate;

@interface GeqIndicatorView : UIView <IndicatorScrollViewDelegate, IndicatorScrollViewDataSource>
{
    float _geqCellWitdh;
    IndicatorScrollView *_indicatorScrollView;
    NSMutableArray *_sourceArray;
    id <IndicatorScrollViewDelegate> _indicatorDelegate;
}

@property(nonatomic) float geqCellWitdh; // @synthesize geqCellWitdh=_geqCellWitdh;
@property(nonatomic) __weak id <IndicatorScrollViewDelegate> indicatorDelegate; // @synthesize indicatorDelegate=_indicatorDelegate;
@property(retain, nonatomic) NSMutableArray *sourceArray; // @synthesize sourceArray=_sourceArray;
@property(retain, nonatomic) IndicatorScrollView *indicatorScrollView; // @synthesize indicatorScrollView=_indicatorScrollView;
- (void).cxx_destruct;
- (_Bool)scrollInVoiceOver:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)pageScrollView:(id)arg1 didTapPageAtIndex:(long long)arg2;
- (struct CGSize)sizeCellForScrollView:(id)arg1;
- (id)pageScrollView:(id)arg1 viewForRowAtIndex:(int)arg2;
- (long long)numberOfPageInScrollView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollTo:(long long)arg1;
- (void)reloadData;
- (id)initWith:(struct CGRect)arg1 DataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

