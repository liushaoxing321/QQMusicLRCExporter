//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface JumpToBizWebviewReq : BaseReq
{
    int webType;
    NSString *tousrname;
    NSString *extMsg;
}

@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *tousrname; // @synthesize tousrname;
@property(nonatomic) int webType; // @synthesize webType;
- (void)dealloc;

@end

