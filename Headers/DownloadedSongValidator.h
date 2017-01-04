//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SimpleDownloadTaskDelegate-Protocol.h"
#import "SongLengthVerifierDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SongLengthVerifier;

@interface DownloadedSongValidator : NSObject <SongLengthVerifierDelegate, SimpleDownloadTaskDelegate>
{
    NSMutableArray *_validatingSongs;
    SongLengthVerifier *_currentVerifier;
    NSMutableSet *_reDownloadTasks;
}

+ (id)sharedValidator;
@property(retain, nonatomic) NSMutableSet *reDownloadTasks; // @synthesize reDownloadTasks=_reDownloadTasks;
@property(retain, nonatomic) SongLengthVerifier *currentVerifier; // @synthesize currentVerifier=_currentVerifier;
@property(retain, nonatomic) NSMutableArray *validatingSongs; // @synthesize validatingSongs=_validatingSongs;
- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 didDownloadFailed:(id)arg2;
- (void)downloadTask:(id)arg1 didDownloadSuccessWithFile:(id)arg2;
- (id)verifierResult:(int)arg1;
- (void)songLengthVerifyDidFinish:(id)arg1;
- (id)_getRealSongFileName:(id)arg1;
- (int)_getSongTypeFromFileName:(id)arg1;
- (unsigned long long)_getSongIDFromFileName:(id)arg1;
- (void)moveRedownloadSongFiles;
- (_Bool)hasPendingRedownloadSongsForMoving;
- (void)validateSong:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

