//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TADMediaViewStatDelegate-Protocol.h"
#import "TADReportBase-Protocol.h"

@class NSMutableArray, NSString, TADLandingViewStatObject;

@interface TADReportSingleMediaItem : NSObject <TADMediaViewStatDelegate, TADReportBase>
{
    NSString *_landingViewUrl;
    TADLandingViewStatObject *_currentLandingViewStatObject;
    NSMutableArray *_landingViewStatObjects;
    NSString *_vid;
    id _oid;
}

@property(retain, nonatomic) id oid; // @synthesize oid=_oid;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSMutableArray *landingViewStatObjects; // @synthesize landingViewStatObjects=_landingViewStatObjects;
@property(retain, nonatomic) TADLandingViewStatObject *currentLandingViewStatObject; // @synthesize currentLandingViewStatObject=_currentLandingViewStatObject;
@property(retain, nonatomic) NSString *landingViewUrl; // @synthesize landingViewUrl=_landingViewUrl;
- (id)dataDictWithKey;
- (void)finishStatForMediaView;
- (void)finishStatForCurrentLandingView;
- (void)dealloc;
- (id)init;
- (id)initWithVid:(id)arg1 Oid:(id)arg2;
- (void)adViewDidShownSeconds:(double)arg1;
- (void)adLandingViewLeave:(double)arg1;
- (void)adLandingViewEndLoading:(double)arg1;
- (void)adLandingViewStartLoading:(double)arg1;
- (void)adMiddleViewEndLoading:(double)arg1;
- (void)adMiddleViewStartLoading:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

