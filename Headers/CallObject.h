//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CallObject : NSObject
{
    SEL selector;
    NSObject *call;
    NSObject *object;
}

+ (id)objectWithCall:(id)arg1 Selector:(SEL)arg2 WithObject:(id)arg3;
@property(retain, nonatomic) NSObject *object; // @synthesize object;
@property(retain, nonatomic) NSObject *call; // @synthesize call;
@property(nonatomic) SEL selector; // @synthesize selector;
- (void).cxx_destruct;
- (_Bool)isEqualContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)performSelectorAfterDelay:(double)arg1;
- (void)performSelector;
- (id)initWithCall:(id)arg1 Selector:(SEL)arg2 WithObject:(id)arg3;

@end

