//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQLineLyric.h"

@class NSMutableArray;

@interface QQLineLyricQRC : QQLineLyric
{
    NSMutableArray *_wordsLyricList;
    long long _duration;
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *wordsLyricList; // @synthesize wordsLyricList=_wordsLyricList;
- (id)initWithTime:(long long)arg1 text:(id)arg2 words:(id)arg3;

@end
