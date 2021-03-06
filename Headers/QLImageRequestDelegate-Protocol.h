//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QLImageRequestOperation, UIImage;

@protocol QLImageRequestDelegate <NSObject>

@optional
- (void)didFailLoadWithError:(NSError *)arg1 request:(QLImageRequestOperation *)arg2;
- (void)didLoadImage:(UIImage *)arg1 request:(QLImageRequestOperation *)arg2;
- (void)didStartLoad:(QLImageRequestOperation *)arg1;
@end

