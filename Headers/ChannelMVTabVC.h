//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelBaseTabVC.h"

@class GenericWebViewController, NSDate;

@interface ChannelMVTabVC : ChannelBaseTabVC
{
    _Bool _isForceRefresh;
    GenericWebViewController *_genericWebVC;
    NSDate *_lastRefreshDate;
}

@property(nonatomic) _Bool isForceRefresh; // @synthesize isForceRefresh=_isForceRefresh;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) GenericWebViewController *genericWebVC; // @synthesize genericWebVC=_genericWebVC;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)reloadPage;
- (void)recreatePage;
- (void)onColorStyleChanged:(id)arg1;
- (void)createWebView;
- (void)willResignCurrentTab;
- (void)willActiveCurrentTab;
- (int)vcType;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end
