//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QPlayDevice : NSObject
{
    NSString *identifier;
    NSString *name;
    NSString *manufacturer;
    NSString *modelName;
    _Bool lostControl;
}

@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(nonatomic) _Bool lostControl; // @synthesize lostControl;
- (void).cxx_destruct;
- (int)compatibilityMode;
- (_Bool)isSonyDevice;
- (_Bool)isOldBODevice;
- (_Bool)isOldMarantzDevice;
- (long long)sortDevice:(id)arg1;
- (void)detectingAvailabe;
- (void)setNameWithControlPoint:(id)arg1 controlPoint:(id)arg2;
- (id)initWithIdentifer:(id)arg1 controlPoint:(id)arg2;

@end

