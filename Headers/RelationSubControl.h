//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel;

@interface RelationSubControl : UIControl
{
    UILabel *_titleLabel;
    unsigned long long *_number;
}

@property(nonatomic) unsigned long long *number; // @synthesize number=_number;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)getImageNameByType:(unsigned long long)arg1;
- (void)buildViewWithType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2;

@end

