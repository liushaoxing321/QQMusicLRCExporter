//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LoginViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "ValViewControllerDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIControl, UITextField;

@interface CommonLoginViewController : LoginViewController <ValViewControllerDelegate, UITextFieldDelegate, UITableViewDataSource>
{
    _Bool _needSecureCode;
    _Bool _isPushShow;
    UIButton *_loginBtn;
    UIButton *_cancelBtn;
    UIActivityIndicatorView *_loginACView;
    UIControl *_registerButton;
    UITextField *_qqNumberTextField;
    UITextField *_qqPasswordTextField;
    UIButton *_clearBtn;
}

@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UITextField *qqPasswordTextField; // @synthesize qqPasswordTextField=_qqPasswordTextField;
@property(retain, nonatomic) UITextField *qqNumberTextField; // @synthesize qqNumberTextField=_qqNumberTextField;
@property(retain, nonatomic) UIControl *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIActivityIndicatorView *loginACView; // @synthesize loginACView=_loginACView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(nonatomic) _Bool isPushShow; // @synthesize isPushShow=_isPushShow;
@property(nonatomic) _Bool needSecureCode; // @synthesize needSecureCode=_needSecureCode;
- (void).cxx_destruct;
- (void)clearSearchText:(id)arg1;
- (void)doit;
- (void)forgetPwdButtonClicked:(id)arg1;
- (void)registerButtonClicked:(id)arg1;
- (_Bool)isValidInput:(id *)arg1;
- (void)cancleKeyboard:(id)arg1;
- (void)enbaleUI:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)textFieldTextChanged:(id)arg1;
- (void)inputFieldTouchDown:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTouchupInsideDoneModal:(id)arg1;
- (void)ValViewControllerDidContinue:(id)arg1;
- (void)ValViewControllerDidCancel:(id)arg1;
- (id)createClearInputButton;
- (void)back:(id)arg1;
- (int)limitTableWidth;
- (void)headerFinish:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getTableFooterView;
- (void)createNewUserAndForgetPwd;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
