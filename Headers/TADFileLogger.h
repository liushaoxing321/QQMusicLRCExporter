//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TADFileLogger : NSObject
{
    unsigned long long _logLevel;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void)writeLogToFile:(unsigned long long)arg1 domain:(id)arg2 message:(id)arg3;
- (void)log:(unsigned long long)arg1 file:(const char *)arg2 line:(int)arg3 method:(const char *)arg4 message:(id)arg5;
- (void)log:(unsigned long long)arg1 domain:(id)arg2 message:(id)arg3;
- (void)log:(unsigned long long)arg1 message:(id)arg2;
- (id)init;

@end

