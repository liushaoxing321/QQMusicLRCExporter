//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class Cluster, NSMutableArray;

@interface FriendShareProtocol : ProtocolBaseJason
{
    _Bool bRefresh;
    Cluster *_cluster;
    NSMutableArray *_resultArray;
}

@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) Cluster *cluster; // @synthesize cluster=_cluster;
@property(nonatomic) _Bool bRefresh; // @synthesize bRefresh;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end

