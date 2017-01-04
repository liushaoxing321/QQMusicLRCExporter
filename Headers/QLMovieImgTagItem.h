//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface QLMovieImgTagItem : NSObject <NSCoding, NSCopying>
{
    unsigned long long _tagType;
    unsigned long long _direction;
    UIColor *_bgColor;
    NSString *_text;
    NSString *_imgurl;
    NSString *_imgurl2x;
}

@property(copy) NSString *imgurl2x; // @synthesize imgurl2x=_imgurl2x;
@property(copy) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(copy) NSString *text; // @synthesize text=_text;
@property(retain) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property unsigned long long direction; // @synthesize direction=_direction;
@property unsigned long long tagType; // @synthesize tagType=_tagType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

