//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSArray;

@interface LocalNotificationListProtocol : ProtocolBase
{
    NSArray *idList;
}

@property(retain, nonatomic) NSArray *idList; // @synthesize idList;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end

