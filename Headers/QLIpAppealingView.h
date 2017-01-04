//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QLASIHTTPRequest, QLSImageView, UIButton, UIImageView, UILabel;

@interface QLIpAppealingView : UIView
{
    _Bool isSubmitting;
    _Bool resultIsShown;
    _Bool resultIsOK;
    long long playType;
    NSString *cnlid;
    NSString *cid;
    NSString *vid;
    NSString *expandInfo;
    NSString *channelID;
    NSString *coverID;
    QLASIHTTPRequest *_dataRequest;
    QLSImageView *_noteView;
    UILabel *_lblDesc;
    UIImageView *_sepImgView;
    UILabel *_lblAppealing;
    UIButton *_btnAppeal;
    UIButton *_btnExit;
    UIImageView *_resultImgView;
}

@property(retain) UIImageView *resultImgView; // @synthesize resultImgView=_resultImgView;
@property(retain) UIButton *btnExit; // @synthesize btnExit=_btnExit;
@property(retain) UIButton *btnAppeal; // @synthesize btnAppeal=_btnAppeal;
@property(retain) UILabel *lblAppealing; // @synthesize lblAppealing=_lblAppealing;
@property(retain) UIImageView *sepImgView; // @synthesize sepImgView=_sepImgView;
@property(retain) UILabel *lblDesc; // @synthesize lblDesc=_lblDesc;
@property(retain) QLSImageView *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSString *vid; // @synthesize vid;
@property(copy, nonatomic) NSString *coverID; // @synthesize coverID;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID;
- (id)filterLocationCharaters:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)showResultView:(_Bool)arg1;
- (void)submit:(id)arg1;
- (void)resetSubviewsStatus;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3 playType:(long long)arg4 expandInfo:(id)arg5;
- (void)dealloc;

@end
