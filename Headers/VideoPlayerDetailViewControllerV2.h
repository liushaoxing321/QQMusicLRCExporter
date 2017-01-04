//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "VideoPlayerControllDelegate-Protocol.h"

@class GenericWebViewController, MVInfo, NSArray, NSDictionary, NSString, QMTabBar, ReleatedMVVC, UIScrollView;

@interface VideoPlayerDetailViewControllerV2 : SkinViewController <VideoPlayerControllDelegate, UIScrollViewDelegate>
{
    UIScrollView *_mvTabScrollView;
    QMTabBar *_mvTabBar;
    NSArray *mvTabComponents;
    GenericWebViewController *_basicInfoVC;
    GenericWebViewController *_commentVC;
    ReleatedMVVC *_releatedMVVC;
    int _currentTabIndex;
    int _lastTabIndex;
    _Bool _bshouldRotate;
    _Bool _bPresented;
    MVInfo *_curMVInfo;
    NSDictionary *_jumpExtraData;
}

@property(retain, nonatomic) NSDictionary *jumpExtraData; // @synthesize jumpExtraData=_jumpExtraData;
@property(retain, nonatomic) MVInfo *curMVInfo; // @synthesize curMVInfo=_curMVInfo;
@property(nonatomic) _Bool bPresented; // @synthesize bPresented=_bPresented;
- (void).cxx_destruct;
- (void)freshWebPageUrl;
- (void)playingMVDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

