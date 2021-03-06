//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIController.h"

#import "RAPIListScreenDelegate-Protocol.h"

@class NSString;

@interface MainMenuScreen : RAPIController <RAPIListScreenDelegate>
{
    _Bool _bWaitUpdate;
}

@property _Bool bWaitUpdate; // @synthesize bWaitUpdate=_bWaitUpdate;
- (void)onNotifyUpdateAllFinish:(id)arg1;
- (void)playLoveSongs;
- (void)playLocal;
- (void)playDownload;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (long long)getItemCountForGroup:(long long)arg1;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)getImageForRow:(long long)arg1 forGroup:(long long)arg2 withPreferredSize:(struct CGSize)arg3;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (id)getTitle;
- (id)getScreenConfig;
- (void)dealloc;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

