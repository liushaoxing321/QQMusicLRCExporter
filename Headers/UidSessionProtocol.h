//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBase.h"

@interface UidSessionProtocol : ProtocolBase
{
}

- (_Bool)containReturnCode;
- (int)wifiListenQuality:(id)arg1;
- (id)encodeXmlLog:(char *)arg1;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)startWork;
- (_Bool)isForbiddenFreeFlow;
- (_Bool)canReportError;
- (int)cid;
- (id)getUrl;
- (id)createGetUIDSIDPostData;

@end

