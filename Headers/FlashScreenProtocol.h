//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSMutableArray;

@interface FlashScreenProtocol : ProtocolBaseJason
{
    NSMutableArray *flashScreens;
}

@property(retain, nonatomic) NSMutableArray *flashScreens; // @synthesize flashScreens;
- (void).cxx_destruct;
- (id)splashKeyForCurrentDevice;
- (void)onParseJasonData:(id)arg1;
- (_Bool)canReportError;
- (int)cid;
- (id)getUrl;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)init;

@end

