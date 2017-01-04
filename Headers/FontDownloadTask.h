//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DownLoadTaskDelegate-Protocol.h"

@class DownLoadTask, NSString;
@protocol DownLoadTaskProgressDelegate;

@interface FontDownloadTask : NSObject <DownLoadTaskDelegate>
{
    DownLoadTask *_downloadTask;
    _Bool _bEncrypt;
    NSString *_strFontInditifer;
    NSString *_strUrl;
    long long _fontId;
    unsigned long long _opState;
    id <DownLoadTaskProgressDelegate> _progressDelegate;
}

@property(nonatomic) __weak id <DownLoadTaskProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) unsigned long long opState; // @synthesize opState=_opState;
@property(nonatomic) _Bool bEncrypt; // @synthesize bEncrypt=_bEncrypt;
@property(nonatomic) long long fontId; // @synthesize fontId=_fontId;
@property(retain, nonatomic) NSString *strUrl; // @synthesize strUrl=_strUrl;
@property(retain, nonatomic) NSString *strFontInditifer; // @synthesize strFontInditifer=_strFontInditifer;
- (void).cxx_destruct;
- (long long)separateFontIDFromFontIdentifier:(id)arg1;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)tryToRegisterFontTime:(id)arg1;
- (void)unzipFileAsynchrously:(id)arg1 toFilePath:(id)arg2 overWrite:(_Bool)arg3;
- (void)beginDownload;
- (id)initWithFontInditifer:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

