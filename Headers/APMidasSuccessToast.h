//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

@class NSTimer, UILabel;

@interface APMidasSuccessToast : APMidasBaseViewCtrl
{
    NSTimer *timer;
    long long count;
    UILabel *desLabel;
}

@property(nonatomic) __weak UILabel *desLabel; // @synthesize desLabel;
- (void).cxx_destruct;
- (void)timeFireMethod;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

