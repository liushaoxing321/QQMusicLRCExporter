//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableURLRequest;

@interface UploadLogFile : NSObject
{
    NSMutableURLRequest *urlRequest_;
}

@property(retain, nonatomic) NSMutableURLRequest *urlRequest_; // @synthesize urlRequest_;
- (void)uploadLogPkg:(id)arg1 delegate:(id)arg2 succSel:(SEL)arg3 faildSel:(SEL)arg4;
- (id)makeLogPkg:(int)arg1 data:(id)arg2 uin:(unsigned int)arg3 appid:(unsigned int)arg4 st:(id)arg5 createTime:(long long)arg6;
- (void)dealloc;
- (id)init;

@end

