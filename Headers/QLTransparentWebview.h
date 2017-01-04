//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QLShareDataSource-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSDictionary, NSString, QLMovieItem, QLShareFeed, QLWebViewJavascriptBridge, UIImage, UIWebView;
@protocol QLInteractiveVoteDelegate;

@interface QLTransparentWebview : UIViewController <UIWebViewDelegate, QLShareDataSource>
{
    _Bool _isSahre;
    UIWebView *_webView;
    id <QLInteractiveVoteDelegate> _interactiveVoteDelegate;
    QLWebViewJavascriptBridge *_jsBridge;
    CDUnknownBlockType _jsCallback;
    NSString *_webShareID;
    NSString *_webShareTitle;
    NSString *_webShareSubTitle;
    NSString *_webShareImageURL;
    UIImage *_webShareImage;
    NSString *_webShareURL;
}

@property(retain, nonatomic) NSString *webShareURL; // @synthesize webShareURL=_webShareURL;
@property(retain, nonatomic) UIImage *webShareImage; // @synthesize webShareImage=_webShareImage;
@property(retain, nonatomic) NSString *webShareImageURL; // @synthesize webShareImageURL=_webShareImageURL;
@property(retain, nonatomic) NSString *webShareSubTitle; // @synthesize webShareSubTitle=_webShareSubTitle;
@property(retain, nonatomic) NSString *webShareTitle; // @synthesize webShareTitle=_webShareTitle;
@property(retain, nonatomic) NSString *webShareID; // @synthesize webShareID=_webShareID;
@property(nonatomic) _Bool isSahre; // @synthesize isSahre=_isSahre;
@property(copy, nonatomic) CDUnknownBlockType jsCallback; // @synthesize jsCallback=_jsCallback;
@property(retain, nonatomic) QLWebViewJavascriptBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(nonatomic) id <QLInteractiveVoteDelegate> interactiveVoteDelegate; // @synthesize interactiveVoteDelegate=_interactiveVoteDelegate;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void)postToMomentGrooup;
- (void)openRequest:(id)arg1;
- (void)openURLWithCookie:(id)arg1;
- (id)getTranparentWebviewWithFrame:(struct CGRect)arg1 withTag:(long long)arg2;
- (void)setTranparentWebview;
- (void)registerGetAppIdBridge;
- (void)registerGetSaveInfoBridge;
- (void)registerSetSaveInfoBridge;
- (void)registerOpenWebViewBridge;
- (void)callOnQQvideoOrientation:(id)arg1;
- (void)callOnTagTimeUp:(id)arg1;
- (void)registerSetShareInfoBridge;
- (void)registerShareToJsBridge;
- (void)registerGetCurrentTimeJSBridge;
- (void)registerGetDeviceIdJSBridge;
- (void)registerSetPlayerStateJSBridge;
- (void)registerGetPlayerSizeJSBridge;
- (void)registerGetTagInfosJSBridge;
- (void)registerSetAttentionStateJSBridge;
- (void)registerGetAttentionStateJSBridge;
- (void)registerShareMomentJSBridge;
- (void)registerQllogsJSBridge;
- (void)registerHideH5JSBridge;
- (void)registerShowH5JSBridge;
- (void)registerCloseH5JSBridge;
- (void)registerInteractiveVoteJSBridge;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (void)viewDidLoad;
- (id)userAgent;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) QLShareFeed *shareFeedInfo;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end

