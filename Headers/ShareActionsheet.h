//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEActionSheetAdDelegate-Protocol.h"
#import "BEActionSheetDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "ShareTextViewDelegate-Protocol.h"

@class BEActionSheetStyleAd, JSResponseCallbackObject, NSArray, NSString, ShareInfo, ShareTextView, SharedProtocol, UIImage, WVJBResponseCallbackObject;

@interface ShareActionsheet : NSObject <BEActionSheetDelegate, ImageManagerDelegate, ShareTextViewDelegate, ProtocolHostDelegate, BEActionSheetAdDelegate>
{
    _Bool _hasTopCustomView;
    _Bool _isBlackModel;
    _Bool _shareNotUserDefault;
    ShareInfo *_shareInfo;
    WVJBResponseCallbackObject *_responseCallbackObject;
    JSResponseCallbackObject *_MClientResponseObject;
    NSArray *_recommedVoiceInfoArray;
    NSString *_albumDesc;
    UIImage *_albumImage;
    ShareTextView *_shareTextView;
    unsigned long long _shareTextViewType;
    SharedProtocol *_sharedProtocol;
    BEActionSheetStyleAd *_actionSheet;
}

@property(retain, nonatomic) BEActionSheetStyleAd *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) _Bool shareNotUserDefault; // @synthesize shareNotUserDefault=_shareNotUserDefault;
@property(retain, nonatomic) SharedProtocol *sharedProtocol; // @synthesize sharedProtocol=_sharedProtocol;
@property(nonatomic) unsigned long long shareTextViewType; // @synthesize shareTextViewType=_shareTextViewType;
@property(retain, nonatomic) ShareTextView *shareTextView; // @synthesize shareTextView=_shareTextView;
@property(retain, nonatomic) UIImage *albumImage; // @synthesize albumImage=_albumImage;
@property(retain, nonatomic) NSString *albumDesc; // @synthesize albumDesc=_albumDesc;
@property(retain) NSArray *recommedVoiceInfoArray; // @synthesize recommedVoiceInfoArray=_recommedVoiceInfoArray;
@property(nonatomic) _Bool isBlackModel; // @synthesize isBlackModel=_isBlackModel;
@property(nonatomic) _Bool hasTopCustomView; // @synthesize hasTopCustomView=_hasTopCustomView;
@property(retain, nonatomic) JSResponseCallbackObject *MClientResponseObject; // @synthesize MClientResponseObject=_MClientResponseObject;
@property(retain, nonatomic) WVJBResponseCallbackObject *responseCallbackObject; // @synthesize responseCallbackObject=_responseCallbackObject;
@property(retain, nonatomic) ShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
- (void).cxx_destruct;
- (void)tryExecTencentWeiboResp:(int)arg1;
- (void)tryExecSinaWeiboResp:(int)arg1;
- (void)addClickStateShareIndex:(int)arg1;
- (void)hideActionSheet;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)setAlbumDescAndAlbumImage;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToPhotosAlbum;
- (void)shareBlogSuccess;
- (void)shareTOQZoneWithMessage:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)shareToTencentWeiboWithMessage:(id)arg1;
- (void)shareToSinaResultNotify:(id)arg1;
- (void)bandSinaWithState:(id)arg1;
- (void)bandNotify:(id)arg1;
- (void)shareMessage:(id)arg1 WithShareIndex:(int)arg2;
- (void)shareToJoinQzone;
- (void)shareToQZoneAppOrH5;
- (void)shareToQZone;
- (void)shareToQQ;
- (id)formatWXShareUrl:(id)arg1;
- (void)showWXMissView:(int)arg1;
- (void)sendMsgToWXReq:(id)arg1 text:(id)arg2 isSendTosession:(_Bool)arg3;
- (void)shareToWeiXin:(_Bool)arg1;
- (void)UIStatusBarOrientation:(id)arg1;
- (id)getShareToGlobalCommentLabelText;
- (void)shareToSinaBlogAndGloablComment:(id)arg1;
- (void)sendButtonClickWithMessage:(id)arg1 shareToGlobalComment:(_Bool)arg2;
- (void)showShareTextViewWithIndex:(long long)arg1;
- (void)dismiss:(id)arg1;
- (void)AdButtonClickWithURL:(id)arg1;
- (void)saveURLToPasteboard;
- (void)clickToShare:(id)arg1 OnIndex:(long long)arg2;
- (void)directShareToTencentBlog;
- (void)directShareToSinaBlog;
- (void)directShareToQZone;
- (void)directShareToQQ;
- (void)directShareToWXSession;
- (void)directShareToWeixinTimeline;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(long long)arg2;
- (void)showActionsheet;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
