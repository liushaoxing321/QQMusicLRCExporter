//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTCoreTextDraw : NSObject
{
    NSString *_string;
}

@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)drawTextContext:(struct CGContext *)arg1 withModel:(id)arg2 lineNumber:(unsigned long long)arg3;
- (id)initWithString:(id)arg1;
- (void)dealloc;

@end

