//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPConnection.h"

@class TADDownloadTask;

@interface TADHTTPConnection : HTTPConnection
{
    long long connectionId;
    TADDownloadTask *currentDownloadTask;
    _Bool _willDisconnect;
}

+ (void)ResetHTTPConnectionId;
+ (long long)CurrentHTTPConnectionId;
+ (_Bool)hasRecentNonce:(id)arg1;
+ (id)generateNonce;
+ (void)initialize;
@property(nonatomic) _Bool willDisconnect; // @synthesize willDisconnect=_willDisconnect;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)didTaskFailed:(id)arg1 response:(id)arg2;
- (void)didTaskFinished:(id)arg1 response:(id)arg2;
- (void)didReciveDataError:(id)arg1 error:(id)arg2;
- (void)didReciveData:(id)arg1;
- (_Bool)tryRedirectToOriginalUrl;
- (_Bool)tryFetchDataFromNetwork;
- (void)die;
- (_Bool)shouldDie;
- (void)finishResponse;
- (void)responseDidAbort:(id)arg1;
- (void)responseHasAvailableData:(id)arg1;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (id)preprocessErrorResponse:(id)arg1;
- (id)preprocessResponse:(id)arg1;
- (id)dateAsString:(id)arg1;
- (void)handleResourceNotFound;
- (void)handleUnknownMethod:(id)arg1;
- (void)handleInvalidRequest:(id)arg1;
- (void)handleAuthenticationFailed;
- (void)handleVersionNotSupported:(id)arg1;
- (void)finishBody;
- (void)processBodyData:(id)arg1;
- (void)prepareForBodyWithSize:(unsigned long long)arg1;
- (id)webSocketForURI:(id)arg1;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (id)filePathForURI:(id)arg1 allowDirectory:(_Bool)arg2;
- (id)filePathForURI:(id)arg1;
- (id)directoryIndexFileNames;
- (void)continueSendingMultiRangeResponseBody;
- (void)continueSendingSingleRangeResponseBody;
- (void)continueSendingStandardResponseBody;
- (unsigned long long)writeQueueSize;
- (void)sendResponseHeadersAndBody;
- (id)chunkedTransferFooter;
- (id)chunkedTransferSizeLineForLength:(unsigned long long)arg1;
- (id)newMultiRangeResponse:(unsigned long long)arg1;
- (id)newUniRangeResponse:(unsigned long long)arg1;
- (void)replyToHTTPRequest;
- (id)requestURI;
- (_Bool)parseRangeRequest:(id)arg1 withContentLength:(unsigned long long)arg2;
- (id)parseGetParams;
- (id)parseParams:(id)arg1;
- (void)startReadingRequest;
- (void)startConnection;
- (void)stop;
- (void)start;
- (void)addBasicAuthChallenge:(id)arg1;
- (void)addDigestAuthChallenge:(id)arg1;
- (_Bool)isAuthenticated;
- (id)passwordForUser:(id)arg1;
- (id)realm;
- (_Bool)useDigestAccessAuthentication;
- (_Bool)isPasswordProtected:(id)arg1;
- (id)sslIdentityAndCertificates;
- (_Bool)isSecureServer;
- (_Bool)expectsRequestBodyFromMethod:(id)arg1 atPath:(id)arg2;
- (_Bool)supportsMethod:(id)arg1 atPath:(id)arg2;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

