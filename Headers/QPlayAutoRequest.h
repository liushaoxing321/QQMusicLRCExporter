//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QPlayAutoRequestArgument;

@interface QPlayAutoRequest : NSObject
{
    NSString *_cmd;
    QPlayAutoRequestArgument *_argument;
    double _timestamp;
    NSString *_json;
}

@property(retain, nonatomic) NSString *json; // @synthesize json=_json;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) QPlayAutoRequestArgument *argument; // @synthesize argument=_argument;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (_Bool)IsSame:(id)arg1;

@end

