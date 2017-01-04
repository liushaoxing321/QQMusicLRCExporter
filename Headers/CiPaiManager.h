//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ImageManagerDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class FontSelectedInfo, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PhotoSelectedInfo, SongInfo;

@interface CiPaiManager : NSObject <ProtocolHostDelegate, ImageManagerDelegate>
{
    PhotoSelectedInfo *_photoSelectedInfo;
    FontSelectedInfo *_fontSelectedInfo;
    SongInfo *_songinfo;
    long long _nTotalLyric;
    NSArray *_arrayFontModels;
    NSMutableArray *_arrayUsedPhoto;
    NSMutableArray *_arrayDonwloadingFont;
    NSMutableArray *_arrayRigestedFont;
    NSString *_strH5DownLoadUrl;
    SongInfo *_shareSonginfo;
    NSDictionary *_fontDic;
    NSDictionary *_fontDescriptionDic;
    NSMutableDictionary *_loaclFontSidDic;
    unsigned long long _qquser;
    long long _qquserLevel;
}

+ (id)shareInstance;
@property(nonatomic) long long qquserLevel; // @synthesize qquserLevel=_qquserLevel;
@property(nonatomic) unsigned long long qquser; // @synthesize qquser=_qquser;
@property(retain, nonatomic) NSMutableDictionary *loaclFontSidDic; // @synthesize loaclFontSidDic=_loaclFontSidDic;
@property(retain, nonatomic) NSDictionary *fontDescriptionDic; // @synthesize fontDescriptionDic=_fontDescriptionDic;
@property(retain, nonatomic) NSDictionary *fontDic; // @synthesize fontDic=_fontDic;
@property(retain, nonatomic) SongInfo *shareSonginfo; // @synthesize shareSonginfo=_shareSonginfo;
@property(retain, nonatomic) NSString *strH5DownLoadUrl; // @synthesize strH5DownLoadUrl=_strH5DownLoadUrl;
@property(retain) NSMutableArray *arrayRigestedFont; // @synthesize arrayRigestedFont=_arrayRigestedFont;
@property(retain, nonatomic) NSMutableArray *arrayDonwloadingFont; // @synthesize arrayDonwloadingFont=_arrayDonwloadingFont;
@property(retain, nonatomic) NSMutableArray *arrayUsedPhoto; // @synthesize arrayUsedPhoto=_arrayUsedPhoto;
@property(retain, nonatomic) NSArray *arrayFontModels; // @synthesize arrayFontModels=_arrayFontModels;
@property(nonatomic) long long nTotalLyric; // @synthesize nTotalLyric=_nTotalLyric;
@property(retain, nonatomic) SongInfo *songinfo; // @synthesize songinfo=_songinfo;
@property(retain, nonatomic) FontSelectedInfo *fontSelectedInfo; // @synthesize fontSelectedInfo=_fontSelectedInfo;
@property(retain, nonatomic) PhotoSelectedInfo *photoSelectedInfo; // @synthesize photoSelectedInfo=_photoSelectedInfo;
- (void).cxx_destruct;
- (void)startGetFontModelList;
- (void)querySingleFontByFontId:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onImagetWithInfo:(id)arg1 error:(id)arg2;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)startDonwloadImageForShare:(id)arg1 songinfo:(id)arg2;
- (void)reportUserSharePoster:(id)arg1;
- (void)startDownloadFont:(id)arg1 fontInditifer:(id)arg2 isEncrypt:(_Bool)arg3;
- (_Bool)isFontDownloading:(id)arg1;
- (_Bool)isFontDownloaded:(id)arg1 isEncrypt:(_Bool)arg2;
- (_Bool)registerFontWithUrl:(id)arg1 isEncrypt:(_Bool)arg2;
- (_Bool)registerEncryptFont:(id)arg1;
- (_Bool)registerFont:(id)arg1;
- (void)registerAllDonwloadedFont;
- (void)checkDefaultCiPaiModelFont;
- (_Bool)isFontCanBeUse:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)startDonwloadPosterList:(id)arg1;
- (id)getFontModelFromFontName:(id)arg1;
- (void)saveFontModelsDataToDisk;
- (void)clearFontModelsData;
- (void)addServerArray:(id)arg1 order:(id)arg2;
- (_Bool)saveSingleTextModel:(id)arg1 archive:(_Bool)arg2;
- (id)getFontModelDataPath;
- (void)saveUsedPhotoDataToDisk;
- (void)storePhotoUseed:(id)arg1;
- (void)storeImageFileToLaterestUsed:(id)arg1 url:(id)arg2;
- (void)storeImageToLaterestUsed:(id)arg1 url:(id)arg2 isAssetPhoto:(_Bool)arg3;
- (void)deleteOldPhoto:(id)arg1;
- (_Bool)shouldInserPhotoOfUrl:(id)arg1;
- (id)getLaterestUsedPhotos;
- (void)resetFontAndPhotoSelectedInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

