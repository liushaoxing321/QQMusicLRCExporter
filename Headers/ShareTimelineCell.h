//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ShareObject, ShareView, UIImageView, UILabel, UIView;
@protocol ShareTimelineCellDelegate;

@interface ShareTimelineCell : UITableViewCell
{
    ShareObject *_shareObj;
    id <ShareTimelineCellDelegate> _delegate;
    ShareView *_shareView;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UIView *_segmentedLine;
    UILabel *_shareMsgLabel;
    UIImageView *_shareTypeIcon;
    UILabel *_shareTypeLabel;
}

+ (double)heightForText:(id)arg1 withFont:(id)arg2 andLimitedWidth:(double)arg3;
+ (double)cellHeightForShareObject:(id)arg1 withDateHeader:(_Bool)arg2;
@property(retain, nonatomic) UILabel *shareTypeLabel; // @synthesize shareTypeLabel=_shareTypeLabel;
@property(retain, nonatomic) UIImageView *shareTypeIcon; // @synthesize shareTypeIcon=_shareTypeIcon;
@property(retain, nonatomic) UILabel *shareMsgLabel; // @synthesize shareMsgLabel=_shareMsgLabel;
@property(retain, nonatomic) UIView *segmentedLine; // @synthesize segmentedLine=_segmentedLine;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) ShareView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) __weak id <ShareTimelineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ShareObject *shareObj; // @synthesize shareObj=_shareObj;
- (void).cxx_destruct;
- (_Bool)isDate:(id)arg1 equalToDateIgnoringTime:(id)arg2;
- (_Bool)isYesterday:(id)arg1;
- (_Bool)isToday:(id)arg1;
- (void)readyToPlayShareObj:(id)arg1;
- (void)startRequestPlayingShareObj:(id)arg1;
- (void)playStatusDidChange:(id)arg1;
- (void)playListDidChange:(id)arg1;
- (void)didClickStopBtn;
- (void)didClickPlayBtn;
- (void)didClickZanBtn;
- (void)didClickDeleteBtn;
- (void)didClick;
- (void)setShareObject:(id)arg1 showDateHeader:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)reuseIdentifier;
- (void)dealloc;

@end

