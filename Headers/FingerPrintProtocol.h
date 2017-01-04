//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSData, NSString;

@interface FingerPrintProtocol : ProtocolBase
{
    NSData *_dataFingerPrint;
    unsigned long long _iDuration;
    unsigned long long _iSongIdMatched;
    float _fMatchRate;
    NSString *_strSinger;
    NSString *_strAlbum;
    NSString *_strLyric;
    _Bool _bManualCause;
    int _lyricType;
}

@property(nonatomic) int lyricType; // @synthesize lyricType=_lyricType;
@property(readonly, nonatomic) NSString *strLyric; // @synthesize strLyric=_strLyric;
@property(readonly, nonatomic) NSString *strAlbum; // @synthesize strAlbum=_strAlbum;
@property(readonly, nonatomic) NSString *strSinger; // @synthesize strSinger=_strSinger;
@property(readonly, nonatomic) unsigned long long iSongIdMatched; // @synthesize iSongIdMatched=_iSongIdMatched;
@property(retain, nonatomic) NSData *dataFingerPrint; // @synthesize dataFingerPrint=_dataFingerPrint;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (void)start;
- (id)getUrl;
- (_Bool)canReportError;
- (id)initWithFingerPrint:(id)arg1 andDuration:(unsigned long long)arg2 manualCause:(_Bool)arg3;

@end
