//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QQGifDecodeManager : NSObject
{
    NSMutableArray *_waitingList;
    long long _allBufferBytes;
    NSMutableDictionary *_gifDict;
}

+ (id)gifKeyWithURL:(id)arg1;
+ (void)removeGifBuffForUrl:(id)arg1;
+ (void)removeAll;
+ (_Bool)loadAnimationGifForView:(id)arg1 atUrl:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *gifDict; // @synthesize gifDict=_gifDict;
@property(nonatomic) long long allBufferBytes; // @synthesize allBufferBytes=_allBufferBytes;
@property(retain, nonatomic) NSMutableArray *waitingList; // @synthesize waitingList=_waitingList;
- (void)dealloc;
- (id)init;

@end

