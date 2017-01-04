//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NavigationManager : NSObject
{
    _Bool _showPlayAndReturnBtn;
    _Bool _slideShow;
    _Bool _isHideHeader;
    _Bool _hideMiniPlayer;
    _Bool _scrollsToTop;
    int _tabBarDisplayMode;
}

+ (id)sharedManager;
- (void)pushGenericWebSlideShowAndshowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3 WebViewType:(unsigned long long)arg4 enumMiniPlayerDisplayMode:(long long)arg5;
- (void)pushGenericWebShowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3 isSlideShow:(_Bool)arg4 autoFixFrame:(_Bool)arg5 callBackBlock:(CDUnknownBlockType)arg6;
- (void)pushGenericWebShowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3 isSlideShow:(_Bool)arg4 callBackBlock:(CDUnknownBlockType)arg5;
- (void)pushGenericWebShowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3 autoFixFrame:(_Bool)arg4;
- (void)pushGenericWebShowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)pushGenericWebSlideShowAndshowPlayAndReturnBtnShowMinPlay:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)pushGenericWebSlideShowAndshowPlayAndReturnBtn:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)pushGenericWebSlideShow:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)pushGenericWeb:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)showGenericWeb:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3 autoFixFrame:(_Bool)arg4;
- (void)showGenericWeb:(id)arg1 withTile:(id)arg2 withWebUrl:(id)arg3;
- (void)showGenericWebSlideShowWithTile:(id)arg1 withWebUrl:(id)arg2;
- (void)showGenericWebWithTile:(id)arg1 withWebUrl:(id)arg2;
- (void)showGenericWebWithWebUrl:(id)arg1;
- (id)init;

@end

