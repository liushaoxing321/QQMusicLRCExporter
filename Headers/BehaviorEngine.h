//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BehaviorEngine : NSObject
{
    int _clickCount;
}

+ (id)sharedInstance;
@property(nonatomic) int clickCount; // @synthesize clickCount=_clickCount;
- (void)doCleanClickCount;
- (void)doClickBackBtn:(id)arg1 atVC:(id)arg2;

@end

