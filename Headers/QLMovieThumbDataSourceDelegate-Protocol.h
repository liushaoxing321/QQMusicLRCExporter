//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol QLMovieThumbDataSourceDelegate <NSObject>
- (void)imgLoadFailed:(double)arg1;
- (void)imgLoaded:(UIImage *)arg1;
- (void)imageBeginLoad;
@end

