//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSDictionary;

@interface TodayProtocol : ProtocolBaseJason
{
    NSArray *_todayItems;
    NSDictionary *_categoryId2SongListId;
}

@property(retain) NSDictionary *categoryId2SongListId; // @synthesize categoryId2SongListId=_categoryId2SongListId;
@property(retain) NSArray *todayItems; // @synthesize todayItems=_todayItems;
- (void).cxx_destruct;
- (_Bool)_isValidedTodayItem:(id)arg1;
- (id)_parseTodayItem:(id)arg1;
- (id)_parseTodayItems:(id)arg1;
- (id)_parseCategoryId2SongListIds:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end

