//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface TTMarkupStripper : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_strings;
}

- (id)parse:(id)arg1;
- (id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

