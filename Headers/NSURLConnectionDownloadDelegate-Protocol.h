//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSURLConnectionDelegate-Protocol.h"

@class NSURL, NSURLConnection;

@protocol NSURLConnectionDownloadDelegate <NSURLConnectionDelegate>
- (void)connectionDidFinishDownloading:(NSURLConnection *)arg1 destinationURL:(NSURL *)arg2;

@optional
- (void)connectionDidResumeDownloading:(NSURLConnection *)arg1 totalBytesWritten:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)connection:(NSURLConnection *)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 expectedTotalBytes:(long long)arg4;
@end

