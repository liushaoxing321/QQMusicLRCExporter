//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager;

@interface QMFileHelper : NSObject
{
    NSFileManager *fileManager;
}

+ (_Bool)makeEnoughSpaceForDBSuccess;
+ (void)statFileOprtionError:(unsigned long long)arg1;
+ (_Bool)checkFileOperationForPath:(id)arg1;
+ (float)spaceForCreateDBFile;
+ (void)checkDBHoldPlaceFile;
+ (void)checkFileOperation;
+ (id)fileAttributeWithPath:(id)arg1;
+ (id)cutPath:(id)arg1 withPrefix:(id)arg2;
+ (id)calcMd5:(id)arg1 headerCheck:(_Bool)arg2;
+ (long long)getFullFileSizeWithPath:(id)arg1;
+ (_Bool)setFilePath:(id)arg1 withFullFileSizeAttribute:(long long)arg2;
+ (id)extended1WithPath:(id)arg1 key:(id)arg2;
+ (_Bool)extended1WithPath:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (_Bool)needResetFileProtection:(id)arg1;
+ (void)setImportantFileProtectionNone;
+ (void)setAllFileProtectionNone:(CDUnknownBlockType)arg1;
+ (int)setFileProtectionNone:(id)arg1;
+ (_Bool)setFileAttributes:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)getFileCreateDate:(id)arg1;
+ (id)getAllFileAtDir:(id)arg1;
+ (id)get2xPath:(id)arg1;
+ (_Bool)addSkipBackupAttributeToItemAtPath:(id)arg1;
+ (_Bool)copyFile:(id)arg1 ToNewFile:(id)arg2;
+ (_Bool)moveFile:(id)arg1 ToNewFile:(id)arg2;
+ (_Bool)moveDir:(id)arg1 toNewDir:(id)arg2;
+ (void)checkReplaceOrRemoveImageFileInMainThread:(id)arg1;
+ (long long)getFileSizeWithPath:(id)arg1;
+ (id)getResourcePath;
+ (id)getLibraryCachesPath;
+ (id)getLibraryQQMusicPath;
+ (id)getLibraryPath;
+ (id)getDocumentsPath;
+ (_Bool)deleteDirWithPath:(id)arg1;
+ (_Bool)dirIsExistWithPath:(id)arg1;
+ (void)createNotBackupDirIfMissing:(id)arg1;
+ (_Bool)createDirWithPath:(id)arg1;
+ (_Bool)deleteFileWithPath:(id)arg1;
+ (_Bool)createFileWithPath:(id)arg1;
+ (_Bool)createFileWithPath:(id)arg1 error:(id *)arg2;
+ (_Bool)fileIsExistWithPath:(id)arg1 isDir:(_Bool *)arg2;
+ (_Bool)fileIsExistWithPath:(id)arg1;
+ (id)getQQMusicDatabaseDirPath;
+ (id)getQQMusicDirPath;
+ (id)getFullFilePath:(id)arg1;
+ (id)getInboxPath;
+ (id)shareFileHelper;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager;

@end

