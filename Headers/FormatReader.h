//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FormatReader : NSObject
{
    struct Reader *reader_;
}

+ (void)registerFormatReader:(id)arg1;
- (Ref_1fcf4400)decode:(Ref_62e6a0fd)arg1 andCallback:(Ref_f3b3a220)arg2;
- (Ref_1fcf4400)decode:(Ref_62e6a0fd)arg1;
- (void)dealloc;
- (id)initWithReader:(struct Reader *)arg1;

@end

