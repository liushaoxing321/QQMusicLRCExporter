//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RqdLocalObject.h"

@class NSString;

@interface RqdAppInfo : RqdLocalObject
{
    NSString *processName;
    NSString *cpuArchVersion;
    NSString *processUUID;
    NSString *processBaseAddr;
    NSString *version;
    NSString *endAddress;
    NSString *path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *endAddress; // @synthesize endAddress;
@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *processBaseAddr; // @synthesize processBaseAddr;
@property(retain, nonatomic) NSString *cpuArchVersion; // @synthesize cpuArchVersion;
@property(retain, nonatomic) NSString *processUUID; // @synthesize processUUID;
@property(retain, nonatomic) NSString *processName; // @synthesize processName;
- (id)description;
- (void)dealloc;
- (void)createWUPModel:(struct AppInfo *)arg1;

@end

