//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

@interface FunsProtocol : ProtocolBaseJason
{
    int type;
    NSArray *fansList;
    unsigned long long uin;
    long long totalnum;
    struct _NSRange range;
}

@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) long long totalnum; // @synthesize totalnum;
@property(nonatomic) struct _NSRange range; // @synthesize range;
@property(nonatomic) unsigned long long uin; // @synthesize uin;
@property(retain, nonatomic) NSArray *fansList; // @synthesize fansList;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (_Bool)canReportError;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)initWithUin:(unsigned long long)arg1 type:(int)arg2 range:(struct _NSRange)arg3;

@end

