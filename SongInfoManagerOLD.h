#import <Foundation/Foundation.h>
@interface SongInfoManager : NSObject
{
    NSMutableDictionary *all;
    NSMutableDictionary *allSinger;
    NSMutableDictionary *allAlbum;
    NSMutableDictionary *allFolder;
    NSMutableDictionary *allImg;
    //LocalDB *localDB;
}

+ (id)keyWithSongId:(long long)arg1 Type:(int)arg2;
+ (id)keyWithSong:(id)arg1;
+ (id)sharedSongInfoManager;
- (id)init;
- (void)removeFolder:(id)arg1;
- (void)removeAlbum:(id)arg1;
- (void)removeSinger:(id)arg1;
- (void)removeSong:(id)arg1;
- (void)removeAllImg;
- (void)setImage:(id)arg1 ByKey:(id)arg2;
- (id)getImageByKey:(id)arg1;
- (void)removeImageByKey:(id)arg1;
- (id)getAlbumWithId:(unsigned long)arg1 Name:(id)arg2 NameIndex:(id)arg3;
- (id)getSingerWithId:(unsigned long)arg1 Name:(id)arg2 NameIndex:(id)arg3;
- (id)getFolderInfoWithQQ:(unsigned long)arg1 FolderId:(int)arg2 FolderType:(int)arg3 Tid:(long long)arg4 syncDB:(BOOL)arg5;
- (id)getFolderInfoWithQQ:(unsigned long)arg1 FolderId:(int)arg2 FolderType:(int)arg3 Tid:(long long)arg4;
- (id)getSongWithId:(long long)arg1 Type:(int)arg2 Name:(id)arg3 NameIndex:(id)arg4;
- (id)getSongWithId:(long long)arg1 Type:(int)arg2;

@end
