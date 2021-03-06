//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "BBPresentViewControlerDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "LyricManagerDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "QMImageTabViewDelegate-Protocol.h"
#import "QMShareLyricListViewDelegate-Protocol.h"
#import "QMSharePhotoListDelegate-Protocol.h"
#import "QMWordingViewDelegate-Protocol.h"
#import "SongListSearchVCDelegate-Protocol.h"

@class LyricManager, NSArray, NSString, PosterRecommed, QMImageTabView, QMShareFontStyleView, QMShareLyricListView, QMShareLyricView, QMSharePhotoListView, QMShareQRView, QMWordingTipsView, SongInfo, UIScrollView, UIView;

@interface ShareLyricViewController : SkinViewController <QMShareLyricListViewDelegate, QMSharePhotoListDelegate, QMImageTabViewDelegate, BBPresentViewControlerDelegate, LyricManagerDelegate, SongListSearchVCDelegate, ImageManagerDelegate, ProtocolHostDelegate, QMWordingViewDelegate>
{
    _Bool _bFromPosterRecommed;
    _Bool _bJXReachEnd;
    int _assetsType;
    SongInfo *_songinfo;
    NSArray *_arrayOrigalLyrics;
    NSArray *_arrayTranslateLyrics;
    unsigned long long _shareLyricType;
    long long _nSelectedRow;
    PosterRecommed *_posterRecommed;
    long long _nLogoId;
    LyricManager *_lyricManager;
    QMShareLyricView *_shareLyricView;
    UIScrollView *_scrView;
    unsigned long long _selectType;
    QMImageTabView *_tabBar;
    UIView *_tabBarBgView;
    QMSharePhotoListView *_sharePhotoListView;
    QMShareFontStyleView *_shareFontStyleView;
    QMShareLyricListView *_shareLyricListView;
    QMShareQRView *_shareQRView;
    unsigned long long _tabbarState;
    QMWordingTipsView *_tipVew;
    unsigned long long _nJXPage;
    SongInfo *_jxSonginfo;
    NSArray *_logoArray;
}

@property(retain, nonatomic) NSArray *logoArray; // @synthesize logoArray=_logoArray;
@property(retain, nonatomic) SongInfo *jxSonginfo; // @synthesize jxSonginfo=_jxSonginfo;
@property(nonatomic) unsigned long long nJXPage; // @synthesize nJXPage=_nJXPage;
@property(nonatomic) _Bool bJXReachEnd; // @synthesize bJXReachEnd=_bJXReachEnd;
@property(retain, nonatomic) QMWordingTipsView *tipVew; // @synthesize tipVew=_tipVew;
@property(nonatomic) unsigned long long tabbarState; // @synthesize tabbarState=_tabbarState;
@property(retain, nonatomic) QMShareQRView *shareQRView; // @synthesize shareQRView=_shareQRView;
@property(retain, nonatomic) QMShareLyricListView *shareLyricListView; // @synthesize shareLyricListView=_shareLyricListView;
@property(retain, nonatomic) QMShareFontStyleView *shareFontStyleView; // @synthesize shareFontStyleView=_shareFontStyleView;
@property(retain, nonatomic) QMSharePhotoListView *sharePhotoListView; // @synthesize sharePhotoListView=_sharePhotoListView;
@property(retain, nonatomic) UIView *tabBarBgView; // @synthesize tabBarBgView=_tabBarBgView;
@property(retain, nonatomic) QMImageTabView *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) unsigned long long selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) UIScrollView *scrView; // @synthesize scrView=_scrView;
@property(retain, nonatomic) QMShareLyricView *shareLyricView; // @synthesize shareLyricView=_shareLyricView;
@property(retain, nonatomic) LyricManager *lyricManager; // @synthesize lyricManager=_lyricManager;
@property(nonatomic) long long nLogoId; // @synthesize nLogoId=_nLogoId;
@property(nonatomic) int assetsType; // @synthesize assetsType=_assetsType;
@property(nonatomic) _Bool bFromPosterRecommed; // @synthesize bFromPosterRecommed=_bFromPosterRecommed;
@property(retain, nonatomic) PosterRecommed *posterRecommed; // @synthesize posterRecommed=_posterRecommed;
@property(nonatomic) long long nSelectedRow; // @synthesize nSelectedRow=_nSelectedRow;
@property(nonatomic) unsigned long long shareLyricType; // @synthesize shareLyricType=_shareLyricType;
@property(retain, nonatomic) NSArray *arrayTranslateLyrics; // @synthesize arrayTranslateLyrics=_arrayTranslateLyrics;
@property(retain, nonatomic) NSArray *arrayOrigalLyrics; // @synthesize arrayOrigalLyrics=_arrayOrigalLyrics;
@property(retain, nonatomic) SongInfo *songinfo; // @synthesize songinfo=_songinfo;
- (void).cxx_destruct;
- (void)onColorStyleChanged;
- (void)startGetFontModelList;
- (void)startLoadJinXuanGeCi;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)lyricManagerCallBack:(id)arg1 state:(int)arg2;
- (void)getLyricOfSong:(id)arg1;
- (void)clearPreLyricsAndText;
- (void)updateAlbumInfo:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)qmScrollViewDidScroll:(id)arg1;
- (void)presentViewCtrDidFinishWithObject:(id)arg1;
- (void)presentViewCtrDidFinish:(id)arg1;
- (void)presentViewCtrDidCancel:(id)arg1;
- (void)qmPosterTableLoadMore;
- (void)qmJXLyricViewFirstClickSelectedSong;
- (void)qmChangeFontShadow:(_Bool)arg1;
- (void)qmChangeFontAlignment:(long long)arg1;
- (void)qmChangeFontSize:(unsigned long long)arg1;
- (void)qmChangeFontColor:(id)arg1;
- (void)qmChangeQRState:(_Bool)arg1;
- (void)showTabBar;
- (void)qmImageTabViewDidSelectIndex:(unsigned long long)arg1;
- (void)qmFontShouldShowAlertView:(id)arg1 object:(id)arg2;
- (void)showIapView:(id)arg1;
- (void)qmFontShouldShowVipPurchaseAlertView:(id)arg1 object:(id)arg2;
- (void)qmFontTableViewDidClickWithObject:(id)arg1;
- (void)qmsharePhotoListDidClick:(unsigned long long)arg1 object:(id)arg2;
- (void)qmshareLyricViewShowTranslate:(_Bool)arg1;
- (void)qmJXLyricViewDidClick:(id)arg1;
- (void)syncViewsSonginfo:(id)arg1;
- (void)qmshareLyricViewDidClick:(id)arg1;
- (void)qmshareLyricViewChangeSong;
- (void)qmshareLyricViewReloadLyric;
- (void)didSelectSong:(id)arg1 VC:(id)arg2 assetsType:(int)arg3;
- (void)didheaderCancel:(id)arg1 VC:(id)arg2;
- (void)onNotifyVipPurchaseSuccess:(id)arg1;
- (void)didReceiveFontDownloadTaskResult:(id)arg1;
- (id)getLogoItem;
- (void)didReceivePosterResponse:(id)arg1;
- (void)onNotifyReturnMiniPlayerFromPlayingView:(id)arg1;
- (void)selectModelWithModelSid:(id)arg1;
- (void)storePhotoUsed;
- (void)headerFinish:(id)arg1;
- (void)buildFontSytleList;
- (void)buildLyricList;
- (int)vcType;
- (void)wordingViewWillRemoved:(id)arg1;
- (void)initTipsView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

