//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIController.h"

#import "RAPIListScreenDelegate-Protocol.h"

@class NSArray, NSString, NSTimer;

@interface ChannelScreen : RAPIController <RAPIListScreenDelegate>
{
    _Bool _contentLoaded;
    NSArray *_channelArray;
    NSTimer *_refreshDelayTimer;
}

@property(retain, nonatomic) NSTimer *refreshDelayTimer; // @synthesize refreshDelayTimer=_refreshDelayTimer;
@property(retain, nonatomic) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property _Bool contentLoaded; // @synthesize contentLoaded=_contentLoaded;
- (void).cxx_destruct;
- (_Bool)isSupportChannel:(id)arg1;
- (id)translateToChannelItem:(id)arg1;
- (id)channelsFromServerDataV4:(id)arg1;
- (void)updateSongList:(id)arg1;
- (_Bool)canProvideDataImmediately;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (_Bool)_isSamePlayingList:(id)arg1;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (long long)getItemCountForGroup:(long long)arg1;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (id)getLabelForEmptyList;
- (id)getTitle;
- (id)getScreenConfig;
- (void)dealloc;
- (void)refreshList;
- (void)onFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

