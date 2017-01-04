//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface KKFileInfo : NSObject
{
    _Bool isVip;
    NSString *fileid;
    NSString *fileName;
    NSString *fileLocalName;
    NSString *fileFullLocalName;
    long long filesl;
    long long fileNamePos;
    long long _fileBr;
}

+ (id)getFileInfoByLiveDict:(id)arg1;
+ (id)getFileInfoByDict:(id)arg1;
+ (id)changeClarityNameToFullLocalDesc:(id)arg1;
+ (id)changeClarityNameToLocalDesc:(id)arg1;
+ (id)resetInfoArrayClarityNames:(id)arg1;
@property(nonatomic) long long fileBr; // @synthesize fileBr=_fileBr;
@property(nonatomic) _Bool isVip; // @synthesize isVip;
@property(nonatomic) long long fileNamePos; // @synthesize fileNamePos;
@property(nonatomic) long long filesl; // @synthesize filesl;
@property(copy, nonatomic) NSString *fileFullLocalName; // @synthesize fileFullLocalName;
@property(copy, nonatomic) NSString *fileLocalName; // @synthesize fileLocalName;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName;
@property(copy, nonatomic) NSString *fileid; // @synthesize fileid;
- (long long)fileInfoCampare:(id)arg1;
- (void)dealloc;

@end

