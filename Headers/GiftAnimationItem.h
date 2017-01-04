//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GiftAnimationItem : NSObject
{
    long long _animationId;
    unsigned long long _status;
    NSString *_small_url;
    NSString *_small_md5;
    NSString *_mid_url;
    NSString *_mid_md5;
    NSString *_large_url;
    NSString *_large_md5;
}

+ (id)translateJSONDataToGiftAnimationItem:(id)arg1;
@property(retain, nonatomic) NSString *large_md5; // @synthesize large_md5=_large_md5;
@property(retain, nonatomic) NSString *large_url; // @synthesize large_url=_large_url;
@property(retain, nonatomic) NSString *mid_md5; // @synthesize mid_md5=_mid_md5;
@property(retain, nonatomic) NSString *mid_url; // @synthesize mid_url=_mid_url;
@property(retain, nonatomic) NSString *small_md5; // @synthesize small_md5=_small_md5;
@property(retain, nonatomic) NSString *small_url; // @synthesize small_url=_small_url;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long animationId; // @synthesize animationId=_animationId;
- (void).cxx_destruct;
- (id)md5;
- (id)downloadUrl;
- (unsigned long long)imageType;

@end
