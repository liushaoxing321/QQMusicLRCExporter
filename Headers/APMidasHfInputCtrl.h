//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UILabel, UIOperatorView, UITextField, UIView;

@interface APMidasHfInputCtrl : APMidasBaseViewCtrl <UITextFieldDelegate, MFMessageComposeViewControllerDelegate, UIAlertViewDelegate>
{
    UITextField *phoneTf;
    UIView *inputViews;
    UIButton *hfpayRuleBtn;
    UIOperatorView *operatorView;
    long long btnTag;
    UIColor *normalBtnTextColor;
    NSString *hfStatus;
    UILabel *monthTipsLabel;
    UILabel *tipsLabel;
}

@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel;
@property(nonatomic) __weak UILabel *monthTipsLabel; // @synthesize monthTipsLabel;
@property(retain, nonatomic) NSString *hfStatus; // @synthesize hfStatus;
@property(retain, nonatomic) UIColor *normalBtnTextColor; // @synthesize normalBtnTextColor;
@property(nonatomic) long long btnTag; // @synthesize btnTag;
@property(nonatomic) __weak UIOperatorView *operatorView; // @synthesize operatorView;
@property(nonatomic) __weak UIButton *hfpayRuleBtn; // @synthesize hfpayRuleBtn;
@property(nonatomic) __weak UIView *inputViews; // @synthesize inputViews;
@property(nonatomic) __weak UITextField *phoneTf; // @synthesize phoneTf;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)showSmsComposerSheet;
- (void)showSMSPicker;
- (void)setBtnAllTitle:(id)arg1 title:(id)arg2;
- (void)toHFResultCtrl;
- (void)onGetPayStatusSuccess;
- (void)getHfPayStatus;
- (void)updateUiForSaveSuccess;
- (void)updateUiForSaveErr:(id)arg1;
- (void)onSubmit:(id)arg1;
- (void)resetProcedure;
- (void)openRuleView;
- (void)textFieldDidChangedText:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

