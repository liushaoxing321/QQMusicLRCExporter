//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class GPUImageFramebuffer, NSMutableArray;

@interface MyCamGPUFilter : GPUImageFilter
{
    GPUImageFramebuffer *secondInputFramebuffer;
    GPUImageFramebuffer *thirdInputFramebuffer;
    GPUImageFramebuffer *fourthInputFramebuffer;
    int filterInputTextureUniform2;
    int filterInputTextureUniform3;
    int filterInputTextureUniform4;
    int textureWidth;
    int textureHeight;
    NSMutableArray *inputFilterArray;
}

- (void).cxx_destruct;
- (void)setOuputFilter:(id)arg1 atIndex:(long long)arg2;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (void)setWidth:(int)arg1 andHeight:(int)arg2;
- (void)setParameter:(float)arg1;
- (void)setInputTextureformImage:(id)arg1 atIndex:(long long)arg2;
- (void)setInputTextureImage:(id)arg1 atIndex:(long long)arg2;
- (void)setInputTextureImage:(id)arg1;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

@end

