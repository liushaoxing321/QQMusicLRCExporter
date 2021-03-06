//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSDate, NSString, WBAuthorizeResponse;

@interface WBSDKAppRecommendResponse : WBBaseResponse
{
    WBAuthorizeResponse *_authResponse;
    NSString *_userID;
    NSString *_accessToken;
    NSDate *_expirationDate;
    NSString *_refreshToken;
}

@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) WBAuthorizeResponse *authResponse; // @synthesize authResponse=_authResponse;
- (void).cxx_destruct;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end

