//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface KKTVProgStateData : NSObject
{
    _Bool isfivecity;
    _Bool lookback;
    _Bool _isPay;
    _Bool _isUserPay;
    _Bool _hasVipResolution;
    long long watermark;
    double _playTime;
    double _totalPlayTime;
    long long _previewCount;
    long long _restPreviewCount;
    long long _liveErroCode;
}

@property(nonatomic) _Bool hasVipResolution; // @synthesize hasVipResolution=_hasVipResolution;
@property(nonatomic) long long liveErroCode; // @synthesize liveErroCode=_liveErroCode;
@property(nonatomic) long long restPreviewCount; // @synthesize restPreviewCount=_restPreviewCount;
@property(nonatomic) long long previewCount; // @synthesize previewCount=_previewCount;
@property(nonatomic) double totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) _Bool isUserPay; // @synthesize isUserPay=_isUserPay;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(nonatomic) long long watermark; // @synthesize watermark;
@property(nonatomic) _Bool lookback; // @synthesize lookback;
@property(nonatomic) _Bool isfivecity; // @synthesize isfivecity;
- (void)dealloc;

@end

