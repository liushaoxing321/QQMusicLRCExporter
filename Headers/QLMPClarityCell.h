//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface QLMPClarityCell : UITableViewCell
{
    UIImageView *_separator;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *separator; // @synthesize separator=_separator;
- (void)setSeparatorShown:(_Bool)arg1;
- (void)setTitleSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

