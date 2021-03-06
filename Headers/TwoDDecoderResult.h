//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface TwoDDecoderResult : NSObject <NSCopying>
{
    NSString *text;
    NSArray *points;
}

+ (id)resultWithText:(id)arg1 points:(id)arg2;
@property(retain, nonatomic) NSArray *points; // @synthesize points;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (id)description;
- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 points:(id)arg2;

@end

