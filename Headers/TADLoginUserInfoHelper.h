//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TADLoginUserInfoDelegate;

@interface TADLoginUserInfoHelper : NSObject
{
    id <TADLoginUserInfoDelegate> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <TADLoginUserInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)wantToGetUserLoginStatusWithcallback:(CDUnknownBlockType)arg1;
- (void)wantToShowLoginPanelWithCallback:(CDUnknownBlockType)arg1;

@end
