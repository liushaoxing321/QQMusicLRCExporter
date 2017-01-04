//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "TADDownloaderItemDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, TADAdSelectorItem, TADMediaExtra, TADShareItem;

@interface TADMediaItem : NSObject <NSCoding, TADDownloaderItemDelegate>
{
    _Bool _isCached;
    _Bool _fullscreenClick;
    _Bool _hasClick;
    _Bool _canSkip;
    _Bool _isH5;
    long long _orderId;
    long long _duration;
    long long _reportTime;
    long long _type;
    double _width;
    double _height;
    NSString *_vid;
    NSString *_urlString;
    NSString *_md5String;
    long long _fileSize;
    NSString *_definition;
    NSString *_linkURLString;
    NSString *_requestID;
    NSString *_soid;
    NSString *_reportURLString;
    NSArray *_imageArray;
    NSArray *_extraReportURLArray;
    NSArray *_extraClickReportURLArray;
    TADMediaExtra *_extra;
    long long _lcount;
    long long _step;
    NSString *_jsonURL;
    NSString *_openUrlType;
    NSString *_clickTextDesc;
    NSString *_params;
    NSString *_displayCode;
    NSString *_richMediaUrl;
    NSDictionary *_videoInfo;
    TADMediaItem *_nextMediaItem;
    long long _weight;
    NSString *_timeList;
    NSString *_validDate;
    NSString *_trueView;
    NSString *_itunes_download;
    TADShareItem *_shareItem;
    TADAdSelectorItem *_adSelectorItem;
}

+ (id)validDateFromTimeList:(id)arg1;
+ (id)emptyItemWithLcount:(long long)arg1;
+ (id)mediaItemWithDictionary:(id)arg1;
+ (id)itemWithItem:(id)arg1;
@property(retain, nonatomic) TADAdSelectorItem *adSelectorItem; // @synthesize adSelectorItem=_adSelectorItem;
@property(retain, nonatomic) TADShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(copy, nonatomic) NSString *itunes_download; // @synthesize itunes_download=_itunes_download;
@property(copy, nonatomic) NSString *trueView; // @synthesize trueView=_trueView;
@property(retain, nonatomic) NSString *validDate; // @synthesize validDate=_validDate;
@property(retain, nonatomic) NSString *timeList; // @synthesize timeList=_timeList;
@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(retain, nonatomic) TADMediaItem *nextMediaItem; // @synthesize nextMediaItem=_nextMediaItem;
@property(retain, nonatomic) NSDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(copy, nonatomic) NSString *richMediaUrl; // @synthesize richMediaUrl=_richMediaUrl;
@property(copy, nonatomic) NSString *displayCode; // @synthesize displayCode=_displayCode;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *clickTextDesc; // @synthesize clickTextDesc=_clickTextDesc;
@property(copy, nonatomic) NSString *openUrlType; // @synthesize openUrlType=_openUrlType;
@property(nonatomic) _Bool isH5; // @synthesize isH5=_isH5;
@property(copy, nonatomic) NSString *jsonURL; // @synthesize jsonURL=_jsonURL;
@property(nonatomic) _Bool canSkip; // @synthesize canSkip=_canSkip;
@property(nonatomic) _Bool hasClick; // @synthesize hasClick=_hasClick;
@property(nonatomic) long long step; // @synthesize step=_step;
@property(nonatomic) long long lcount; // @synthesize lcount=_lcount;
@property(retain, nonatomic) TADMediaExtra *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSArray *extraClickReportURLArray; // @synthesize extraClickReportURLArray=_extraClickReportURLArray;
@property(retain, nonatomic) NSArray *extraReportURLArray; // @synthesize extraReportURLArray=_extraReportURLArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(copy, nonatomic) NSString *reportURLString; // @synthesize reportURLString=_reportURLString;
@property(copy, nonatomic) NSString *soid; // @synthesize soid=_soid;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *linkURLString; // @synthesize linkURLString=_linkURLString;
@property(nonatomic) _Bool fullscreenClick; // @synthesize fullscreenClick=_fullscreenClick;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(copy, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *md5String; // @synthesize md5String=_md5String;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)downloaderItem;
- (_Bool)isToday;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)buildReportURLItems:(id)arg1 reportType:(unsigned long long)arg2;
- (id)extraClickReportURLFormat:(id)arg1;
- (id)extraReportURLFormat:(id)arg1;
- (id)creativeID;
- (id)paramsDictFromString:(id)arg1;
- (id)extractSharedItemFromParamsDict:(id)arg1;
- (id)extractRichdataDictFromParamsDict:(id)arg1;
- (_Bool)isAppDownloadAd;
- (_Bool)isTrueViewAd;
- (_Bool)isBlurRequired;
- (_Bool)isRichMedia;
- (_Bool)isVoid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

