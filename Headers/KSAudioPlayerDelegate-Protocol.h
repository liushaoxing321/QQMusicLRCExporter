//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol KSAudioPlayerProtocol;

@protocol KSAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(id <KSAudioPlayerProtocol>)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id <KSAudioPlayerProtocol>)arg1 status:(unsigned long long)arg2 params:(NSDictionary *)arg3;
@end

