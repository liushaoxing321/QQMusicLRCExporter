//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FolderInfo, NSString;

@interface QueryDbCondition : NSObject
{
    FolderInfo *_folderInfo;
    NSString *_orderBy;
}

+ (id)createWithFolderInfo:(id)arg1 orderBy:(id)arg2;
@property(retain) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(retain) FolderInfo *folderInfo; // @synthesize folderInfo=_folderInfo;
- (void).cxx_destruct;

@end

