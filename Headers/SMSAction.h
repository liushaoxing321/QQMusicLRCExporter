//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CallAction.h"

@class NSString;

@interface SMSAction : CallAction
{
    NSString *body;
}

+ (id)actionWithNumber:(id)arg1;
+ (id)actionWithNumber:(id)arg1 body:(id)arg2;
+ (id)urlForNumber:(id)arg1 withBody:(id)arg2;
@property(copy, nonatomic) NSString *body; // @synthesize body;
- (void)dealloc;
- (id)alertButtonTitle;
- (id)alertMessage;
- (id)alertTitle;
- (id)title;
- (id)initWithNumber:(id)arg1;
- (id)initWithNumber:(id)arg1 body:(id)arg2;

@end

