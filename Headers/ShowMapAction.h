//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenUrlAction.h"

@class NSString;

@interface ShowMapAction : OpenUrlAction
{
    NSString *location;
}

+ (id)actionWithLocation:(id)arg1;
@property(copy, nonatomic) NSString *location; // @synthesize location;
- (void)dealloc;
- (id)alertButtonTitle;
- (id)alertMessage;
- (id)alertTitle;
- (id)title;
- (id)initWithLocation:(id)arg1;

@end

