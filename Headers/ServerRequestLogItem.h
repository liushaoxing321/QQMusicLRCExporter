//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface ServerRequestLogItem : NSObject
{
    _Bool _allowUploadByCarrier;
    _Bool _canceled;
    int _retryCount;
    int _seq;
    int _eServerRequestLogType;
    int _eServerRequestLogResult;
    unsigned long long _uin;
    NSString *_dateOriginal;
    NSDate *_dateFrom;
    NSString *_log;
    NSString *_crc;
    NSString *_msg;
}

@property(retain) NSString *msg; // @synthesize msg=_msg;
@property(retain) NSString *crc; // @synthesize crc=_crc;
@property(retain) NSString *log; // @synthesize log=_log;
@property int eServerRequestLogResult; // @synthesize eServerRequestLogResult=_eServerRequestLogResult;
@property int eServerRequestLogType; // @synthesize eServerRequestLogType=_eServerRequestLogType;
@property int seq; // @synthesize seq=_seq;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property int retryCount; // @synthesize retryCount=_retryCount;
@property _Bool allowUploadByCarrier; // @synthesize allowUploadByCarrier=_allowUploadByCarrier;
@property(retain) NSDate *dateFrom; // @synthesize dateFrom=_dateFrom;
@property(retain) NSString *dateOriginal; // @synthesize dateOriginal=_dateOriginal;
@property unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;

@end
