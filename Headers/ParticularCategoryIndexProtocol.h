//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ListBase, SingerCategory;

@interface ParticularCategoryIndexProtocol : ProtocolBaseJason
{
    int retState;
    ListBase *list;
    SingerCategory *cluster;
}

@property(nonatomic) int retState; // @synthesize retState;
@property(nonatomic) __weak ListBase *list; // @synthesize list;
@property(retain, nonatomic) SingerCategory *cluster; // @synthesize cluster;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (_Bool)canReportError;
- (id)getUrl;
- (id)init;

@end

