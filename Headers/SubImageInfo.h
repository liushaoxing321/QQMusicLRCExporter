//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SubImageInfo : NSObject
{
    int _horSegmentCount;
    int _verSegmentCount;
    int _radius;
    int _horIdentifier;
    int _verIdentifier;
    int _subImgWidth;
    int _subImgHeight;
    int _subImgRealWidth;
    int _subImgRealHeight;
    int _imageWidth;
    int _imageHeight;
    int _horBegin;
    int _horEnd;
    int _verBegin;
    int _verEnd;
    int _cannyEdgeWidth;
    int _cannyEdgeHeight;
    NSString *savePath;
    char *pixels;
    char *_CannyPixels;
}

@property(nonatomic) char *CannyPixels; // @synthesize CannyPixels=_CannyPixels;
@property(nonatomic) int cannyEdgeHeight; // @synthesize cannyEdgeHeight=_cannyEdgeHeight;
@property(nonatomic) int cannyEdgeWidth; // @synthesize cannyEdgeWidth=_cannyEdgeWidth;
@property(nonatomic) char *pixels; // @synthesize pixels;
@property(nonatomic) int verEnd; // @synthesize verEnd=_verEnd;
@property(nonatomic) int verBegin; // @synthesize verBegin=_verBegin;
@property(nonatomic) int horEnd; // @synthesize horEnd=_horEnd;
@property(nonatomic) int horBegin; // @synthesize horBegin=_horBegin;
@property(nonatomic) int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) int subImgRealHeight; // @synthesize subImgRealHeight=_subImgRealHeight;
@property(nonatomic) int subImgRealWidth; // @synthesize subImgRealWidth=_subImgRealWidth;
@property(nonatomic) int subImgHeight; // @synthesize subImgHeight=_subImgHeight;
@property(nonatomic) int subImgWidth; // @synthesize subImgWidth=_subImgWidth;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath;
@property(nonatomic) int verIdentifier; // @synthesize verIdentifier=_verIdentifier;
@property(nonatomic) int horIdentifier; // @synthesize horIdentifier=_horIdentifier;
@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) int verSegmentCount; // @synthesize verSegmentCount=_verSegmentCount;
@property(nonatomic) int horSegmentCount; // @synthesize horSegmentCount=_horSegmentCount;
- (void).cxx_destruct;

@end

