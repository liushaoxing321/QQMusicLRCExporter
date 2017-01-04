//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DCAAudioEventObserver : NSObject
{
    CDUnknownBlockType _routeChangedBlock;
    CDUnknownBlockType _audioInterruptedBlock;
    CDUnknownBlockType _servicesLostBlock;
    CDUnknownBlockType _servicesResetBlock;
    CDUnknownBlockType _deviceVolumeChangedBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType deviceVolumeChangedBlock; // @synthesize deviceVolumeChangedBlock=_deviceVolumeChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType servicesResetBlock; // @synthesize servicesResetBlock=_servicesResetBlock;
@property(copy, nonatomic) CDUnknownBlockType servicesLostBlock; // @synthesize servicesLostBlock=_servicesLostBlock;
@property(copy, nonatomic) CDUnknownBlockType audioInterruptedBlock; // @synthesize audioInterruptedBlock=_audioInterruptedBlock;
@property(copy, nonatomic) CDUnknownBlockType routeChangedBlock; // @synthesize routeChangedBlock=_routeChangedBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeDeviceVolumeChangedBlock;
- (void)servicesReset:(id)arg1;
- (void)servicesLost:(id)arg1;
- (void)audioInterrupted:(id)arg1;
- (void)routeChanged:(id)arg1;
- (void)setSessionObservers;

@end
