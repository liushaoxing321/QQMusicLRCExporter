//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ListTagManager : NSObject
{
    NSMutableDictionary *back;
    NSDictionary *allTag;
}

+ (void)saveList:(id)arg1 ByKey:(id)arg2;
+ (id)getListByKey:(id)arg1;
+ (id)getPlayingList;
+ (id)shareListTagManager;
- (void).cxx_destruct;
- (void)setList:(id)arg1 Tag:(int)arg2;
- (id)getTagByList:(id)arg1;
- (id)getListByTag:(int)arg1;
- (id)getListTagByTag:(int)arg1;
- (id)priGetListByKey:(id)arg1;
- (void)priSaveList:(id)arg1 ByKey:(id)arg2;
- (id)getAllList;
- (id)init;

@end
