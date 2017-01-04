//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSDictionary;

@interface FocusProtocol : ProtocolBaseJason
{
    NSDictionary *_rawJsonData;
    NSArray *_focusArray;
}

@property(retain, nonatomic) NSArray *focusArray; // @synthesize focusArray=_focusArray;
@property(retain, nonatomic) NSDictionary *rawJsonData; // @synthesize rawJsonData=_rawJsonData;
- (void).cxx_destruct;
- (id)_translateToFocusItem:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (_Bool)needCheckDidSendRequest;
- (_Bool)canReportError;
- (int)cid;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

