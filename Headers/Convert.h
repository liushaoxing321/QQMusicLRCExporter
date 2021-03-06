//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetReader, AVAssetReaderOutput, AVAssetWriter, AVAssetWriterInput, AVURLAsset, NSString, NSURL;
@protocol ConvertDelegate;

@interface Convert : NSObject
{
    NSURL *_urlFileInput;
    NSURL *_urlFileOutput;
    NSString *_strUuid;
    id <ConvertDelegate> _convertDelegate;
    AVURLAsset *_songAsset;
    AVAssetReaderOutput *_assetReaderOutput;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
}

@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVAssetReaderOutput *assetReaderOutput; // @synthesize assetReaderOutput=_assetReaderOutput;
@property(retain, nonatomic) AVURLAsset *songAsset; // @synthesize songAsset=_songAsset;
@property(nonatomic) __weak id <ConvertDelegate> convertDelegate; // @synthesize convertDelegate=_convertDelegate;
@property(retain, nonatomic) NSString *strUuid; // @synthesize strUuid=_strUuid;
@property(retain, nonatomic) NSURL *urlFileOutput; // @synthesize urlFileOutput=_urlFileOutput;
@property(retain, nonatomic) NSURL *urlFileInput; // @synthesize urlFileInput=_urlFileInput;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fireConvertDone;
- (void)convertDone;
- (_Bool)start;
- (id)initWithFile:(id)arg1 uuid:(id)arg2 sessionConvertProtocol:(id)arg3;

@end

