//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ListBase, NSMutableDictionary;

@interface AddToDownloadingResult : NSObject
{
    unsigned int _addedToDownloadingCount;
    unsigned int _addedToDownloadedCount;
    ListBase *__self;
    ListBase *_downloaded;
    ListBase *_downloading;
    NSMutableDictionary *_listDownLoadTasks;
}

@property unsigned int addedToDownloadedCount; // @synthesize addedToDownloadedCount=_addedToDownloadedCount;
@property unsigned int addedToDownloadingCount; // @synthesize addedToDownloadingCount=_addedToDownloadingCount;
@property(retain) NSMutableDictionary *listDownLoadTasks; // @synthesize listDownLoadTasks=_listDownLoadTasks;
@property(retain) ListBase *downloading; // @synthesize downloading=_downloading;
@property(retain) ListBase *downloaded; // @synthesize downloaded=_downloaded;
@property(retain) ListBase *_self; // @synthesize _self=__self;
- (void).cxx_destruct;

@end
