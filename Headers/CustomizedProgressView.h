//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMRGBValue;

@interface CustomizedProgressView : UIView
{
    QMRGBValue *_startColor;
    QMRGBValue *_endColor;
}

@property(retain, nonatomic) QMRGBValue *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) QMRGBValue *startColor; // @synthesize startColor=_startColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

