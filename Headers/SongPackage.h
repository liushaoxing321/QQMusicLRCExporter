//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ChannelItem, NSString, SongInfo, UIImage;

@interface SongPackage : NSObject
{
    _Bool _isPaySong;
    int _topRankShareFrom;
    SongInfo *_song;
    ChannelItem *_channelItem;
    UIImage *_image;
    NSString *_customShareDesc;
}

@property(retain) NSString *customShareDesc; // @synthesize customShareDesc=_customShareDesc;
@property int topRankShareFrom; // @synthesize topRankShareFrom=_topRankShareFrom;
@property(retain) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isPaySong; // @synthesize isPaySong=_isPaySong;
@property(retain, nonatomic) ChannelItem *channelItem; // @synthesize channelItem=_channelItem;
@property(retain) SongInfo *song; // @synthesize song=_song;
- (void).cxx_destruct;

@end

