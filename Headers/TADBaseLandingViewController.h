//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TADRichViewController.h"

@class NSURL, TADLandingDurationItem, UIView;
@protocol TADLandingViewControllerDelegate, TADLandingViewControllerLoadingViewDelegate;

@interface TADBaseLandingViewController : TADRichViewController
{
    NSURL *_adURL;
    id <TADLandingViewControllerDelegate> _delegate;
    TADLandingDurationItem *_landingViewItem;
    UIView<TADLandingViewControllerLoadingViewDelegate> *_jumpingAppstoreIndicator;
}

@property(retain, nonatomic) UIView<TADLandingViewControllerLoadingViewDelegate> *jumpingAppstoreIndicator; // @synthesize jumpingAppstoreIndicator=_jumpingAppstoreIndicator;
@property(retain, nonatomic) TADLandingDurationItem *landingViewItem; // @synthesize landingViewItem=_landingViewItem;
@property(nonatomic) __weak id <TADLandingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *adURL; // @synthesize adURL=_adURL;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

