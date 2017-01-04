//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QQLyricParse : NSObject
{
    int mOffset;
    NSMutableArray *mLineLyricList;
    NSMutableArray *mLineUnused;
    int _lyricType;
}

@property(nonatomic) int lyricType; // @synthesize lyricType=_lyricType;
@property(retain, nonatomic) NSMutableArray *mLineUnused; // @synthesize mLineUnused;
@property(retain, nonatomic) NSMutableArray *mLineLyricList; // @synthesize mLineLyricList;
@property int mOffset; // @synthesize mOffset;
- (_Bool)saveToFile:(id)arg1;
- (id)formatLyricTime:(unsigned long long)arg1;
- (void)parseLine:(id)arg1;
- (_Bool)parseLineInternal:(id)arg1;
- (long long)parseTime:(id)arg1;
- (long long)parseTimeWithException:(id)arg1;
- (_Bool)_isDigitString:(id)arg1;
- (_Bool)parse:(id)arg1;
- (void)_removeInvalidedTimeIfExistValidedTime;
- (id)init;

@end
