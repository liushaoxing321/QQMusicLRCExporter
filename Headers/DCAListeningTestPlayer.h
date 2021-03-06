//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DCAAudioProcessingController, NSArray, NSURL;

@interface DCAListeningTestPlayer : NSObject
{
    struct OpaqueAudioComponentInstance *_remoteIOUnit;
    struct OpaqueAudioComponentInstance *_filePlayerUnit;
    int _remoteIONode;
    int _filePlayerNode;
    struct OpaqueAUGraph *_auGraph;
    struct OpaqueAudioComponentInstance *_dcaAudioUnit;
    int _dcaAudioNode;
    struct AudioStreamBasicDescription _asbd;
    unsigned int _mChannelsPerFrame;
    NSArray *metaData;
    DCAAudioProcessingController *audioProcessingController;
    struct DCAListeningTestRenderCallbackContext callbackContext;
    _Bool playing;
    _Bool _loop;
    _Bool interupted;
    int _numberOfLoop;
    NSURL *_fileToPlay;
    double _volume;
    DCAAudioProcessingController *__audioProcessingController;
}

@property(retain) DCAAudioProcessingController *_audioProcessingController; // @synthesize _audioProcessingController=__audioProcessingController;
@property(nonatomic, getter=isInterupted) _Bool interupted; // @synthesize interupted;
@property(nonatomic) int numberOfLoop; // @synthesize numberOfLoop=_numberOfLoop;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic, getter=shouldLoop) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing;
@property(retain, nonatomic) NSURL *fileToPlay; // @synthesize fileToPlay=_fileToPlay;
- (void).cxx_destruct;
- (void)showPlayerStatus;
- (unsigned int)getmChannelsPerFrame;
- (void)printASBD:(struct AudioStreamBasicDescription)arg1;
- (void)updateAudioGraphSampleRate:(double)arg1;
- (int)initializeAudioGraph;
- (void)disconnectGraphUnits;
- (void)connectGraphUnits;
- (void)stopAudioGraph;
- (void)startAudioGraph;
- (void)createAudioGraph;
- (void)addDCACallback;
- (void)initializeDCANode;
- (void)initializeFilePlayerNode;
- (void)initializeRemoteIONode;
- (float)getAudioUnitVolume;
- (void)setAudioUnitVolume:(float)arg1;
- (void)stop;
- (void)play;
- (void)resetAudio;
- (id)getFileToPlay;
- (void)setupFilePlayer;
- (_Bool)callbackContextDataBufferIsAllocated;
- (void)resetCallbackContext;
- (void)deallocateCallbackContextBuffer;
- (_Bool)allocateCallbackContextBufferOfSize:(unsigned int)arg1;
- (void)audioInterrupted:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFile:(id)arg1;

@end

