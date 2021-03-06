//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQFileHelper : NSObject
{
}

+ (id)findFile:(id)arg1 fileName:(id)arg2;
+ (_Bool)isDiskFull;
+ (void)copyFile:(id)arg1 ToNewFile:(id)arg2;
+ (void)moveFile:(id)arg1 ToNewFile:(id)arg2;
+ (unsigned long long)getFileSystemFreeSize;
+ (unsigned long long)getFileSizeWithPath:(id)arg1;
+ (id)getTemporaryPath;
+ (id)getLibraryPath;
+ (id)getDocumentsPath;
+ (_Bool)deleteDirectoryWithPath:(id)arg1;
+ (_Bool)directoryExistsWithPath:(id)arg1;
+ (_Bool)createDirectoryWithPath:(id)arg1;
+ (_Bool)deleteFileWithPath:(id)arg1;
+ (_Bool)createFileWithPath:(id)arg1;
+ (_Bool)fileExistsWithPath:(id)arg1;

@end

