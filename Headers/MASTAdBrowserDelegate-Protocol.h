//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MASTAdBrowser, NSError;

@protocol MASTAdBrowserDelegate <NSObject>
- (void)MASTAdBrowserWillLeaveApplication:(MASTAdBrowser *)arg1;
- (void)MASTAdBrowserClose:(MASTAdBrowser *)arg1;
- (void)MASTAdBrowser:(MASTAdBrowser *)arg1 didFailLoadWithError:(NSError *)arg2;
@end

