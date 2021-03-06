//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

#import "IDEtchSessionAudioDelegate-Protocol.h"

@class IDVehicleInfo, NSString;
@protocol IDAudioServiceDelegate;

@interface IDAudioService : IDService <IDEtchSessionAudioDelegate>
{
    int _entertainmentAudioState;
    int _interruptAudioState;
    id <IDAudioServiceDelegate> _delegate;
    IDVehicleInfo *_vehicleInfo;
}

@property(readonly) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(nonatomic) int interruptAudioState; // @synthesize interruptAudioState=_interruptAudioState;
@property(nonatomic) int entertainmentAudioState; // @synthesize entertainmentAudioState=_entertainmentAudioState;
@property id <IDAudioServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)stringWithAudioConnectionType:(int)arg1;
- (id)stringWithAudioButtonEvent:(int)arg1;
- (id)stringWithAudioState:(int)arg1;
- (id)stringWithAudioPlayerState:(int)arg1;
- (void)performSelectorOnDelegate:(SEL)arg1 withObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldSendArtificialPlayCommand:(int)arg1 vehicleInfo:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)session:(id)arg1 audioService:(long long)arg2 handleConnection:(int)arg3 stateChanged:(int)arg4;
- (void)session:(id)arg1 audioService:(long long)arg2 handleMultimediaButtonEvent:(int)arg3;
- (void)session:(id)arg1 audioService:(long long)arg2 handleConnectionDenied:(int)arg3;
- (void)session:(id)arg1 audioService:(long long)arg2 handleConnectionDeactivated:(int)arg3;
- (void)session:(id)arg1 audioService:(long long)arg2 handleConnectionGranted:(int)arg3;
- (void)deactivateConnectionOfType:(int)arg1;
- (void)deactivateInterrupt;
- (void)deactivateEntertainment;
- (void)activateConnectionOfType:(int)arg1;
- (void)activateEntertainment;
- (void)activateInterrupt;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2 vehicleInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

