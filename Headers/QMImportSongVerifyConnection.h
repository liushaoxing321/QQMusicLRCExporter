//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIHTTPRequest, NSMutableData, NSMutableDictionary, NSString;
@protocol QMImportSongVerifyConnectionDelegate;

@interface QMImportSongVerifyConnection : NSObject
{
    id <QMImportSongVerifyConnectionDelegate> _host;
    ASIHTTPRequest *_request;
    NSMutableData *_receivedData;
    NSString *_hostIp;
    long long *_hostPort;
    NSMutableDictionary *_headerParams;
}

@property(retain, nonatomic) NSMutableDictionary *headerParams; // @synthesize headerParams=_headerParams;
@property(nonatomic) long long *hostPort; // @synthesize hostPort=_hostPort;
@property(retain, nonatomic) NSString *hostIp; // @synthesize hostIp=_hostIp;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <QMImportSongVerifyConnectionDelegate> host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)close;
- (void)cancelConnection;
- (void)start;
- (id)url;
- (id)queryString;
- (id)queryPairWithKey:(id)arg1;
- (void)addHeaderParamsKey:(id)arg1 andValue:(id)arg2;
- (id)initWithHostIp:(id)arg1 andPort:(long long)arg2;

@end

