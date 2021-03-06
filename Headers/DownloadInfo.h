//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DownloadBasicInfo.h"

@class ExpInfo, NSString, SongInfo;

@interface DownloadInfo : DownloadBasicInfo
{
    int quality;
    SongInfo *song;
    ExpInfo *expInfo;
    _Bool _manualStart;
    _Bool _haveCheckDownloadRight;
    _Bool _haveDownloadRight;
    _Bool _bNeedStrongVkey;
    long long _currentDataLength;
}

@property(nonatomic) _Bool bNeedStrongVkey; // @synthesize bNeedStrongVkey=_bNeedStrongVkey;
@property(nonatomic) _Bool haveDownloadRight; // @synthesize haveDownloadRight=_haveDownloadRight;
@property(nonatomic) _Bool haveCheckDownloadRight; // @synthesize haveCheckDownloadRight=_haveCheckDownloadRight;
@property(nonatomic) _Bool manualStart; // @synthesize manualStart=_manualStart;
@property(nonatomic) long long currentDataLength; // @synthesize currentDataLength=_currentDataLength;
@property(nonatomic) int quality; // @synthesize quality;
@property(readonly, nonatomic) ExpInfo *expInfo; // @synthesize expInfo;
@property(readonly, nonatomic) SongInfo *song; // @synthesize song;
- (void).cxx_destruct;
- (_Bool)isAutoDownload;
- (id)initWithFolderSong:(struct ObjectWithExpInfo *)arg1 quality:(int)arg2;
@property(readonly, nonatomic) __weak NSString *song_Singer;
@property(readonly, nonatomic) __weak NSString *song_Name;

@end

