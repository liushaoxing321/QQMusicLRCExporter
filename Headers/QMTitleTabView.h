//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIScrollView;

@interface QMTitleTabView : UIView
{
    NSMutableArray *_btnsArray;
    UIScrollView *_scrView;
    struct CGSize _btnSize;
    double _fbtnMargin;
    double _fLeft;
    unsigned long long _nMax;
    NSString *_strSelected;
    CDUnknownBlockType _titleBarBlock;
}

@property(copy, nonatomic) CDUnknownBlockType titleBarBlock; // @synthesize titleBarBlock=_titleBarBlock;
- (void).cxx_destruct;
- (void)selectTitle:(id)arg1 animate:(_Bool)arg2;
- (void)adjustBtnsFrame;
- (void)addBtns:(id)arg1;
- (void)inserBtns:(id)arg1;
- (void)btnPressed:(id)arg1;
- (void)removeAllTabs;
- (id)createBtnWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2 btnSize:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2;

@end

