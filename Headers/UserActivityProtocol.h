//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

@interface UserActivityProtocol : ProtocolBaseJason
{
    int _activityID;
    NSString *_activityText;
    NSString *_tipText;
    NSString *_clickURLStr;
    long long _expireTime;
    unsigned long long _userType;
}

@property(nonatomic) int activityID; // @synthesize activityID=_activityID;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *clickURLStr; // @synthesize clickURLStr=_clickURLStr;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void).cxx_destruct;
- (_Bool)containReturnCode;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end
