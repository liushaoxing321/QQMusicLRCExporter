//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AlertViewItem : NSObject
{
    long long _msgId;
    NSString *_msg;
    NSString *_picUrl;
    NSString *_title;
    NSString *_jumpUrl;
    NSArray *_picUrlArray;
}

@property(retain, nonatomic) NSArray *picUrlArray; // @synthesize picUrlArray=_picUrlArray;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (id)initWithMsgId:(long long)arg1 withMessage:(id)arg2 withTitle:(id)arg3 withJumpUrl:(id)arg4 withPicUrlArray:(id)arg5;
- (id)initWithMsgId:(long long)arg1 withMessage:(id)arg2 withTitle:(id)arg3 withPicUrl:(id)arg4;

@end

