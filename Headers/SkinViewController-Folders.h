//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

@interface SkinViewController (Folders)
+ (id)addArrowToCell:(id)arg1 inTable:(id)arg2 indexPath:(id)arg3;
+ (id)createArrowImageView;
+ (void)addSeprateLineToCell:(id)arg1 inTable:(id)arg2 indexPath:(id)arg3 cellType:(int)arg4;
+ (void)addSeprateLineToCell:(id)arg1 inTable:(id)arg2 indexPath:(id)arg3;
+ (double)cellHeightForTable:(id)arg1 indexPath:(id)arg2;
+ (struct SLineIndent)_indentSeprateLineForRow:(unsigned long long)arg1 rowCount:(unsigned long long)arg2 cellType:(int)arg3;
+ (double)indentByCellType:(int)arg1;
- (id)folderCellModelFromFolderInfo:(id)arg1;
- (void)updateComRootCellNumber:(id)arg1 folderInfo:(id)arg2 cellFrom:(int)arg3;
- (id)getSubTitleInfoWithFolder:(id)arg1 withPart1:(id)arg2;
- (void)fillComRootMyMusicCell:(id)arg1 indexPath:(id)arg2 channelItem:(id)arg3 hiddenArrow:(_Bool)arg4;
- (void)fillComRootMyMusicCell:(id)arg1 indexPath:(id)arg2 folderInfo:(id)arg3 cellFrom:(int)arg4;
- (id)imageCell:(id)arg1 RowAtIndexPath:(id)arg2 identifier:(id)arg3;
- (id)addFootView:(id)arg1;
- (id)addHeaderView:(id)arg1;
- (void)newPlainTable;
- (void)newTable;
@end

