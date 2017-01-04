//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDView.h"

@class IDImage, IDLabel, IDToolbarButton;

@interface StartView : IDView
{
    IDImage *_imageAlbumCover;
    IDImage *_imageAlbumCoverReflected;
    IDImage *_imageAppLogo;
    IDLabel *_labelRecognizingInfo;
    IDLabel *_labelNoResultInfo;
    IDLabel *_labelArtistInfo;
    IDLabel *_labelTitleInfo;
    IDLabel *_labelTip;
    IDToolbarButton *_buttonFavourite;
    IDToolbarButton *_buttonDownload;
    IDToolbarButton *_buttonRetry;
    IDToolbarButton *_button1;
    IDToolbarButton *_button2;
    IDToolbarButton *_button3;
    IDToolbarButton *_button4;
    IDToolbarButton *_button5;
}

@property(retain) IDToolbarButton *button5; // @synthesize button5=_button5;
@property(retain) IDToolbarButton *button4; // @synthesize button4=_button4;
@property(retain) IDToolbarButton *button3; // @synthesize button3=_button3;
@property(retain) IDToolbarButton *button2; // @synthesize button2=_button2;
@property(retain) IDToolbarButton *button1; // @synthesize button1=_button1;
@property(retain) IDToolbarButton *buttonRetry; // @synthesize buttonRetry=_buttonRetry;
@property(retain) IDToolbarButton *buttonDownload; // @synthesize buttonDownload=_buttonDownload;
@property(retain) IDToolbarButton *buttonFavourite; // @synthesize buttonFavourite=_buttonFavourite;
@property(retain) IDLabel *labelTip; // @synthesize labelTip=_labelTip;
@property(retain) IDLabel *labelTitleInfo; // @synthesize labelTitleInfo=_labelTitleInfo;
@property(retain) IDLabel *labelArtistInfo; // @synthesize labelArtistInfo=_labelArtistInfo;
@property(retain) IDLabel *labelNoResultInfo; // @synthesize labelNoResultInfo=_labelNoResultInfo;
@property(retain) IDLabel *labelRecognizingInfo; // @synthesize labelRecognizingInfo=_labelRecognizingInfo;
@property(retain) IDImage *imageAppLogo; // @synthesize imageAppLogo=_imageAppLogo;
@property(retain) IDImage *imageAlbumCoverReflected; // @synthesize imageAlbumCoverReflected=_imageAlbumCoverReflected;
@property(retain) IDImage *imageAlbumCover; // @synthesize imageAlbumCover=_imageAlbumCover;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3 hmiProvider:(id)arg4;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end

