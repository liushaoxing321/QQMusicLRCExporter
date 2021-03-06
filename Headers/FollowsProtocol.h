//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

@interface FollowsProtocol : ProtocolBaseJason
{
    int _type;
    unsigned long long _uin;
    NSArray *_followsList;
    long long _totalnum;
    struct _NSRange _range;
}

@property(nonatomic) long long totalnum; // @synthesize totalnum=_totalnum;
@property(retain, nonatomic) NSArray *followsList; // @synthesize followsList=_followsList;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (_Bool)canReportError;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)initWithUin:(unsigned long long)arg1 range:(struct _NSRange)arg2 type:(int)arg3;

@end

