//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class AlbumIntroduction, NSDictionary, NSString;

@interface AlbumIntroductionProtocol : ProtocolBaseJason
{
    NSString *_dataUrl;
    AlbumIntroduction *_albumIntroduction;
    NSDictionary *_rawJsonData;
}

@property(retain, nonatomic) NSDictionary *rawJsonData; // @synthesize rawJsonData=_rawJsonData;
@property(retain, nonatomic) AlbumIntroduction *albumIntroduction; // @synthesize albumIntroduction=_albumIntroduction;
@property(retain, nonatomic) NSString *dataUrl; // @synthesize dataUrl=_dataUrl;
- (void).cxx_destruct;
- (id)translateToAlbumIntroduction:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (id)getUrl;
- (id)init;

@end

