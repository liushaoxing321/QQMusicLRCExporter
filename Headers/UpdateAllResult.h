//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ListBase, NSArray;

@interface UpdateAllResult : NSObject
{
    _Bool _updateCloudFolderLocalSongsCount;
    NSArray *_allSongs;
    NSArray *_albums;
    NSArray *_singers;
    ListBase *_allsongsList;
    ListBase *_albumsList;
    ListBase *_singersList;
    ListBase *_albumSongsList;
    ListBase *_singerSongsList;
    NSArray *_allsongsIndexItems;
    NSArray *_albumsIndexItems;
    NSArray *_singersIndexItems;
    NSArray *_albumSongsIndexItems;
    NSArray *_singerSongsIndexItems;
    NSArray *_iPodSongsIndexItems;
    NSArray *_importSongsIndexItems;
}

@property _Bool updateCloudFolderLocalSongsCount; // @synthesize updateCloudFolderLocalSongsCount=_updateCloudFolderLocalSongsCount;
@property(retain) NSArray *importSongsIndexItems; // @synthesize importSongsIndexItems=_importSongsIndexItems;
@property(retain) NSArray *iPodSongsIndexItems; // @synthesize iPodSongsIndexItems=_iPodSongsIndexItems;
@property(retain) NSArray *singerSongsIndexItems; // @synthesize singerSongsIndexItems=_singerSongsIndexItems;
@property(retain) NSArray *albumSongsIndexItems; // @synthesize albumSongsIndexItems=_albumSongsIndexItems;
@property(retain) NSArray *singersIndexItems; // @synthesize singersIndexItems=_singersIndexItems;
@property(retain) NSArray *albumsIndexItems; // @synthesize albumsIndexItems=_albumsIndexItems;
@property(retain) NSArray *allsongsIndexItems; // @synthesize allsongsIndexItems=_allsongsIndexItems;
@property(retain) ListBase *singerSongsList; // @synthesize singerSongsList=_singerSongsList;
@property(retain) ListBase *albumSongsList; // @synthesize albumSongsList=_albumSongsList;
@property(retain) ListBase *singersList; // @synthesize singersList=_singersList;
@property(retain) ListBase *albumsList; // @synthesize albumsList=_albumsList;
@property(retain) ListBase *allsongsList; // @synthesize allsongsList=_allsongsList;
@property(retain) NSArray *singers; // @synthesize singers=_singers;
@property(retain) NSArray *albums; // @synthesize albums=_albums;
@property(retain) NSArray *allSongs; // @synthesize allSongs=_allSongs;
- (void).cxx_destruct;
- (id)init;

@end

