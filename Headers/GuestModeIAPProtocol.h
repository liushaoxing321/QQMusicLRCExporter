//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSString;

@interface GuestModeIAPProtocol : ProtocolBaseJason
{
    int _optype;
    int _subCode;
    NSString *_msg;
    NSArray *_list;
}

@property(nonatomic) int subCode; // @synthesize subCode=_subCode;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int optype; // @synthesize optype=_optype;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end
