//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSDKBasicButton.h"

#import "WBSDKNormalWebRequestDelegate-Protocol.h"

@class NSString, WBSDKNormalWebViewController;

@interface WBSDKRelationshipButton : WBSDKBasicButton <WBSDKNormalWebRequestDelegate>
{
    WBSDKNormalWebViewController *webVC;
    CDUnknownBlockType completeHandler;
    NSString *_accessToken;
    NSString *_currentUserID;
    NSString *_followUserID;
    unsigned long long _currentRelationShip;
}

@property(nonatomic) unsigned long long currentRelationShip; // @synthesize currentRelationShip=_currentRelationShip;
@property(retain, nonatomic) NSString *followUserID; // @synthesize followUserID=_followUserID;
@property(retain, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)didFinishBrowsingWithResultResponse:(id)arg1;
- (void)didPressButton:(id)arg1;
- (void)checkCurrentRelationship;
- (id)initWithFrame:(struct CGRect)arg1 accessToken:(id)arg2 currentUser:(id)arg3 followUser:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

