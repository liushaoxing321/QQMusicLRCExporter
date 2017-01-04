//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, UISwitch, UIWebView;

@interface QPlayMoreVC : SkinViewController <UITableViewDataSource, ImageManagerDelegate>
{
    _Bool _isPoped;
    NSArray *_carInfoArray;
    NSString *_carListJosnStr;
    UIWebView *_browser;
    UISwitch *_airplayLyricSwitch;
    UISwitch *_bluetoothCampatibilitySwitch;
    NSIndexPath *_bluetoothCampatibilityIndexPath;
    NSIndexPath *_airplayLyricIndexPath;
}

@property(retain, nonatomic) NSIndexPath *airplayLyricIndexPath; // @synthesize airplayLyricIndexPath=_airplayLyricIndexPath;
@property(retain, nonatomic) NSIndexPath *bluetoothCampatibilityIndexPath; // @synthesize bluetoothCampatibilityIndexPath=_bluetoothCampatibilityIndexPath;
@property(retain, nonatomic) UISwitch *bluetoothCampatibilitySwitch; // @synthesize bluetoothCampatibilitySwitch=_bluetoothCampatibilitySwitch;
@property(retain, nonatomic) UISwitch *airplayLyricSwitch; // @synthesize airplayLyricSwitch=_airplayLyricSwitch;
@property(retain, nonatomic) UIWebView *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSString *carListJosnStr; // @synthesize carListJosnStr=_carListJosnStr;
@property(nonatomic) _Bool isPoped; // @synthesize isPoped=_isPoped;
@property(retain, nonatomic) NSArray *carInfoArray; // @synthesize carInfoArray=_carInfoArray;
- (void).cxx_destruct;
- (void)onNotifyCarBluetoothAutoClosed:(id)arg1;
- (void)_onSupportAirplayLyricSwitch:(id)arg1;
- (void)setBluetoothCompatibility:(_Bool)arg1;
- (void)_onBluetoothCompatibilitySwitch:(id)arg1;
- (void)onCarInfoButtonClick:(id)arg1;
- (void)initThreeButtonCell:(id)arg1 atButtonIndex:(long long)arg2;
- (id)carlistForJsonStr:(id)arg1;
- (id)loadRecentCarInfo;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)vcType;
- (void)viewDidPop;
- (void)viewWillPop;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
