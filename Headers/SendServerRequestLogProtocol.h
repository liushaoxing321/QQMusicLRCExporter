//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ServerRequestLogItem;

@interface SendServerRequestLogProtocol : ProtocolBaseJason
{
    _Bool _pcHost;
    ServerRequestLogItem *_serverRequestLogItem;
}

@property(nonatomic) _Bool pcHost; // @synthesize pcHost=_pcHost;
@property(retain, nonatomic) ServerRequestLogItem *serverRequestLogItem; // @synthesize serverRequestLogItem=_serverRequestLogItem;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

