//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (NuCommonCrypto)
- (id)aesDecryptWithKey:(id)arg1;
- (id)aesEncryptWithKey:(id)arg1;
- (id)hmacSha512DataWithKey:(id)arg1;
- (id)hmacSha384DataWithKey:(id)arg1;
- (id)hmacSha256DataWithKey:(id)arg1;
- (id)hmacSha224DataWithKey:(id)arg1;
- (id)hmacSha1DataWithKey:(id)arg1;
- (id)hmacMd5DataWithKey:(id)arg1;
- (id)sha512Data;
- (id)sha384Data;
- (id)sha256Data;
- (id)sha224Data;
- (id)sha1Data;
- (id)md5Data;
@end

