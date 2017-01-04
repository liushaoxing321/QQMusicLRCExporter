//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CGUpnpControlPointDelegate;

@interface QPlayUpnpControlPoint : NSObject
{
    void *cObject;
    id <CGUpnpControlPointDelegate> delegate;
}

@property __weak id <CGUpnpControlPointDelegate> delegate; // @synthesize delegate;
@property(readonly) void *cObject; // @synthesize cObject;
- (void).cxx_destruct;
- (id)deviceForUDN:(id)arg1;
- (id)devices;
- (void)setSsdpSearchMX:(long long)arg1;
- (long long)ssdpSearchMX;
- (void)searchWithST:(id)arg1 withQPlaySeed:(id)arg2;
- (void)searchWithST:(id)arg1;
- (void)searchWithUdn:(id)arg1;
- (void)search;
- (_Bool)isRunning;
- (_Bool)stop;
- (_Bool)start;
- (_Bool)unsubscribe:(id)arg1;
- (_Bool)subscribe:(id)arg1 timeoutInSecs:(int *)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

