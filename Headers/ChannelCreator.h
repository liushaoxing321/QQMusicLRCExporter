//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ChannelCreator : NSObject
{
    _Bool _isVip;
    _Bool _isGreenVip;
    _Bool _isSVip;
    _Bool _isFollow;
    _Bool _profileLock;
    int _singerType;
    NSString *_name;
    NSString *_subName;
    unsigned long long _creatorType;
    unsigned long long _clickType;
    unsigned long long _uin;
    unsigned long long _singerId;
    NSString *_singerMid;
    NSString *_vipIconUrl;
    NSString *_avatarUrl;
    NSString *_desc;
    long long _fansNum;
    long long _folderNum;
    long long _listenNum;
    long long _followNum;
    long long _shareNum;
    NSString *_gender;
    NSString *_birthday;
    NSString *_area;
    long long _vipLevel;
    long long _nextLevel;
    long long _yearFlag;
    long long _vipProgress;
    long long _vipRemainDay;
    NSString *_expireDay;
    NSString *_recomInfo;
    long long _index;
}

+ (id)translateCreatorFromURL:(id)arg1;
+ (void)translateFromCircleJsonData:(id)arg1 ToCreator:(id)arg2;
+ (id)translateFromCircleJsonData:(id)arg1;
+ (void)tranlateToCreatorFromJsonData:(id)arg1 toSubCreator:(id)arg2;
+ (id)tranlateToCreatorFromJsonData:(id)arg1;
+ (id)smallVipIcon;
+ (id)bigVipIcon;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool profileLock; // @synthesize profileLock=_profileLock;
@property(nonatomic) int singerType; // @synthesize singerType=_singerType;
@property(retain, nonatomic) NSString *recomInfo; // @synthesize recomInfo=_recomInfo;
@property(retain, nonatomic) NSString *expireDay; // @synthesize expireDay=_expireDay;
@property(nonatomic) long long vipRemainDay; // @synthesize vipRemainDay=_vipRemainDay;
@property(nonatomic) long long vipProgress; // @synthesize vipProgress=_vipProgress;
@property(nonatomic) long long yearFlag; // @synthesize yearFlag=_yearFlag;
@property(nonatomic) long long nextLevel; // @synthesize nextLevel=_nextLevel;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel=_vipLevel;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(nonatomic) long long shareNum; // @synthesize shareNum=_shareNum;
@property(nonatomic) long long followNum; // @synthesize followNum=_followNum;
@property(nonatomic) long long listenNum; // @synthesize listenNum=_listenNum;
@property(nonatomic) long long folderNum; // @synthesize folderNum=_folderNum;
@property(nonatomic) long long fansNum; // @synthesize fansNum=_fansNum;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *vipIconUrl; // @synthesize vipIconUrl=_vipIconUrl;
@property(nonatomic) _Bool isSVip; // @synthesize isSVip=_isSVip;
@property(nonatomic) _Bool isGreenVip; // @synthesize isGreenVip=_isGreenVip;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(retain, nonatomic) NSString *singerMid; // @synthesize singerMid=_singerMid;
@property(nonatomic) unsigned long long singerId; // @synthesize singerId=_singerId;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long clickType; // @synthesize clickType=_clickType;
@property(nonatomic) unsigned long long creatorType; // @synthesize creatorType=_creatorType;
@property(retain, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)signature;
- (id)nameByMaxLength:(int)arg1;
- (id)translateCreatorToURL;
- (id)initFromFileByUin:(unsigned long long)arg1;
- (void)saveToFile;
- (_Bool)isSingerDJ;
- (_Bool)isRealSinger;
- (_Bool)isSinger;
- (id)getSingerInfo;
- (id)imageFileName;
- (_Bool)isEqualContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

