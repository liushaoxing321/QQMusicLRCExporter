//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol QlChangeSmallScreenDelegate;

@interface QLSimpleTopView : UIView
{
    UILabel *_lblTitle;
    UIButton *_btnUnFoldScreen;
    id <QlChangeSmallScreenDelegate> _delegate;
}

@property id <QlChangeSmallScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)updateTitle:(id)arg1;
- (void)setTopViewFoldMode:(_Bool)arg1;
- (void)unFoldSmallScreenClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

