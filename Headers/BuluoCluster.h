//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSString;

@interface BuluoCluster : ClusterInfo
{
    _Bool _showFlag;
    unsigned long long _singerId;
    unsigned long long _buluoId;
    NSString *_buluoName;
    NSString *_jumpUrl;
}

+ (id)translateToBuluoClusterFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *buluoName; // @synthesize buluoName=_buluoName;
@property(nonatomic) unsigned long long buluoId; // @synthesize buluoId=_buluoId;
@property(nonatomic) unsigned long long singerId; // @synthesize singerId=_singerId;
@property(nonatomic) _Bool showFlag; // @synthesize showFlag=_showFlag;
- (void).cxx_destruct;

@end

