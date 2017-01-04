//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMQRCodeScannerDelegate-Protocol.h"

@class JSResponseCallbackObject, NSDate, NSMutableArray, NSString, QMCameraMaskView, QMQRCodeScanner, QMToastTipsView, UILabel, UIView;

@interface QMImportScanVC : SkinViewController <QMQRCodeScannerDelegate>
{
    _Bool _bStartNow;
    _Bool _bConnecting;
    _Bool _isScanning;
    _Bool _isEnteredBackground;
    _Bool _bUsedScanner;
    QMCameraMaskView *_cameraMaskView;
    QMQRCodeScanner *_scanner;
    UILabel *_helpTips;
    NSMutableArray *_ipList;
    NSString *_startUrl;
    QMToastTipsView *_toastTips;
    UIView *_loadingView;
    long long _lastNetworkStatus;
    unsigned long long _toastType;
    NSDate *_startDate;
    JSResponseCallbackObject *_respObject;
    long long _scanMode;
}

@property(nonatomic) long long scanMode; // @synthesize scanMode=_scanMode;
@property(retain, nonatomic) JSResponseCallbackObject *respObject; // @synthesize respObject=_respObject;
@property(nonatomic) _Bool bUsedScanner; // @synthesize bUsedScanner=_bUsedScanner;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool isEnteredBackground; // @synthesize isEnteredBackground=_isEnteredBackground;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) _Bool bConnecting; // @synthesize bConnecting=_bConnecting;
@property(nonatomic) unsigned long long toastType; // @synthesize toastType=_toastType;
@property(nonatomic) long long lastNetworkStatus; // @synthesize lastNetworkStatus=_lastNetworkStatus;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) QMToastTipsView *toastTips; // @synthesize toastTips=_toastTips;
@property(retain, nonatomic) NSString *startUrl; // @synthesize startUrl=_startUrl;
@property(nonatomic) _Bool bStartNow; // @synthesize bStartNow=_bStartNow;
@property(retain, nonatomic) NSMutableArray *ipList; // @synthesize ipList=_ipList;
@property(retain, nonatomic) UILabel *helpTips; // @synthesize helpTips=_helpTips;
@property(retain, nonatomic) QMQRCodeScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) QMCameraMaskView *cameraMaskView; // @synthesize cameraMaskView=_cameraMaskView;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)notifyShowMiniPlayer;
- (void)notifyQMImportSongsVerifyConnectionFail;
- (void)notifyQMImportSongsVerifyConnectionOk;
- (void)netChange;
- (void)reachabilityChanged:(id)arg1;
- (void)showNotFindCameraAlertView;
- (void)showNoWiFiAlertView;
- (void)hiddenToastTips;
- (void)showToastTipsWithMessage:(id)arg1;
- (void)showVerifyConnectionFailToastTips;
- (void)showInvalidQRCodeToastTips;
- (void)hiddenLoadView;
- (id)loadViewText;
- (void)shownLoadView;
- (_Bool)startConnectionWithIpString:(id)arg1;
- (id)tranlateIPFromHexStr:(id)arg1;
- (void)qrCodeScanner:(id)arg1 failWithReason:(id)arg2;
- (_Bool)qrCodeScanner:(id)arg1 didScanResult:(id)arg2;
- (id)paramsOfStringUrl:(id)arg1;
- (_Bool)isStringUrl:(id)arg1;
- (void)stopScanning;
- (void)startScanning;
- (_Bool)shouldAutorotate;
- (void)popGestureRecognize;
- (void)back:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCallback:(id)arg1;
- (id)initWithUrl:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)createToastTips;
- (void)createHelpTips;
- (void)createQRCodeScanner;
- (void)loadView;
- (int)vcType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
