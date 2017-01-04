//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailSubscribedListProtocol.h"

@interface ChannelListProtocol : DetailSubscribedListProtocol
{
    _Bool _requestRadioListByCategory;
    int _sortid;
    unsigned long long _requestType;
}

@property(nonatomic) int sortid; // @synthesize sortid=_sortid;
@property(nonatomic) _Bool requestRadioListByCategory; // @synthesize requestRadioListByCategory=_requestRadioListByCategory;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)cgiName;
- (_Bool)canReportError;
- (int)cid;
- (id)initWithRequestType:(unsigned long long)arg1;

@end
