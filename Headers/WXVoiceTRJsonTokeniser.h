//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WXVoiceTRJsonUTF8Stream;

@interface WXVoiceTRJsonTokeniser : NSObject
{
    WXVoiceTRJsonUTF8Stream *_stream;
    NSString *_error;
}

@property(copy) NSString *error; // @synthesize error=_error;
- (int)getToken:(id *)arg1;
- (int)getNumberToken:(id *)arg1;
- (int)getStringToken:(id *)arg1;
- (_Bool)decodeHexQuad:(unsigned short *)arg1;
- (_Bool)decodeEscape:(unsigned short)arg1 into:(unsigned short *)arg2;
- (int)match:(const char *)arg1 length:(unsigned long long)arg2 retval:(int)arg3;
- (void)appendData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

