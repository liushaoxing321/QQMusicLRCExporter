//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDApplicationDataSource-Protocol.h"
#import "IDApplicationDelegate-Protocol.h"

@class DownloadViewController, IDApplication, IdentifyTrackHmiProvider, NSString, StartViewController, WarningViewController;

@interface ManagerIdentifyTrack : NSObject <IDApplicationDataSource, IDApplicationDelegate>
{
    int _currentLanguage;
    int _remoteApplicationState;
    DownloadViewController *_downloadViewController;
    WarningViewController *_warningViewController;
    StartViewController *_startViewController;
    IDApplication *_idApplication;
    IdentifyTrackHmiProvider *_hmiProvider;
}

+ (id)sharedInstance;
@property int remoteApplicationState; // @synthesize remoteApplicationState=_remoteApplicationState;
@property(retain) IdentifyTrackHmiProvider *hmiProvider; // @synthesize hmiProvider=_hmiProvider;
@property(retain) IDApplication *idApplication; // @synthesize idApplication=_idApplication;
@property(nonatomic) int currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(retain) StartViewController *startViewController; // @synthesize startViewController=_startViewController;
@property(retain) WarningViewController *warningViewController; // @synthesize warningViewController=_warningViewController;
@property(retain) DownloadViewController *downloadViewController; // @synthesize downloadViewController=_downloadViewController;
- (void).cxx_destruct;
- (id)textDatabasesForApplication:(id)arg1;
- (id)imageDatabasesForApplication:(id)arg1;
- (id)hmiDescriptionForApplication:(id)arg1;
- (id)manifestForApplication:(id)arg1;
- (void)applicationRestoreMainHmiState:(id)arg1;
- (void)stopRemoteApplication;
- (void)startRemoteApplication;
- (void)onLanguageChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

