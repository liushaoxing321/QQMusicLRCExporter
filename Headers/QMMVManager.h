//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface QMMVManager : NSObject <UIAlertViewDelegate>
{
    NSMutableDictionary *playMVDataDic;
    NSString *_downloadVid;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSString *downloadVid; // @synthesize downloadVid=_downloadVid;
- (void).cxx_destruct;
- (void)jumpDownLoadMV:(id)arg1;
- (void)checkMVState;
- (void)showMVAlertWhenDisabledSong:(id)arg1 vcType:(id)arg2 showMV:(_Bool)arg3;
- (void)showAlertWhenDisabledSong:(id)arg1 vcType:(id)arg2;
- (void)showMVAlertWhenDisabledSong:(id)arg1 vcType:(id)arg2;
- (void)showFreeFlowMVAlertWhenPlayingNetChange;
- (void)showMVAlertViewTitle:(id)arg1 message:(id)arg2 para:(id)arg3 showWeb:(_Bool)arg4;
- (void)showMVAlertViewTitle:(id)arg1 message:(id)arg2 showWeb:(_Bool)arg3;
- (void)playMVList:(id)arg1 playSongIndex:(int)arg2 listTitle:(id)arg3 from:(id)arg4 channelItem:(id)arg5;
- (void)innerPlayMVList:(id)arg1 playSongIndex:(int)arg2 listTitle:(id)arg3 from:(id)arg4 channelItem:(id)arg5;
- (void)playLocalMVList:(id)arg1 playSongIndex:(int)arg2 from:(id)arg3 withMVAttachVC:(id)arg4;
- (void)playLocalMVList:(id)arg1 playSongIndex:(int)arg2 from:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

