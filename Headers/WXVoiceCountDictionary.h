//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXVoiceCountDictionary : NSObject
{
    long long _count;
    NSString *_key;
    NSMutableDictionary *_countDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *countDictionary; // @synthesize countDictionary=_countDictionary;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)saveCountDictionary;
- (void)clearCountDictionary;
- (void)loadCountDictionary;
- (id)stringForSend;
- (long long)count;
- (void)changeCountDictionaryWithResultKind:(_Bool)arg1 andNetType:(long long)arg2;
- (id)initWithUserDefaultsKey:(id)arg1;
- (void)dealloc;

@end
