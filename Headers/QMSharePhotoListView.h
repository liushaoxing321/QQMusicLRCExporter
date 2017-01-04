//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMSharePhotoListDelegate-Protocol.h"

@class NSMutableArray, NSString, QMTabViewDelegate, QMTitleTabView, UILabel, UITableView;
@protocol QMSharePhotoListDelegate;

@interface QMSharePhotoListView : UIView <QMSharePhotoListDelegate>
{
    id <QMSharePhotoListDelegate> _delegate;
    NSString *_strSelectedTitle;
    UITableView *_tblView;
    QMTabViewDelegate *_tableDataDelegate;
    QMTitleTabView *_tabBar;
    NSMutableArray *_arrayData;
    UILabel *_lblDescription;
}

@property(retain, nonatomic) UILabel *lblDescription; // @synthesize lblDescription=_lblDescription;
@property(retain, nonatomic) NSMutableArray *arrayData; // @synthesize arrayData=_arrayData;
@property(retain, nonatomic) QMTitleTabView *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) QMTabViewDelegate *tableDataDelegate; // @synthesize tableDataDelegate=_tableDataDelegate;
@property(retain, nonatomic) UITableView *tblView; // @synthesize tblView=_tblView;
@property(retain, nonatomic) NSString *strSelectedTitle; // @synthesize strSelectedTitle=_strSelectedTitle;
@property(nonatomic) __weak id <QMSharePhotoListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)qmScrollViewDidScroll:(id)arg1;
- (void)qmPhotoTableViewDidClickTitle:(id)arg1 object:(id)arg2;
- (id)getDefaultAssetItem;
- (id)getMyRecommedData;
- (void)reloadTableViewData;
- (id)tableFootView;
- (id)tableHeaderView;
- (void)reloadLocalData:(_Bool)arg1;
- (void)rebuildAllData:(id)arg1 tabName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeTableAllConnection;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
