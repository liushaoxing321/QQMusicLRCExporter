//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

@interface ProfileVisitorListProtocol : ProtocolBaseJason
{
    unsigned long long _visitUin;
    NSArray *_visitorList;
    unsigned long long _OperateType;
}

@property(nonatomic) unsigned long long OperateType; // @synthesize OperateType=_OperateType;
@property(retain, nonatomic) NSArray *visitorList; // @synthesize visitorList=_visitorList;
@property(nonatomic) unsigned long long visitUin; // @synthesize visitUin=_visitUin;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end

