//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

@interface SongLoveShareReportProtocol : ProtocolBaseJason
{
    int _loveCnt;
    int _shareCnt;
    unsigned long long _song_ID;
    NSString *_friendQQ;
}

@property(retain, nonatomic) NSString *friendQQ; // @synthesize friendQQ=_friendQQ;
@property(nonatomic) int shareCnt; // @synthesize shareCnt=_shareCnt;
@property(nonatomic) int loveCnt; // @synthesize loveCnt=_loveCnt;
@property(nonatomic) unsigned long long song_ID; // @synthesize song_ID=_song_ID;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end
