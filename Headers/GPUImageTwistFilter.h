//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageTwistFilter : GPUImageFilter
{
    int twistStrengthUniform;
    double _twistStrength;
}

@property(nonatomic) double twistStrength; // @synthesize twistStrength=_twistStrength;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (id)init;

@end

