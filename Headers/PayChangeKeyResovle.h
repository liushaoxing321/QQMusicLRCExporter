//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePayResovle.h"

@class NSString;

@interface PayChangeKeyResovle : BasePayResovle
{
    NSString *_secKey;
    NSString *_payKey;
    NSString *_payKeyTime;
}

@property(retain, nonatomic) NSString *payKeyTime; // @synthesize payKeyTime=_payKeyTime;
@property(retain, nonatomic) NSString *payKey; // @synthesize payKey=_payKey;
@property(retain, nonatomic) NSString *secKey; // @synthesize secKey=_secKey;
- (void)dealloc;
- (void)ResovleProtocol:(id)arg1;

@end

