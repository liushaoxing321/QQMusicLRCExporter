//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol QMBulletGiftSelectHeaderViewDelegate;

@interface QMBulletGiftSelectHeaderView : UIView
{
    UILabel *title;
    UIButton *buyLink;
    UIImageView *starView;
    id <QMBulletGiftSelectHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QMBulletGiftSelectHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView;
@property(retain, nonatomic) UIButton *buyLink; // @synthesize buyLink;
@property(retain, nonatomic) UILabel *title; // @synthesize title;
- (void).cxx_destruct;
- (void)didClickBuyMore:(id)arg1;
- (void)updateBalance:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

