//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "EKEventEditViewDelegate-Protocol.h"
#import "MASTAdBrowserDelegate-Protocol.h"
#import "MASTMRAIDBridgeDelegate-Protocol.h"
#import "MASTModalViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class CLLocationManager, MASTAdBrowser, MASTMRAIDBridge, MASTMRAIDExpandProperties, MASTMoceanAdDescriptor, MASTModalViewController, MPVolumeView, NSMutableData, NSMutableDictionary, NSString, NSTimer, NSURLConnection, NSURLRequest, UIButton, UIControl, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MASTAdViewDelegate;

@interface MASTAdView : UIView <UIGestureRecognizerDelegate, UIWebViewDelegate, MASTMRAIDBridgeDelegate, MASTAdBrowserDelegate, MASTModalViewControllerDelegate, CLLocationManagerDelegate, EKEventEditViewDelegate, WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    Class WKWebViewClass;
    _Bool useInternalBrowser;
    _Bool test;
    _Bool skipNextUpdateTick;
    _Bool deferredUpdate;
    _Bool modalDismissAfterPresent;
    _Bool calendarReExpand;
    _Bool statusBarHidden;
    _Bool isExpandedURL;
    _Bool invokeTracking;
    _Bool locationDetectionEnabled;
    _Bool _canUseWKWebView;
    int placementType;
    int logLevel;
    UILabel *labelView;
    UIImageView *imageView;
    UIView *expandView;
    UIView *resizeView;
    long long zone;
    NSString *adServerURL;
    NSMutableDictionary *adRequestParameters;
    id <MASTAdViewDelegate> delegate;
    NSURLConnection *connection;
    NSMutableData *dataBuffer;
    UIView *webView;
    NSTimer *updateTimer;
    NSTimer *interstitialTimer;
    double closeButtonTimeInterval;
    NSTimer *closeButtonTimer;
    UIButton *closeButton;
    UITapGestureRecognizer *tapGesture;
    UIControl *expandCloseControl;
    UIControl *resizeCloseControl;
    MASTMoceanAdDescriptor *adDescriptor;
    MASTMRAIDBridge *mraidBridge;
    MASTAdBrowser *adBrowser;
    MASTModalViewController *modalViewController;
    MASTMRAIDExpandProperties *twoPartExapandProperties;
    MASTAdView *expandedAdView;
    CLLocationManager *locationManager;
    NSURLRequest *_adRequest;
    MPVolumeView *_mpView;
}

