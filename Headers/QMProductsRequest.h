//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QMProductsRequest : NSObject
{
    _Bool _isDespositGameCoin;
    NSString *_productId;
    NSString *_offerId;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionKey;
    NSString *_pf;
    NSString *_pfKey;
    NSString *_payItem;
    NSString *_zoneId;
    NSString *_varItem;
    long long _productType;
}

@property(nonatomic) _Bool isDespositGameCoin; // @synthesize isDespositGameCoin=_isDespositGameCoin;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *varItem; // @synthesize varItem=_varItem;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
@property(retain, nonatomic) NSString *payItem; // @synthesize payItem=_payItem;
@property(retain, nonatomic) NSString *pfKey; // @synthesize pfKey=_pfKey;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;

@end

