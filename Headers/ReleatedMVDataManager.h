//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@interface ReleatedMVDataManager : NSObject <ProtocolHostDelegate>
{
}

+ (id)sharedManager;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)fetchReleatedMVSongList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

