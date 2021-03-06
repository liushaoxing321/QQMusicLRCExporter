//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSArray, NSData;

@interface QQApiCommonContentObject : QQApiObject
{
    unsigned int layoutType;
    NSData *previewImageData;
    NSArray *textArray;
    NSArray *pictureDataArray;
}

+ (id)objectWithDictionary:(id)arg1;
+ (id)objectWithLayoutType:(int)arg1 textArray:(id)arg2 pictureArray:(id)arg3 previewImageData:(id)arg4;
@property(retain, nonatomic) NSArray *pictureDataArray; // @synthesize pictureDataArray;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray;
@property(nonatomic) NSData *previewImageData; // @synthesize previewImageData;
@property(nonatomic) unsigned int layoutType; // @synthesize layoutType;
- (id)toDictionary;
- (void)dealloc;

@end

