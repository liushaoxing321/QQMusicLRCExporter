//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ImportSongInfo : NSObject
{
    _Bool _imported;
    long long _file_id;
    NSString *_file_name;
    long long _file_size;
    NSString *_file_path;
    unsigned long long _song_id;
    NSString *_song_title;
    NSString *_song_singer;
    NSString *_song_album;
    unsigned long long _song_type;
    long long _bit_rate;
    long long _duration;
    long long _fmt_rate;
}

+ (id)translateFromDict:(id)arg1;
@property(nonatomic) _Bool imported; // @synthesize imported=_imported;
@property(nonatomic) long long fmt_rate; // @synthesize fmt_rate=_fmt_rate;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long bit_rate; // @synthesize bit_rate=_bit_rate;
@property(nonatomic) unsigned long long song_type; // @synthesize song_type=_song_type;
@property(retain, nonatomic) NSString *song_album; // @synthesize song_album=_song_album;
@property(retain, nonatomic) NSString *song_singer; // @synthesize song_singer=_song_singer;
@property(retain, nonatomic) NSString *song_title; // @synthesize song_title=_song_title;
@property(nonatomic) unsigned long long song_id; // @synthesize song_id=_song_id;
@property(retain, nonatomic) NSString *file_path; // @synthesize file_path=_file_path;
@property(nonatomic) long long file_size; // @synthesize file_size=_file_size;
@property(retain, nonatomic) NSString *file_name; // @synthesize file_name=_file_name;
@property(nonatomic) long long file_id; // @synthesize file_id=_file_id;
- (void).cxx_destruct;

@end

