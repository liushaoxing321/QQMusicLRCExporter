//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSString;

@interface FlowPackItem : NSObject <ProtocolHostDelegate>
{
    _Bool isFreePackUser;
    _Bool isUserFreeFlowPack;
    _Bool isShowCellItem;
    NSString *cellMainTitle;
    NSString *cellSubtitle;
    NSString *phoneNumberURL;
    NSString *phoneNumberValue;
    NSString *phoneIP;
    int flowTipsShow;
    int showBindtips;
    NSString *flowTipsTitle;
    NSString *lastcontent;
    NSString *precontent;
    long long flowTipsThreshold;
    int notUsedFreeFlow;
    int _uuidError;
    NSString *_chinaUnicomIPAdress;
    NSString *_pw;
    unsigned long long _reportErrorCount;
}

+ (id)sharedFlowPackItem;
@property(nonatomic) int uuidError; // @synthesize uuidError=_uuidError;
@property unsigned long long reportErrorCount; // @synthesize reportErrorCount=_reportErrorCount;
@property(retain, nonatomic) NSString *pw; // @synthesize pw=_pw;
@property(retain, nonatomic) NSString *chinaUnicomIPAdress; // @synthesize chinaUnicomIPAdress=_chinaUnicomIPAdress;
@property int notUsedFreeFlow; // @synthesize notUsedFreeFlow;
@property long long flowTipsThreshold; // @synthesize flowTipsThreshold;
@property(retain, nonatomic) NSString *precontent; // @synthesize precontent;
@property(retain, nonatomic) NSString *lastcontent; // @synthesize lastcontent;
@property(retain, nonatomic) NSString *flowTipsTitle; // @synthesize flowTipsTitle;
@property int showBindtips; // @synthesize showBindtips;
@property int flowTipsShow; // @synthesize flowTipsShow;
@property(retain, nonatomic) NSString *phoneIP; // @synthesize phoneIP;
@property(retain, nonatomic) NSString *phoneNumberValue; // @synthesize phoneNumberValue;
@property(retain, nonatomic) NSString *phoneNumberURL; // @synthesize phoneNumberURL;
@property(retain, nonatomic) NSString *cellSubtitle; // @synthesize cellSubtitle;
@property(retain, nonatomic) NSString *cellMainTitle; // @synthesize cellMainTitle;
@property(nonatomic) _Bool isShowCellItem; // @synthesize isShowCellItem;
@property(nonatomic) _Bool isUserFreeFlowPack; // @synthesize isUserFreeFlowPack;
@property(nonatomic) _Bool isFreePackUser; // @synthesize isFreePackUser;
- (void).cxx_destruct;
- (_Bool)isChinaUnicomIPAdressInvalid;
- (_Bool)ifShowChinaUnicomActivateAlert;
- (id)getSig;
- (void)reportFreeFlowRespondIPErrorIP:(id)arg1 urlValue:(id)arg2;

@end
