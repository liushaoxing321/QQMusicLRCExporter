//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CloudFolderStat : NSObject
{
    unsigned long long _uin;
}

- (void)cancelBackgroundAddStat;
- (unsigned long long)getNeedAutoSaveSongsCount;
- (void)addStatAfterHandleUpdateFolder:(_Bool)arg1;
- (void)backgroundAddStat;
- (unsigned long long)getCollectedFoldersOffLineCount;
- (unsigned long long)getCollectedSongsOffLineCount;
- (unsigned long long)getCollectedSongsCount;
- (id)initWithUin:(unsigned long long)arg1;

@end
