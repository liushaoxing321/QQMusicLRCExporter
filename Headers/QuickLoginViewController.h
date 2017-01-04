//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LoginViewController.h"

@class BELoadingView, UIButton, UIImage;

@interface QuickLoginViewController : LoginViewController
{
    _Bool _isShowLoading;
    _Bool _isCommonLoginVCTop;
    _Bool _showDefaultBgImage;
    _Bool _forbiddenQQLogin;
    _Bool _forbiddenWechatLogin;
    UIImage *_fakeRealTimeBlurImage;
    UIButton *_cancelBtn;
    BELoadingView *_loadingView;
    UIButton *_qqQuickLoginBtn;
    UIButton *_wxQuickLoginBtn;
}

@property(retain, nonatomic) UIButton *wxQuickLoginBtn; // @synthesize wxQuickLoginBtn=_wxQuickLoginBtn;
@property(retain, nonatomic) UIButton *qqQuickLoginBtn; // @synthesize qqQuickLoginBtn=_qqQuickLoginBtn;
@property(retain, nonatomic) BELoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) _Bool forbiddenWechatLogin; // @synthesize forbiddenWechatLogin=_forbiddenWechatLogin;
@property(nonatomic) _Bool forbiddenQQLogin; // @synthesize forbiddenQQLogin=_forbiddenQQLogin;
@property(nonatomic) _Bool showDefaultBgImage; // @synthesize showDefaultBgImage=_showDefaultBgImage;
@property(retain, nonatomic) UIImage *fakeRealTimeBlurImage; // @synthesize fakeRealTimeBlurImage=_fakeRealTimeBlurImage;
- (void).cxx_destruct;
- (void)doneWithLoginFailed;
- (void)doneWithLoginSuccess;
- (void)enbaleUI:(_Bool)arg1;
- (void)onLoginBtnclicked:(id)arg1;
- (void)onWXLoginBtnclicked:(id)arg1;
- (void)onQuickLoginBtnClicked:(id)arg1;
- (void)showLoginLoadingView;
- (void)hideLoading;
- (void)doneWithLoadingView;
- (void)setShowLoading:(_Bool)arg1;
- (void)popGestureRecognize;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resetBackgroundView;
- (_Bool)hasNavLine;
- (void)loadView;

@end

