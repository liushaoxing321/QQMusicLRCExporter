//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WKFrameInfo, WKNavigationAction, WKWebView, WKWebViewConfiguration, WKWindowFeatures;

@protocol WKUIDelegate <NSObject>

@optional
- (void)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (void)webViewDidClose:(WKWebView *)arg1;
- (WKWebView *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
@end

