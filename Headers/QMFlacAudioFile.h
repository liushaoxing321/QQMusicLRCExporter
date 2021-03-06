//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "KSAudioFileProtocol-Protocol.h"

@class KSAudioDataProvider, NSString;

@interface QMFlacAudioFile : NSObject <KSAudioFileProtocol>
{
    struct AudioStreamBasicDescription _fileFormat;
    struct AudioStreamBasicDescription _outDes;
    _Bool _bReadyParsing;
    _Bool _bEof;
    unsigned int _averageBytesPerSecond;
    unsigned int _ioNumBytes;
    unsigned int _ioNumPackets;
    unsigned int _ioOutNumBytes;
    KSAudioDataProvider *_audioDataProvider;
    long long _fileReadOffset;
    unsigned long long _totalSamples;
    double _fileDurion;
    CDStruct_15fed524 *_flacDecoder;
    void *_outBuffer;
    long long _curPacketOffset;
}

@property(nonatomic) long long curPacketOffset; // @synthesize curPacketOffset=_curPacketOffset;
@property(nonatomic) unsigned int ioOutNumBytes; // @synthesize ioOutNumBytes=_ioOutNumBytes;
@property(nonatomic) unsigned int ioNumPackets; // @synthesize ioNumPackets=_ioNumPackets;
@property(nonatomic) unsigned int ioNumBytes; // @synthesize ioNumBytes=_ioNumBytes;
@property(nonatomic) void *outBuffer; // @synthesize outBuffer=_outBuffer;
@property(nonatomic) _Bool bEof; // @synthesize bEof=_bEof;
@property(nonatomic) CDStruct_15fed524 *flacDecoder; // @synthesize flacDecoder=_flacDecoder;
@property(nonatomic) _Bool bReadyParsing; // @synthesize bReadyParsing=_bReadyParsing;
@property(nonatomic) unsigned int averageBytesPerSecond; // @synthesize averageBytesPerSecond=_averageBytesPerSecond;
@property(nonatomic) double fileDurion; // @synthesize fileDurion=_fileDurion;
@property(nonatomic) unsigned long long totalSamples; // @synthesize totalSamples=_totalSamples;
@property(nonatomic) long long fileReadOffset; // @synthesize fileReadOffset=_fileReadOffset;
@property(retain, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
- (void).cxx_destruct;
- (void)buildFileFormat:(const CDStruct_4903f7c2 *)arg1;
- (int)writeData:(const CDStruct_47481730 *)arg1 buffer:(const int **)arg2;
- (int)readData:(char *)arg1 Length:(unsigned long long *)arg2;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (long long)seekPacketPos:(unsigned long long)arg1;
- (_Bool)isFileReadyToParsing;
- (_Bool)open:(id *)arg1;
- (_Bool)isOpened;
- (void)close;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int databytesPerSecond;
@property(readonly, nonatomic) unsigned int maxPacketSize;
@property(readonly, nonatomic) long long lastReadingPos;
@property(readonly, nonatomic) _Bool isEof;
- (struct AudioStreamBasicDescription *)outputDes;
@property(readonly, nonatomic) struct AudioStreamBasicDescription fileFormat;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

