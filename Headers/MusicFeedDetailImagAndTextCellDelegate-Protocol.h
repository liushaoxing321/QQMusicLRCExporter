//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedCommentInfo, MusicCircleFeed;

@protocol MusicFeedDetailImagAndTextCellDelegate <NSObject>

@optional
- (void)endSelected;
- (void)reCommentActionStart:(FeedCommentInfo *)arg1 feed:(MusicCircleFeed *)arg2 withSender:(id)arg3;
- (void)deleteCommentMessageNoAlert:(id)arg1;
- (void)deleteCommentMessage:(id)arg1;
@end

