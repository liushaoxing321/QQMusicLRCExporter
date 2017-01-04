//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DynamicSpectrumManagerDelegate-Protocol.h"

@class NSArray, NSString, UIColor;

@interface DynamicSpectrumCoreGraphicsView : UIView <DynamicSpectrumManagerDelegate>
{
    unsigned long long _numOfBins;
    double _padding;
    double _widthOfBins;
    double _columnWidth;
    double _factorOfHeight;
    UIColor *_color;
    NSArray *_heights;
    unsigned long long _maxHeightOfBands;
}

@property(nonatomic) unsigned long long maxHeightOfBands; // @synthesize maxHeightOfBands=_maxHeightOfBands;
@property(retain, nonatomic) NSArray *heights; // @synthesize heights=_heights;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double factorOfHeight; // @synthesize factorOfHeight=_factorOfHeight;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double widthOfBins; // @synthesize widthOfBins=_widthOfBins;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long numOfBins; // @synthesize numOfBins=_numOfBins;
- (void).cxx_destruct;
- (void)updateHeights:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)stop;
- (void)pause;
- (void)start;
- (void)refreshDispaly;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
