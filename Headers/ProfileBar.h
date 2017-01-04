//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ProfileNumberButton;
@protocol ProfileBarDelegate;

@interface ProfileBar : UIView
{
    _Bool _hideShares;
    int _fanNum;
    int _followNum;
    int _shareNum;
    id <ProfileBarDelegate> _delegate;
    ProfileNumberButton *_follow;
    ProfileNumberButton *_fans;
    ProfileNumberButton *_shares;
}

@property(retain, nonatomic) ProfileNumberButton *shares; // @synthesize shares=_shares;
@property(retain, nonatomic) ProfileNumberButton *fans; // @synthesize fans=_fans;
@property(retain, nonatomic) ProfileNumberButton *follow; // @synthesize follow=_follow;
@property(nonatomic) __weak id <ProfileBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideShares; // @synthesize hideShares=_hideShares;
@property(nonatomic) int shareNum; // @synthesize shareNum=_shareNum;
@property(nonatomic) int followNum; // @synthesize followNum=_followNum;
@property(nonatomic) int fanNum; // @synthesize fanNum=_fanNum;
- (void).cxx_destruct;
- (void)addFansNum:(int)arg1;
- (void)setFollow:(int)arg1 fan:(int)arg2 share:(int)arg3;
- (void)addAllLines:(struct CGRect)arg1;
- (void)addLines:(id)arg1;
- (void)addAllButtons:(struct CGRect)arg1;
- (void)clickButton:(id)arg1;
- (void)clickButtonCancel:(id)arg1;
- (void)clickButtonUpOutside:(id)arg1;
- (void)clickButtonUp:(id)arg1;
- (void)clickButtonDown:(id)arg1;
- (id)createNumberButton:(id)arg1 rect:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 hideShares:(_Bool)arg2;

@end
