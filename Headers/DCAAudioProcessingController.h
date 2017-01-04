//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DCAClient, NSLock;

@interface DCAAudioProcessingController : NSObject
{
    int _inputChannelMask;
    NSLock *processingStateLock;
    DCAClient *_client;
}

@property(nonatomic) __weak DCAClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)linkerHelper;
- (void)applyProcessingWorkspaceFromData:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)updateAvailableAudioRoutes;
- (int)currentAudioRoutes;
@property(readonly, nonatomic) int currentAudioRouteEnum;
- (int)getInputChannelMask;
- (void)setInputChannelMask:(int)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (int)getSampleRate;
- (void)setSampleRate:(int)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (void)disable;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isDisabled;
- (_Bool)getHPXPremixedContentFlag;
- (void)setHPXPremixedContentFlag:(_Bool)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isEnabled;
- (void)setProcessingEnabled:(_Bool)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;
- (id)initWithClient:(id)arg1;
- (id)init;
- (int)inputChannelMask;

@end

