//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@interface ListenedSongListTid : NSObject <NSCoding>
{
    long long _openedTime;
    long long _songListTid;
}

@property long long songListTid; // @synthesize songListTid=_songListTid;
@property long long openedTime; // @synthesize openedTime=_openedTime;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

