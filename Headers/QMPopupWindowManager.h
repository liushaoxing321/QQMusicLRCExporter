//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QMPopupWindowManager : NSObject
{
    NSMutableArray *_popupWindowsBlockArray;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clear;
- (void)showNextPopupWindow;
- (void)addWillShowBlock:(CDUnknownBlockType)arg1 willBeRobbedBlock:(CDUnknownBlockType)arg2 needRobOther:(_Bool)arg3;
- (id)init;

@end

