//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDTLoadAdRequestParam : NSObject
{
    int _adCount;
    int _posW;
    int _posH;
    NSString *_posId;
}

@property(nonatomic) int posH; // @synthesize posH=_posH;
@property(nonatomic) int posW; // @synthesize posW=_posW;
@property(nonatomic) int adCount; // @synthesize adCount=_adCount;
@property(copy, nonatomic) NSString *posId; // @synthesize posId=_posId;
- (void).cxx_destruct;

@end

