//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDApplicationDelegate-Protocol.h"
#import "IDAudioServiceDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CTTelephonyNetworkInfo, IDAccessoryMonitor, NSException, NSString, RAPIContext, RAPIDebugMenuController, RAPILockScreenViewController;

@interface RAPIEntertainmentAppLink : NSObject <IDAudioServiceDelegate, IDApplicationDelegate, UIAlertViewDelegate>
{
    _Bool _startedByAppSwitcher;
    RAPIDebugMenuController *_debugMenuController;
    RAPILockScreenViewController *_lockScreenViewController;
    RAPIContext *_rapiContext;
    IDAccessoryMonitor *_idAccessoryMonitor;
    CTTelephonyNetworkInfo *_telephonyInfo;
    NSException *_currentException;
}

+ (id)sharedInstance;
@property(retain) NSException *currentException; // @synthesize currentException=_currentException;
@property(retain) CTTelephonyNetworkInfo *telephonyInfo; // @synthesize telephonyInfo=_telephonyInfo;
@property _Bool startedByAppSwitcher; // @synthesize startedByAppSwitcher=_startedByAppSwitcher;
@property(retain) IDAccessoryMonitor *idAccessoryMonitor; // @synthesize idAccessoryMonitor=_idAccessoryMonitor;
@property(retain) RAPIContext *rapiContext; // @synthesize rapiContext=_rapiContext;
@property(retain) RAPILockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
@property(retain) RAPIDebugMenuController *debugMenuController; // @synthesize debugMenuController=_debugMenuController;
- (void).cxx_destruct;
- (void)handleCDSVehicleTimeChange:(id)arg1;
- (id)languageStringForHeadUnitLanguageId:(long long)arg1;
- (void)handleCDSVehicleLanguageChange:(id)arg1;
- (void)audioService:(id)arg1 multimediaButtonEvent:(int)arg2;
- (void)audioService:(id)arg1 interruptStateChanged:(int)arg2;
- (void)audioService:(id)arg1 entertainmentStateChanged:(int)arg2;
- (id)getAudioStateDescription:(int)arg1;
- (void)logRadioAccessTechnology;
- (void)onRadioAccessTechnologyChanged:(id)arg1;
- (void)endLogRadioAccessTechnology;
- (void)startLogRadioAccessTechnology;
- (void)onConnectionError:(id)arg1;
- (void)onDisconnectedFromHeadUnit;
- (void)onConnectedToHeadUnit:(id)arg1;
- (void)applicationDidStop:(id)arg1;
- (void)applicationDidStart:(id)arg1;
- (void)applicationRestoreMainHmiState:(id)arg1;
- (void)application:(id)arg1 didConnectToVehicle:(id)arg2;
- (void)performLastUserMode;
- (void)bmwAccessoryDidDisconnect;
- (void)bmwAccessoryDidConnect;
- (id)enableAccessoryMonitoring;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)logCurrentOutputVolume;
- (void)logCurrentAudioRoute;
- (void)onAudioRouteChange:(id)arg1;
- (void)handleAudioSessionInterruption:(id)arg1;
- (void)handleOnItemClicked:(id)arg1;
- (void)showLockScreen:(id)arg1;
- (void)presentDebugMenuFromController:(id)arg1;
- (void)logStringWithFormat:(id)arg1 withArguments:(char *)arg2;
- (void)logStringWithFormat:(id)arg1;
- (void)invalidateScreen:(long long)arg1 withErrorMessage:(id)arg2;
- (void)postAudioServiceAvailability:(long long)arg1;
- (void)setMasterOptionButtonEnabled:(_Bool)arg1 forScreen:(long long)arg2;
- (void)setActionButtonEnabled:(_Bool)arg1 forButton:(long long)arg2 forScreen:(long long)arg3;
- (void)invalidateImageForRow:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (void)setCheckmarkPosition:(long long)arg1 forGroup:(long long)arg2 forScreen:(long long)arg3;
- (void)setToolbarTargetScreen:(long long)arg1 forButton:(long long)arg2;
- (void)setToolbarImage:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarTooltip:(id)arg1 forButton:(long long)arg2;
- (void)setToolbarButtonHoverable:(_Bool)arg1 clickable:(_Bool)arg2 forButton:(long long)arg3;
- (void)hideStatusMessageForScreen:(long long)arg1;
- (void)showStatusMessage:(id)arg1 displayProgressIndicator:(_Bool)arg2 forScreen:(long long)arg3;
- (void)setProgressBarVisible:(_Bool)arg1;
- (void)setCoverArt:(id)arg1;
- (void)setTrackIndex:(long long)arg1 trackCount:(long long)arg2;
- (void)setTrackName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)updateMultimediaInfo;
- (void)setAppName:(id)arg1;
- (void)notifyOfOpenUrl:(id)arg1;
- (void)shutdown;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithScreenTableConfig:(id)arg1 andDelegate:(id)arg2 handleOnItemClicked:(SEL)arg3 useConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

