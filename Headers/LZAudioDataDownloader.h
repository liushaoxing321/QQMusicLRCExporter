//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol LZAudioDataDownloadDelegate;

@interface LZAudioDataDownloader : NSObject
{
    id <LZAudioDataDownloadDelegate> _delegate;
}

@property(nonatomic) __weak id <LZAudioDataDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)downloadDetailInfo;
- (_Bool)isErrorCanRetry:(id)arg1;
- (double)downloadCostTime;
- (double)downloadSpeed;
- (long long)continuousLengh;
- (struct _NSRange)downloadRange;
- (id)taskItem;
- (_Bool)beginDownload:(id)arg1;
- (void)cancel;

@end

