//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq
{
    _Bool bText;
    int scene;
    NSString *text;
    WXMediaMessage *message;
}

@property(nonatomic) int scene; // @synthesize scene;
@property(nonatomic) _Bool bText; // @synthesize bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void)dealloc;
- (id)init;

@end

