//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SongDBAdapter : NSObject
{
}

+ (void)UpdateAlbumName:(id)arg1 ByAlbumId:(int)arg2;
+ (void)UpdateSingerName:(id)arg1 BySingerId:(int)arg2;
+ (void)UpdateZeroAlbum:(id)arg1 NewAlbumId:(int)arg2;
+ (void)UpdateZeroSinger:(id)arg1 NewSingerId:(int)arg2;
+ (id)querySongWhere:(id)arg1;
+ (void)wirteBigFile;
+ (id)k:(id)arg1 T:(id)arg2 defaultTEXT:(id)arg3;
+ (id)k:(id)arg1 T:(id)arg2 defaultTEXT:(id)arg3 withSep:(_Bool)arg4;
+ (id)k:(id)arg1 T:(id)arg2 defaultInt:(int)arg3;
+ (id)k:(id)arg1 T:(id)arg2;
+ (id)k:(id)arg1 UnsignedLongLong:(unsigned long long)arg2;
+ (id)k:(id)arg1 LongLong:(long long)arg2;
+ (id)rk:(id)arg1 String:(id)arg2;
+ (id)k:(id)arg1 String:(id)arg2;
+ (id)k:(id)arg1 Column:(id)arg2;
+ (id)rk:(id)arg1 Int:(int)arg2;
+ (id)k:(id)arg1 UnsignedLong:(unsigned long long)arg2;
+ (id)k:(id)arg1 Int:(int)arg2;
- (id)querySongBySongInfoKey:(id)arg1;
- (id)_downloadedSongs;
- (void)_findAutoSavedSongByUin:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)_lastUsedUin;
- (id)getAllNormalSongID;
- (id)getAllNormalSongFilePath;
- (void)arrangeDb;
- (void)cleanDb;
- (id)getAllOldFolder;
- (id)getAllCacheSong1;
- (_Bool)isTableExistByTableName:(id)arg1 DBAdataper:(id)arg2;
- (int)AlterTable_26_27:(CDUnknownBlockType)arg1;
- (int)AlterTable_25_26:(CDUnknownBlockType)arg1;
- (int)AlterTable_24_25:(CDUnknownBlockType)arg1;
- (int)AlterTable_23_24:(CDUnknownBlockType)arg1;
- (int)AlterTable_22_23:(CDUnknownBlockType)arg1;
- (int)AlterTable_21_22:(CDUnknownBlockType)arg1;
- (int)AlterTable_20_21:(CDUnknownBlockType)arg1;
- (int)AlterTable_19_20:(CDUnknownBlockType)arg1;
- (int)AlterTable_18_19:(CDUnknownBlockType)arg1;
- (int)AlterTable_17_18:(CDUnknownBlockType)arg1;
- (int)AlterTable_16_17:(CDUnknownBlockType)arg1;
- (int)AlterTable_15_16:(CDUnknownBlockType)arg1;
- (int)AlterTable_14_15:(CDUnknownBlockType)arg1;
- (int)AlterTable_13_14:(CDUnknownBlockType)arg1;
- (int)AlterTable_12_13:(CDUnknownBlockType)arg1;
- (int)AlterTable_11_12:(CDUnknownBlockType)arg1;
- (int)AlterTable_10_11:(CDUnknownBlockType)arg1;
- (int)AlterTable_9_10:(CDUnknownBlockType)arg1;
- (int)AlterTable_8_9:(CDUnknownBlockType)arg1;
- (int)AlterTable_7_8:(CDUnknownBlockType)arg1;
- (int)AlterTable_6_7:(CDUnknownBlockType)arg1;
- (int)AlterTable_5_6:(CDUnknownBlockType)arg1;
- (int)AlterTable_4_5:(CDUnknownBlockType)arg1;
- (int)AlterTable_3_4:(CDUnknownBlockType)arg1;
- (int)AlterTable_2_3:(CDUnknownBlockType)arg1;
- (int)AlterTable_1_2:(CDUnknownBlockType)arg1;
- (_Bool)updateWithSongs:(id)arg1;
- (_Bool)updateWithSong:(id)arg1;
- (_Bool)updateWithSong:(id)arg1 colunmInfos:(id)arg2;
- (_Bool)updateWithDB:(id)arg1 Song:(id)arg2;
- (_Bool)deleteWithDB:(id)arg1 Id:(unsigned long long)arg2 Type:(int)arg3;
- (_Bool)insertWithDB:(id)arg1 Song:(id)arg2;
- (_Bool)deleteSongTable;
- (_Bool)createSongTable:(id)arg1;
- (id)strForAddColumn:(id)arg1 toTable:(id)arg2 type:(long long)arg3;

@end

