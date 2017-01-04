//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTCoreTextStyleModel;

@interface FontItem : NSObject
{
    _Bool _bNeedDownload;
    NSString *_strTitle;
    NSString *_strUrl;
    NSString *_strImgName;
    NSString *_strFontIdentifier;
    NSString *_strFontDescription;
    TTCoreTextStyleModel *_stylrModel;
    NSString *_strImgUrl;
}

@property(retain, nonatomic) NSString *strImgUrl; // @synthesize strImgUrl=_strImgUrl;
@property(retain, nonatomic) TTCoreTextStyleModel *stylrModel; // @synthesize stylrModel=_stylrModel;
@property(nonatomic) _Bool bNeedDownload; // @synthesize bNeedDownload=_bNeedDownload;
@property(retain, nonatomic) NSString *strFontDescription; // @synthesize strFontDescription=_strFontDescription;
@property(retain, nonatomic) NSString *strFontIdentifier; // @synthesize strFontIdentifier=_strFontIdentifier;
@property(retain, nonatomic) NSString *strImgName; // @synthesize strImgName=_strImgName;
@property(retain, nonatomic) NSString *strUrl; // @synthesize strUrl=_strUrl;
@property(retain, nonatomic) NSString *strTitle; // @synthesize strTitle=_strTitle;
- (void).cxx_destruct;

@end
