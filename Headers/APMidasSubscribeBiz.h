//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasMonthBiz.h"

#import "APMidasBizDelegate-Protocol.h"

@class NSString;

@interface APMidasSubscribeBiz : APMidasMonthBiz <APMidasBizDelegate>
{
}

- (void)buy;
- (void)enterNumListViewCtrl;
- (void)enterNumInputViewCtrl;
- (_Bool)createUiModel;
- (void)getBuyInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

