//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSString;

@interface FetchUserInfoProtocol : ProtocolBase
{
    NSString *m_stringFaceURL;
    NSString *_errString;
    NSString *_errUrl;
}

@property(retain, nonatomic) NSString *errUrl; // @synthesize errUrl=_errUrl;
@property(retain, nonatomic) NSString *errString; // @synthesize errString=_errString;
@property(retain, nonatomic) NSString *m_stringFaceURL; // @synthesize m_stringFaceURL;
- (void).cxx_destruct;
- (void)parseUserinfo:(struct _xmlXPathObject *)arg1 qqUser:(id)arg2;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (_Bool)isHightPirority;
- (_Bool)useBackQQUin;
- (_Bool)canReportError;
- (id)getUrl;
- (id)getUser;
- (id)init;

@end

