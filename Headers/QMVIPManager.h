//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class QMVIPLogoInfo, QMVIPLogoInfoConfig;

@interface QMVIPManager : NSObject <ProtocolHostDelegate>
{
    QMVIPLogoInfo *_vipLogoInfo;
    QMVIPLogoInfoConfig *_localSavedConfig;
}

+ (unsigned long long)getTitleType:(unsigned long long)arg1;
+ (unsigned long long)getRedPointDunType:(unsigned long long)arg1;
+ (unsigned long long)getHighlightExposureType:(unsigned long long)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) QMVIPLogoInfoConfig *localSavedConfig; // @synthesize localSavedConfig=_localSavedConfig;
@property(retain, nonatomic) QMVIPLogoInfo *vipLogoInfo; // @synthesize vipLogoInfo=_vipLogoInfo;
- (void).cxx_destruct;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)_adjustShouldShowRedPoint;
- (void)_saveVIPLogoInfoConfig:(id)arg1;
- (id)_loadVIPLogoInfoConfigFromConfigFile;
- (void)_clearLastAccountCache;
- (void)clickVIPLogo;
- (void)runVIPLogoInfoProtocol;

@end

