//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSDictionary, NSString;

@interface AddBulletGiftProtocol : ProtocolBaseJason
{
    _Bool _bFromH5;
    NSString *_songMid;
    unsigned long long _songId;
    long long _offset;
    NSString *_pasback;
    long long _giftId;
    long long _giftNum;
    long long _userInfo;
    NSDictionary *_responDic;
    NSDictionary *_jsonDic;
    long long _subCode;
    long long _lessStarNum;
    long long _remainStarNUm;
}

@property(nonatomic) long long remainStarNUm; // @synthesize remainStarNUm=_remainStarNUm;
@property(nonatomic) long long lessStarNum; // @synthesize lessStarNum=_lessStarNum;
@property(nonatomic) long long subCode; // @synthesize subCode=_subCode;
@property(retain, nonatomic) NSDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
@property(retain, nonatomic) NSDictionary *responDic; // @synthesize responDic=_responDic;
@property(nonatomic) long long userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool bFromH5; // @synthesize bFromH5=_bFromH5;
@property(nonatomic) long long giftNum; // @synthesize giftNum=_giftNum;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(retain, nonatomic) NSString *pasback; // @synthesize pasback=_pasback;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *songMid; // @synthesize songMid=_songMid;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end

