//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCRPCRequest.h"

@class FMCImage, FMCKeyboardProperties, NSMutableArray, NSString;

@interface FMCSetGlobalProperties : FMCRPCRequest
{
}

@property(retain) FMCKeyboardProperties *keyboardProperties;
@property(retain) FMCImage *menuIcon;
@property(retain) NSString *menuTitle;
@property(retain) NSMutableArray *vrHelp;
@property(retain) NSString *vrHelpTitle;
@property(retain) NSMutableArray *timeoutPrompt;
@property(retain) NSMutableArray *helpPrompt;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

