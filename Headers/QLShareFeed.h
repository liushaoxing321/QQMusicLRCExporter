//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QLShareFeed : NSObject
{
    NSString *_title;
    NSString *_content;
    NSString *_contentTail;
    NSArray *_pictures;
}

+ (id)feed:(id)arg1 content:(id)arg2 contentTail:(id)arg3 pictures:(id)arg4;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) NSString *contentTail; // @synthesize contentTail=_contentTail;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;

@end

