//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDGauge.h"

@class NSDate;
@protocol IDTimeGaugeDelegate;

@interface IDTimeGauge : IDGauge
{
    id <IDTimeGaugeDelegate> _delegate;
    NSDate *_time;
}

@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) __weak id <IDTimeGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(id)arg1 info:(id)arg2;

@end

