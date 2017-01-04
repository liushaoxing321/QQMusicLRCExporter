//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface VkeyData : NSObject <NSCoding, NSCopying>
{
    NSString *_vkeyValue;
    unsigned long long _uin;
}

@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *vkeyValue; // @synthesize vkeyValue=_vkeyValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 forUin:(unsigned long long)arg2;

@end

