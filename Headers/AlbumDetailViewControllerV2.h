//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinTabBaseViewController.h"

#import "ImageManagerDelegate-Protocol.h"
#import "QMCreatorViewDelegate-Protocol.h"

@class AlbumSongsTabVC, ChannelItem, FolderSongsDetailTabVC, MarqueeLabel, NSDictionary, NSString, QMCreatorView, UIButton, UIControl, UIImage, UIImageView, UILabel, UIView;

@interface AlbumDetailViewControllerV2 : SkinTabBaseViewController <ImageManagerDelegate, QMCreatorViewDelegate>
{
    UIImageView *smallImageView;
    UIView *hederInfoContainerView;
    AlbumSongsTabVC *albumTabVC;
    UIButton *loveBtn;
    UIButton *globalCommentButton;
    UILabel *globalCommentCountLabel;
    UILabel *listenerNumLabel;
    QMCreatorView *creatorView;
    FolderSongsDetailTabVC *detailTabVC;
    FolderSongsDetailTabVC *lyricsTabVC;
    UIImage *headerImage;
    MarqueeLabel *rateNavTitleLabel;
    int fromVC;
    unsigned long long _albumId;
    NSDictionary *_stateInfo;
    ChannelItem *_channelItem;
    long long _groupID;
    long long _buy;
    NSString *_buypage;
    NSString *_buyUrl;
    double _price;
    UIControl *_payAlbumBar;
    NSString *_titleBannerText;
    NSString *_moreBannerText;
    UILabel *_digitalAlbumLabel;
    UILabel *_priceLabel;
    UILabel *_priceSymbolLabel;
}

+ (id)buildAlbumChannelItemKeyWithAlbumId:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *priceSymbolLabel; // @synthesize priceSymbolLabel=_priceSymbolLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *digitalAlbumLabel; // @synthesize digitalAlbumLabel=_digitalAlbumLabel;
@property(retain, nonatomic) NSString *moreBannerText; // @synthesize moreBannerText=_moreBannerText;
@property(retain, nonatomic) NSString *titleBannerText; // @synthesize titleBannerText=_titleBannerText;
@property(retain, nonatomic) UIControl *payAlbumBar; // @synthesize payAlbumBar=_payAlbumBar;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *buyUrl; // @synthesize buyUrl=_buyUrl;
@property(retain, nonatomic) NSString *buypage; // @synthesize buypage=_buypage;
@property(nonatomic) long long buy; // @synthesize buy=_buy;
@property(nonatomic) long long groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) ChannelItem *channelItem; // @synthesize channelItem=_channelItem;
@property(retain, nonatomic) NSDictionary *stateInfo; // @synthesize stateInfo=_stateInfo;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) int fromVC; // @synthesize fromVC;
- (void).cxx_destruct;
- (id)previewActionItems;
- (double)getHeaderImageViewY;
- (void)loadTabViewAtIndex:(int)arg1;
- (void)reFresh;
- (void)reFreshWithNetworkDetection;
- (id)strVCtype;
- (int)vcType;
- (void)creatorViewDidClick:(id)arg1;
- (void)onTouchUpInsideMore:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)updateLoveBtnState;
- (void)onSongListItemLoaded:(id)arg1;
- (void)handleAlertViewClickedWithIndex:(long long)arg1;
- (void)doLoveFolder:(id)arg1;
- (void)cancleLoveFolder;
- (void)onCommentCountChangedNotification:(id)arg1;
- (void)onGlobalCommentButtonClicked:(id)arg1;
- (void)updateGlobalCommentButtonWithCount:(unsigned long long)arg1;
- (_Bool)isBlur;
- (id)getTitle;
- (id)getOrignalHeaderImage;
- (id)getSmallImageView;
- (id)getSmallView;
- (id)headerText;
- (id)headerPicURL;
- (unsigned long long)getHeadBgViewHeight;
- (unsigned long long)getHeadImageViewHeight;
- (id)init;
- (void)didLoadTabViewAtIndex:(int)arg1;
- (void)setCreaterSubViewFrame;
- (double)getClearViewHeight;
- (void)setupHeadTabBar;
- (void)onNotifyLoginSuccess:(id)arg1;
- (void)onNotifyBuyAlbumSuccess:(id)arg1;
- (void)reLayout:(long long)arg1;
- (id)buildHeaderView;
- (void)tabDidscroll:(id)arg1 toPoint:(struct CGPoint)arg2 withScrollDetia:(double)arg3;
- (void)clickGoPay;
- (void)clickPayAlbumBarEvent:(id)arg1;
- (void)freshPayAlbumBar:(_Bool)arg1;
- (void)onColorStyleChanged;
- (id)createPayAlbumBar;
- (_Bool)isPayAlbum;
- (long long)getHeaderImageViewStyle;
- (id)headerRightView;
- (void)buildSubTabVC;
- (id)initWithFromVC:(int)arg1 withSongListItem:(id)arg2 withAlbumId:(unsigned long long)arg3 withbPlayingUIPush:(_Bool)arg4;
- (id)initWithFromVC:(int)arg1 withSongListItem:(id)arg2 withAlbumId:(unsigned long long)arg3 withbPlayingUIPush:(_Bool)arg4 isPartView:(_Bool)arg5;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

