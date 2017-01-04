//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface EmotionImageView : UIImageView
{
    NSString *_url;
    _Bool dataLoaded;
    _Bool animating;
    _Bool enableAnimation;
    _Bool lazyLoad;
}

@property(nonatomic) _Bool lazyLoad; // @synthesize lazyLoad;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation;
@property(nonatomic) _Bool animating; // @synthesize animating;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)playImage:(id)arg1;
- (void)cancelLoadGif;
- (void)startLoadGif;
- (void)ImageDownloadFinished:(id)arg1 path:(id)arg2;
- (void)requestImage;
- (void)clearGIFDecodeTarget;
- (void)clearUrl;
- (void)loadGifData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

