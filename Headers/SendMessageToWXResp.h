//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString;

@interface SendMessageToWXResp : BaseResp
{
    NSString *lang;
    NSString *country;
}

@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
- (void)dealloc;
- (id)init;

@end

