//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton;

@interface ViewHistoryMsgCell : UITableViewCell
{
    UIActivityIndicatorView *_loadingView;
    UIButton *_viewHistoryBtn;
}

@property(retain, nonatomic) UIButton *viewHistoryBtn; // @synthesize viewHistoryBtn=_viewHistoryBtn;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (id)initWithActionTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)reuseIdentifier;

@end
