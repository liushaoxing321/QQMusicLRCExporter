//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface RqdThreadCollector : NSObject
{
    NSArray *binaryImageArray_;
    NSMutableDictionary *addressStackDict_;
    _Bool needSymbol;
    NSMutableDictionary *allAdrMaps;
    NSString *procName;
    NSString *_processName;
}

+ (void)dumpMainThreadStack:(CDUnknownBlockType)arg1;
+ (id)createAppInfoFromMachImage:(id)arg1;
+ (id)createCrashBinInfoFromMachImage:(id)arg1;
+ (id)packetExtraValues;
+ (void)addAttachment:(id)arg1;
+ (id)dumpLiveThreads;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *procName; // @synthesize procName;
@property(nonatomic) _Bool needSymbol; // @synthesize needSymbol;
@property(retain, nonatomic) NSMutableDictionary *allAdrMaps; // @synthesize allAdrMaps;
@property(retain, nonatomic) NSMutableDictionary *addressStackDict; // @synthesize addressStackDict=addressStackDict_;
@property(copy, nonatomic) NSArray *binaryImageArray; // @synthesize binaryImageArray=binaryImageArray_;
- (id)searchImageByAddress:(unsigned long long)arg1;
- (id)searchStackForAddress:(id)arg1 withIndex:(int)arg2;
- (id)convertSymbolAddress:(id)arg1;
- (id)createAddrInfo:(id)arg1 index:(int)arg2;
- (id)createAddrInfos:(id)arg1;
- (id)dumpThreads;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

