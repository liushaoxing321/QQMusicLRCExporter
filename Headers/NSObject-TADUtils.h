//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (TADUtils)
+ (id)tad_cast:(id)arg1 warnOnFailure:(_Bool)arg2;
+ (id)tad_cast:(id)arg1;
- (_Bool)tad_removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)tad_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (_Bool)tad_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)tad_performSelectorOnMainThreadInNextRunLoop:(SEL)arg1 withObject:(id)arg2;
@end

