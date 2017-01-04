//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

@interface ImageProtocol : ProtocolBaseJason
{
    NSArray *items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items;
- (void).cxx_destruct;
- (void)parseSongInfo:(id)arg1 withItem:(id)arg2 withAlbumBigUrl:(id)arg3 withAlbumSmallUrl:(id)arg4 withSingerBigUrl:(id)arg5 withSingerSmallUrl:(id)arg6;
- (void)parseSongInfo:(id)arg1 withSingerID:(unsigned long long)arg2 withSingerName:(id)arg3 withSingerBigUrl:(id)arg4 withSingerSmallUrl:(id)arg5;
- (void)parseSongInfo:(id)arg1 withAlbumID:(unsigned long long)arg2 withAlbumName:(id)arg3 withAlbumBigUrl:(id)arg4 withAlbumSmallUrl:(id)arg5;
- (_Bool)containReturnCode;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (int)cid;
- (id)getUrl;
- (id)init;

@end
