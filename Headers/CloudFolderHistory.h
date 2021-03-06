//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface CloudFolderHistory : NSObject
{
    unsigned long long uin;
    NSMutableSet *_folderInfos;
}

@property(retain) NSMutableSet *folderInfos; // @synthesize folderInfos=_folderInfos;
@property(nonatomic) unsigned long long uin; // @synthesize uin;
- (void).cxx_destruct;
- (void)reCheckCollectHistory;
- (void)replaceFolder:(id)arg1 toNewFolder:(id)arg2;
- (void)removeAll;
- (_Bool)isEmpty;
- (_Bool)containLove;
- (_Bool)containCreatedTaoSongList;
- (_Bool)containCreatedFolder;
- (_Bool)containFolderInfo:(id)arg1;
- (void)deleteFolderInfo:(id)arg1 checkHistory:(_Bool)arg2;
- (void)deleteFolderInfo:(id)arg1;
- (void)addFlderInfo:(id)arg1;
- (id)initWithUin:(unsigned long long)arg1;

@end

