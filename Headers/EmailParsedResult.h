//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ParsedResult.h"

@class NSString;

@interface EmailParsedResult : ParsedResult
{
    NSString *to;
    NSString *subject;
    NSString *body;
}

+ (id)typeName;
+ (_Bool)looksLikeAnEmailAddress:(id)arg1;
@property(copy, nonatomic) NSString *body; // @synthesize body;
@property(copy, nonatomic) NSString *subject; // @synthesize subject;
@property(copy, nonatomic) NSString *to; // @synthesize to;
- (id)icon;
- (id)actions;
- (id)stringForDisplay;

@end

