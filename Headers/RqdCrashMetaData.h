//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RqdCrashMetaData : NSObject
{
    NSString *md5;
    NSString *file;
    long long time;
    _Bool hasNew;
    _Bool uplaoded;
}

@property _Bool uplaoded; // @synthesize uplaoded;
@property _Bool hasNew; // @synthesize hasNew;
@property long long time; // @synthesize time;
@property(retain) NSString *file; // @synthesize file;
@property(retain) NSString *md5; // @synthesize md5;
- (void)dealloc;
- (_Bool)setEncodeData:(id)arg1;
- (id)encodeData;

@end

