//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface BETouchView : UIView
{
    id _target;
    SEL _fun;
    NSMutableDictionary *_backgroundColorS;
    CDUnknownBlockType _block;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSMutableDictionary *backgroundColorS; // @synthesize backgroundColorS=_backgroundColorS;
@property SEL fun; // @synthesize fun=_fun;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)setTouchBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setSubViewState:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTarget:(id)arg1 Fun:(SEL)arg2;
- (id)init;

@end

