//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DownloadProperty : NSObject
{
    _Bool _useMid;
    int _songRateType;
    int _downloadErrorCode;
    NSString *_host;
}

+ (id)createDownloadProperty:(id)arg1 songRateType:(int)arg2;
@property int downloadErrorCode; // @synthesize downloadErrorCode=_downloadErrorCode;
@property _Bool useMid; // @synthesize useMid=_useMid;
@property int songRateType; // @synthesize songRateType=_songRateType;
@property(retain) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

