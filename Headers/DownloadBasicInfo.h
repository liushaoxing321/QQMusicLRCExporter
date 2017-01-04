//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSString;

@interface DownloadBasicInfo : ClusterInfo
{
    NSString *download_url;
    NSString *saveFilePath;
    float download_percent;
    int download_state;
    long long storeDataTotalLenth;
    long long currentStoredDataLength;
    _Bool _forbiddenWangsuFreeFlow;
    NSString *_originHost;
}

@property(nonatomic) _Bool forbiddenWangsuFreeFlow; // @synthesize forbiddenWangsuFreeFlow=_forbiddenWangsuFreeFlow;
@property(readonly, nonatomic) NSString *originHost; // @synthesize originHost=_originHost;
@property(nonatomic) long long currentStoredDataLength; // @synthesize currentStoredDataLength;
@property(nonatomic) long long storeDataTotalLenth; // @synthesize storeDataTotalLenth;
@property(nonatomic) int download_state; // @synthesize download_state;
@property(nonatomic) float download_percent; // @synthesize download_percent;
@property(readonly, nonatomic) NSString *saveFilePath; // @synthesize saveFilePath;
@property(readonly, nonatomic) NSString *download_url; // @synthesize download_url;
- (void).cxx_destruct;
- (_Bool)upDateUrlHost:(id)arg1 WithIP:(id)arg2;
- (id)saveFilePathWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 AndSaveFilePath:(id)arg2;

@end

