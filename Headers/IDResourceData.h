//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface IDResourceData : NSObject
{
    int _type;
    NSData *_data;
}

+ (id)new;
+ (id)resourceDataWithType:(int)arg1 data:(id)arg2;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)stringWithResourceType:(int)arg1;
- (_Bool)isEqualToResourceData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithType:(int)arg1 data:(id)arg2;

@end

