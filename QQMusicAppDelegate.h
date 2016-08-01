//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "CrashReportSenderDelegate.h"
#import "FlashWindowDelegate.h"
#import "PPTDelegate.h"
#import "UIApplicationDelegate.h"
#import "UINavigationControllerDelegate.h"

@class FlashWindow, NSCondition, NSDictionary, NSString, QMRootTabBarVC, QMRootTopTabBarVC, QQMuiscHomeViewController, ShakableNavigationViewController, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface QQMusicAppDelegate : UIResponder <UIApplicationDelegate, CrashReportSenderDelegate, UINavigationControllerDelegate, PPTDelegate, FlashWindowDelegate>
{
    UIWindow *window;
    ShakableNavigationViewController *rootNavController;
    QQMuiscHomeViewController *homeVC;
    QMRootTabBarVC *rootTabBarVC;
    QMRootTopTabBarVC *rootTopTabBarVC;
    UIViewController *_ppt;
    int eAppLaunchMode;
    BOOL _controlableUIReady;
    BOOL _shouldShowPPT;
    BOOL _hasAddLaunchState;
    BOOL notDismissModalView;
    BOOL _firstTimeLauchApp;
    BOOL _isIpForbidden;
    BOOL _uploadingCrashLog;
    NSDictionary *appLaunchOptions;
    NSCondition *_condition;
    FlashWindow *_flashWindow;
    int _launchMode;
}

+ (void)showActionSheet:(id)arg1;
+ (id)getRootTabBarVC;
+ (id)sharedQQMusicAppDelegate;
+ (void)destoryGlobalVariable;
+ (void)initializeGlobalVariable;
+ (void)initialize;
@property int launchMode; // @synthesize launchMode=_launchMode;
@property(retain) FlashWindow *flashWindow; // @synthesize flashWindow=_flashWindow;
@property BOOL uploadingCrashLog; // @synthesize uploadingCrashLog=_uploadingCrashLog;
@property(retain) NSCondition *condition; // @synthesize condition=_condition;
@property BOOL isIpForbidden; // @synthesize isIpForbidden=_isIpForbidden;
@property BOOL firstTimeLauchApp; // @synthesize firstTimeLauchApp=_firstTimeLauchApp;
@property BOOL notDismissModalView; // @synthesize notDismissModalView;
@property(retain) NSDictionary *appLaunchOptions; // @synthesize appLaunchOptions;
@property(retain, nonatomic) QMRootTopTabBarVC *rootTopTabBarVC; // @synthesize rootTopTabBarVC;
@property(retain, nonatomic) QMRootTabBarVC *rootTabBarVC; // @synthesize rootTabBarVC;
@property(retain, nonatomic) QQMuiscHomeViewController *homeVC; // @synthesize homeVC;
@property(retain, nonatomic) ShakableNavigationViewController *rootNavController; // @synthesize rootNavController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void).cxx_destruct;
- (BOOL)isFristLauchApp;
- (void)requestToFinishWebPPTVC;
- (void)_registerRemoteNotification;
- (BOOL)ifHasFlashScreen;
- (void)dbUpdateProgress:(id)arg1;
- (void)delayReleaseFlashWindow;
- (void)onFlashWindowClicked:(id)arg1 channelItem:(id)arg2;
- (void)onFlashWindowWillRelease:(id)arg1;
- (void)pptDidFinish:(id)arg1;
- (void)finishPPTVC;
- (BOOL)isPPTShow;
- (void)showPPT;
- (void)iPodLibraryDidChange:(id)arg1;
- (void)onQQMusicWindowResigned:(id)arg1;
- (void)onNotifyForbidden:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onNotifyControlableUIReady:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)_doRealFindSongFile;
- (void)_doFindSongFile;
- (BOOL)_keyWindowIsAlertView;
- (void)_tryLoginAfterUIAndDataReady;
- (void)qqMusicInit;
- (void)_waitSendCrashLog;
- (void)backgroundAppCheck;
- (void)_checkDefaultUserAgent;
- (void)_delayToSetLaunchOptionsNil;
- (void)onBackgroundAppCheckFinish;
- (void)delayStatAppLanuchMode;
- (void)delayAddObserverIpod;
- (void)registerSDK;
- (void)sendPacFile;
- (void)handleCrashReport:(id)arg1;
- (void)popTopVCBeforePush;
- (void)popToRootView:(BOOL)arg1;
- (void)popTopView:(BOOL)arg1;
- (void)pushView:(id)arg1 animated:(BOOL)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)qqMusicLoadUI;
- (void)initMainWindow;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)delayDissmissHomeVC;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dismissAllModalViewController:(BOOL)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)delayInitPlayingVC;
- (void)batchDelayCallSelectorAfterLaunch;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (void)setupCacheFileManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

