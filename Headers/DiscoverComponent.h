//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DiscoverComponent : NSObject
{
    NSString *_title;
    NSString *_iconName;
    NSString *_selectedIconName;
    SEL _action;
    id _target;
}

+ (id)componentWithTitle:(id)arg1 icon:(id)arg2 selectedIcon:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)componentWithTitle:(id)arg1 icon:(id)arg2 target:(id)arg3 action:(SEL)arg4;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *selectedIconName; // @synthesize selectedIconName=_selectedIconName;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 selectedIcon:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)performAction;

@end

