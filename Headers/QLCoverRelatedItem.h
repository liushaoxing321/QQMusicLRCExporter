//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QLCoverRelatedItem : NSObject
{
    _Bool _isTopTab;
    int _algfilever;
    int _algsubver;
    int _algver;
    int _tabid;
    int _showIndex;
    NSString *_title;
    NSMutableArray *_aryPhotos;
    NSString *_tabName;
}

@property int showIndex; // @synthesize showIndex=_showIndex;
@property _Bool isTopTab; // @synthesize isTopTab=_isTopTab;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property int tabid; // @synthesize tabid=_tabid;
@property int algver; // @synthesize algver=_algver;
@property int algsubver; // @synthesize algsubver=_algsubver;
@property int algfilever; // @synthesize algfilever=_algfilever;
@property(readonly) NSMutableArray *aryPhotos; // @synthesize aryPhotos=_aryPhotos;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;
- (void)dealloc;

@end

