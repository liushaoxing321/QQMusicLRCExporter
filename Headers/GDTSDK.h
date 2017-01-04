//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GDTLiteStatsMgr;
@protocol GDTAdProtoDelegate, GDTNetClientDelegate;

@interface GDTSDK : NSObject
{
    GDTLiteStatsMgr *_statsMgr;
    _Bool _isGpsOn;
    id <GDTNetClientDelegate> _netClientDelegate;
    id <GDTAdProtoDelegate> _adProtoDelegate;
}

+ (id)instanceWithAppkey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGDTSDK;
@property(retain, nonatomic) id <GDTAdProtoDelegate> adProtoDelegate; // @synthesize adProtoDelegate=_adProtoDelegate;
@property(retain, nonatomic) id <GDTNetClientDelegate> netClientDelegate; // @synthesize netClientDelegate=_netClientDelegate;
@property(nonatomic) _Bool isGpsOn; // @synthesize isGpsOn=_isGpsOn;
- (void).cxx_destruct;
- (void)feedBack:(id)arg1 withType:(int)arg2;
- (void)closeWithAdInfo:(id)arg1 clickInfo:(id)arg2;
- (void)clickWithAdInfo:(id)arg1 clickInfo:(id)arg2 clickCallback:(id)arg3;
- (void)exposureWithAdInfo:(id)arg1 exposureInfo:(id)arg2;
- (_Bool)checkRequest:(id)arg1 callback:(id)arg2;
- (void)loadAdWithRequest:(id)arg1 callback:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