+ (void)unregisterProtocolClass;
+ (id)version;
@property(nonatomic) _Bool canUseWKWebView; // @synthesize canUseWKWebView=_canUseWKWebView;
@property(retain, nonatomic) MPVolumeView *mpView; // @synthesize mpView=_mpView;
@property(retain, nonatomic) NSURLRequest *adRequest; // @synthesize adRequest=_adRequest;
@property(readonly, nonatomic) _Bool locationDetectionEnabled; // @synthesize locationDetectionEnabled;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager;
@property(nonatomic) _Bool invokeTracking; // @synthesize invokeTracking;
@property(retain, nonatomic) MASTAdView *expandedAdView; // @synthesize expandedAdView;
@property(retain, nonatomic) MASTMRAIDExpandProperties *twoPartExapandProperties; // @synthesize twoPartExapandProperties;
@property(nonatomic) _Bool isExpandedURL; // @synthesize isExpandedURL;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden;
@property(nonatomic) _Bool calendarReExpand; // @synthesize calendarReExpand;
@property(nonatomic) _Bool modalDismissAfterPresent; // @synthesize modalDismissAfterPresent;
@property(retain, nonatomic) MASTModalViewController *modalViewController; // @synthesize modalViewController;
@property(retain, nonatomic) MASTAdBrowser *adBrowser; // @synthesize adBrowser;
@property(retain, nonatomic) MASTMRAIDBridge *mraidBridge; // @synthesize mraidBridge;
@property(retain, nonatomic) MASTMoceanAdDescriptor *adDescriptor; // @synthesize adDescriptor;
@property(retain, nonatomic) UIControl *resizeCloseControl; // @synthesize resizeCloseControl;
@property(retain, nonatomic) UIControl *expandCloseControl; // @synthesize expandCloseControl;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton;
@property(retain, nonatomic) NSTimer *closeButtonTimer; // @synthesize closeButtonTimer;
@property(nonatomic) double closeButtonTimeInterval; // @synthesize closeButtonTimeInterval;
@property(retain, nonatomic) NSTimer *interstitialTimer; // @synthesize interstitialTimer;
@property(nonatomic) _Bool deferredUpdate; // @synthesize deferredUpdate;
@property(nonatomic) _Bool skipNextUpdateTick; // @synthesize skipNextUpdateTick;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer;
@property(retain, nonatomic) UIView *webView; // @synthesize webView;
@property(retain, nonatomic) NSMutableData *dataBuffer; // @synthesize dataBuffer;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(nonatomic) __weak id <MASTAdViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int logLevel; // @synthesize logLevel;
@property(nonatomic) _Bool test; // @synthesize test;
@property(readonly, nonatomic) NSMutableDictionary *adRequestParameters; // @synthesize adRequestParameters;
@property(copy, nonatomic) NSString *adServerURL; // @synthesize adServerURL;
@property(readonly, nonatomic) int placementType; // @synthesize placementType;
@property(nonatomic) _Bool useInternalBrowser; // @synthesize useInternalBrowser;
@property(nonatomic) long long zone; // @synthesize zone;
- (void).cxx_destruct;
- (id)scriptToAddToDocumentWithType:(long long)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)setMainAdParameter:(id)arg1 withCallback:(id)arg2;
- (void)sendMainAdEvent:(id)arg1;
- (void)updateMainVideoProgress:(double)arg1;
- (void)updateMainVideoDuration:(double)arg1;
- (struct CGRect)absoluteFrameForView:(id)arg1;
- (struct CGSize)screenSizeIncludingStatusBar:(_Bool)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)setLocationDetectionEnabledWithPupose:(id)arg1 significantUpdating:(_Bool)arg2 distanceFilter:(double)arg3 desiredAccuracy:(double)arg4;
- (void)setLocationDetectionEnabled:(_Bool)arg1;
- (void)logEvent:(id)arg1 ofType:(int)arg2 func:(const char *)arg3 line:(int)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;
- (void)invokeDelegateSelector:(SEL)arg1;
- (void)performAdTracking;
- (_Bool)verifyThirdPartyRendering:(id)arg1 url:(id)arg2 imgOrText:(id)arg3;
- (void)renderWithAdDescriptor:(id)arg1;
- (void)loadContent:(id)arg1;
- (void)loadAndSavePhoto:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)createCalendarEvent:(id)arg1;
- (void)requestCalendarAuthorizationStatus;
- (void)checkCalendarAuthorizationStatus;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (_Bool)parseRequest:(id)arg1;
- (void)mraidBridgeShrinkMainVideo:(id)arg1;
- (void)mraidBridgeExpandMainVideo:(id)arg1;
- (void)mraidBridge:(id)arg1 mainAdSetObjectViewable:(id)arg2;
- (void)mraidBridge:(id)arg1 mainAdGetUrlsForVids:(id)arg2;
- (void)mraidBridge:(id)arg1 mainAdGetParams:(id)arg2;
- (void)mraidBridge:(id)arg1 mainAdViewMore:(id)arg2;
- (void)mraidBridgeMainAdRemoveRichAd:(id)arg1;
- (void)mraidBridgeResumeMainVideo:(id)arg1;
- (void)mraidBridgePauseMainVideo:(id)arg1;
- (void)mraidBridgeStageReady:(id)arg1;
- (void)mraidBridge:(id)arg1 storePicture:(id)arg2;
- (void)mraidBridge:(id)arg1 createCalenderEvent:(id)arg2;
- (void)mraidBridge:(id)arg1 playVideo:(id)arg2;
- (void)mraidBridgeResize:(id)arg1;
- (void)mraidBridgeUpdatedResizeProperties:(id)arg1;
- (void)mraidBridgeUpdatedOrientationProperties:(id)arg1;
- (void)mraidBridge:(id)arg1 expandWithURL:(id)arg2;
- (void)mraidBridgeUpdatedExpandProperties:(id)arg1;
- (void)mraidBridgeUpdateCurrentPosition:(id)arg1;
- (void)mraidBridge:(id)arg1 openURL:(id)arg2;
- (void)mraidBridgeClose:(id)arg1;
- (void)mraidBridgeInit:(id)arg1;
- (void)mraidUpdateLayoutForNewState:(int)arg1;
- (void)mraidInitializeBridge:(id)arg1 forWebView:(id)arg2;
- (void)mraidSupports:(id)arg1;
- (void)renderContentWithURL:(id)arg1;
- (void)renderContentWithFileURL:(id)arg1;
- (void)renderMRAIDAd:(id)arg1;
- (void)renderTextAd:(id)arg1;
- (void)loadImageAd:(id)arg1;
- (void)renderImageAd:(id)arg1;
- (void)resetWebAd;
- (void)resetTextAd;
- (void)resetImageAd;
- (void)closeControlEvent:(id)arg1;
- (void)showCloseButton;
- (void)prepareCloseButton;
- (void)showCloseButton:(_Bool)arg1 afterDelay:(double)arg2;
- (struct CGRect)resizeViewMaxRect;
- (id)resizeViewSuperview;
@property(readonly, nonatomic) UIView *resizeView; // @synthesize resizeView;
@property(readonly, nonatomic) UIView *expandView; // @synthesize expandView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(readonly, nonatomic) UILabel *labelView; // @synthesize labelView;
- (void)MASTModalViewControllerDidRotate:(id)arg1;
- (id)modalRootViewController;
- (void)dismissModalView:(id)arg1 animated:(_Bool)arg2;
- (void)presentModalView:(id)arg1;
- (_Bool)presentingModalView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGesture:(id)arg1;
- (void)MASTAdBrowserWillLeaveApplication:(id)arg1;
- (void)MASTAdBrowserClose:(id)arg1;
- (void)MASTAdBrowser:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)closeAdBrowser;
- (void)openAdBrowserWithURL:(id)arg1;
- (_Bool)adBrowserOpen;
@property(readonly, nonatomic) _Bool isInternalBrowserOpen;
- (_Bool)canOpenInternal:(id)arg1;
- (_Bool)openURL:(id)arg1;
- (void)closeInterstitial;
- (void)showInterstitialWithDuration:(double)arg1;
- (void)showInterstitial;
- (void)showExpanded:(id)arg1 withExpandProperties:(id)arg2;
- (void)resumeUpdates;
- (void)removeContent;
- (void)reset;
- (void)updateWithTimeInterval:(double)arg1;
- (void)update:(_Bool)arg1;
- (void)update;
- (void)internalUpdateTimerTick;
- (void)constructAdRequest:(id)arg1;
- (void)internalUpdate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 useWKWebView:(_Bool)arg2;
- (id)initInterstitial;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

