//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDEtchSession.h"

@interface IDEtchSession (VoiceRecorder)
- (void)handleVoiceRecorderEvent:(long long)arg1 voiceRecorderEvent:(int)arg2 sequence:(long long)arg3 payload:(id)arg4;
- (void)voiceRecorderService:(long long)arg1 sequence:(long long)arg2 exportResult:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)voiceRecorderService:(long long)arg1 sequence:(long long)arg2 exportResult:(_Bool)arg3 error:(id *)arg4;
- (_Bool)voiceRecorderService:(long long)arg1 disposeWithError:(id *)arg2;
- (long long)registerVoiceRecorderServiceWithIdentifier:(id)arg1 error:(id *)arg2;
@end

