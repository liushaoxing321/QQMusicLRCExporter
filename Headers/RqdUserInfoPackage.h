//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RqdObjTransToJceBufferProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface RqdUserInfoPackage : NSObject <RqdObjTransToJceBufferProtocol>
{
    NSString *deviceId;
    NSString *proceName;
    NSDictionary *valueMap;
    int type;
    NSArray *summaryInfos;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSArray *summaryInfos; // @synthesize summaryInfos;
@property(retain, nonatomic) NSDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *proceName; // @synthesize proceName;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId;
- (void)dealloc;
- (void)createWUPModel:(struct UserInfoPackage *)arg1;
- (void)setDataToBuffer:(struct JceOutputStream<analyticstaf::BufferWriter> *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

