//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBase.h"

@interface PushNotificationProtocol : ProtocolBase
{
    _Bool _bind;
}

+ (void)bindDeviceToken:(_Bool)arg1;
+ (void)updateDeviceToken:(id)arg1;
+ (id)toHexTokenString:(id)arg1;
@property _Bool bind; // @synthesize bind=_bind;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

