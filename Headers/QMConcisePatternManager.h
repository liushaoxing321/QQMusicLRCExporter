//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AppThemeManager;

@interface QMConcisePatternManager : NSObject
{
    AppThemeManager *themeManager;
    _Bool _isPPTFinished;
    _Bool _shouldShowGuessULikeAlertUpgradeCase;
    _Bool _isFromManual;
    _Bool _isWaitingThemeChange;
    _Bool _shouldRecoverLastColor;
}

+ (id)shareInstance;
@property(nonatomic) _Bool shouldRecoverLastColor; // @synthesize shouldRecoverLastColor=_shouldRecoverLastColor;
@property(nonatomic) _Bool isWaitingThemeChange; // @synthesize isWaitingThemeChange=_isWaitingThemeChange;
@property(nonatomic) _Bool isFromManual; // @synthesize isFromManual=_isFromManual;
@property(nonatomic) _Bool shouldShowGuessULikeAlertUpgradeCase; // @synthesize shouldShowGuessULikeAlertUpgradeCase=_shouldShowGuessULikeAlertUpgradeCase;
@property(nonatomic) _Bool isPPTFinished; // @synthesize isPPTFinished=_isPPTFinished;
- (void).cxx_destruct;
- (void)setUserLastPattern;
- (long long)getUserLastPattern;
- (void)recoverToThemeBeforeConcisePatternOn;
- (_Bool)isEnableChangeTheme:(id)arg1;
- (id)getLastVipThemeItem;
- (void)recoverTolastColor;
- (void)recoverToLastTheme;
- (void)showHideGuessULikeAlert;
- (void)tryShowUpgradeCaseGuessULikeAlert;
- (void)checkToShowFirstTimeConcisePatternAlert;
- (void)onThemeChangeFinished;
- (void)saveCurrentColor;
- (void)saveCurrentTheme;
- (void)postNotifycationOnMainThread:(id)arg1;
- (void)turnOffConcisePatternFromManual:(_Bool)arg1;
- (void)turnOnConcisePatternFromManual:(_Bool)arg1;
- (_Bool)isConcisePatternOn;
- (void)onLogin;
- (void)dealloc;
- (id)init;

@end
