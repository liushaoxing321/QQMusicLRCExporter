//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, QAudioStreamBasicDescription;
@protocol AudioStreamBaseDelegate;

@interface AudioStreamBase : NSObject
{
    id <AudioStreamBaseDelegate> delegate;
    _Bool bContinus;
    long long audioDataOffset;
    unsigned long long audioDataByteCount;
    unsigned long long audioDataPacketCount;
    unsigned int audioDataBitRate;
    unsigned long long qqMusicProcessedPacketsCount;
    unsigned long long qqMusicProcessedPacketsSizeTotal;
    _Bool bCanSeek;
    unsigned int maxAudioQueueBufferSize;
    _Bool _disContinuous;
    _Bool _isErr;
    QAudioStreamBasicDescription *_audioOutputDesc;
    QAudioStreamBasicDescription *_audioInputDesc;
    double _duration;
    NSError *_error;
}

+ (int)minBufferingSize:(unsigned int)arg1;
+ (unsigned int)GetFileTypeByData:(id)arg1;
@property _Bool isErr; // @synthesize isErr=_isErr;
@property(retain) NSError *error; // @synthesize error=_error;
@property double duration; // @synthesize duration=_duration;
@property _Bool disContinuous; // @synthesize disContinuous=_disContinuous;
@property(retain) QAudioStreamBasicDescription *audioInputDesc; // @synthesize audioInputDesc=_audioInputDesc;
@property(retain) QAudioStreamBasicDescription *audioOutputDesc; // @synthesize audioOutputDesc=_audioOutputDesc;
@property(readonly) _Bool bCanSeek; // @synthesize bCanSeek;
@property(readonly) unsigned int audioDataBitRate; // @synthesize audioDataBitRate;
@property(readonly) unsigned long long audioDataPacketCount; // @synthesize audioDataPacketCount;
@property(readonly) unsigned long long audioDataByteCount; // @synthesize audioDataByteCount;
@property(readonly) long long audioDataOffset; // @synthesize audioDataOffset;
@property _Bool bContinus; // @synthesize bContinus;
@property __weak id <AudioStreamBaseDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (int)getRemainDataLength;
- (int)getMaxAudioQueueBufferSize;
- (_Bool)seekAudioStream:(double)arg1 realTime:(double *)arg2 realBytes:(long long *)arg3 ioFlag:(unsigned int *)arg4;
- (_Bool)parseAudioStreamWithData:(id)arg1 Flags:(int)arg2;
- (double)streamDuration;
- (void)destroy;
- (_Bool)createAudioStream:(unsigned int)arg1;

@end
