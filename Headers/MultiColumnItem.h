//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface MultiColumnItem : NSObject
{
    _Bool _bSinger;
    long long _type;
    UIImage *_smlImg;
    NSString *_strTitle;
    NSString *_strSubTile;
}

@property(retain, nonatomic) NSString *strSubTile; // @synthesize strSubTile=_strSubTile;
@property(retain, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
@property(retain, nonatomic) UIImage *smlImg; // @synthesize smlImg=_smlImg;
@property(nonatomic) _Bool bSinger; // @synthesize bSinger=_bSinger;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

