//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIEmotionElement, UIEmotionPanel, UIImageView;

@interface UIEmotionDrawPanel : UIView
{
    NSMutableArray *emotions;
    UIEmotionElement *selected;
    UIImageView *dragPanel;
    UIImageView *dragEmotionView;
    UIEmotionPanel *container;
}

@property(nonatomic) __weak UIEmotionPanel *container; // @synthesize container;
@property(readonly, nonatomic) NSMutableArray *emotions; // @synthesize emotions;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelSelect;
- (void)restoreDraggedFaceSize;
- (void)enlargeDraggedFace;
- (void)moveDragPanelToPoint:(struct CGRect)arg1;
- (id)getElementAt:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)createDragPanel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

