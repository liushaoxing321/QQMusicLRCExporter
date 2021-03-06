//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableString, NSString;

@interface QMImportSongsHttpRequest : NSObject
{
    NSString *_method;
    NSString *_uri;
    NSData *_postData;
    NSString *_clientIp;
    long long _clientPort;
    long long _statusCode;
    NSDictionary *_headers;
    NSDictionary *_params;
    NSMutableString *_rspBody;
}

@property(retain, nonatomic) NSMutableString *rspBody; // @synthesize rspBody=_rspBody;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) long long clientPort; // @synthesize clientPort=_clientPort;
@property(retain, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
- (void).cxx_destruct;
- (void)addRspMessage:(id)arg1;
- (id)responsePacket;
- (id)responseHeader;
- (id)queryHeadersWithKey:(id)arg1;
- (id)queryParamsWithKey:(id)arg1;
- (id)paramsWithQueryString:(const char *)arg1;
- (id)headersWithRequestHeaders:(const struct mg_header *)arg1 Num:(int)arg2;
- (id)initWithMgRequsetInfo:(const struct mg_request_info *)arg1;

@end

