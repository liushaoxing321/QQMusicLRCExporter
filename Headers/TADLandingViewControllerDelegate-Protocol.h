//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TADLandingViewControllerDelegate <NSObject>

@optional
- (void)adLandingViewMindLinkClicked:(long long)arg1;
- (void)closeADLandingViewController:(_Bool)arg1;
- (void)closeADLandingViewController;
- (void)adLandingViewRefreshUrl:(NSString *)arg1;
- (void)adLandingViewDidFinishLoadingUrl:(NSString *)arg1;
- (void)adLandingViewStartLoadingUrl:(NSString *)arg1;
- (void)adLandingViewDidFailLoad;
- (void)adLandingViewDidFinishLoad;
- (void)adLandingViewDidStartLoad;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewDidDisappear;
- (void)adLandingViewWillDisappear;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidAppear;
- (void)adLandingViewWillAppear;
@end

