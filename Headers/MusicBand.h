//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MusicBand : NSObject
{
    struct CMusicBand *_pMusicBand;
}

@property struct CMusicBand *pMusicBand; // @synthesize pMusicBand=_pMusicBand;
- (int)setUpdateMs:(int)arg1;
- (id)getBands;
- (int)inputData:(const char *)arg1 bufferSize:(int)arg2 channel:(int)arg3 sampleRate:(int)arg4 bitDeepth:(int)arg5;
- (void)dealloc;
- (id)init;

@end
