//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, ProtocolError;

@interface ProtocolHistoryRequestItem : NSObject
{
    NSString *name;
    NSString *protocolType;
    NSString *requestUrl;
    NSString *netType;
    NSDate *requestDate;
    NSArray *callStackSymbols;
    NSString *requestStr;
    NSString *responseStr;
    ProtocolError *_protocolError;
}

@property(retain, nonatomic) ProtocolError *protocolError; // @synthesize protocolError=_protocolError;
@property(retain, nonatomic) NSString *responseStr; // @synthesize responseStr;
@property(retain, nonatomic) NSString *requestStr; // @synthesize requestStr;
@property(retain, nonatomic) NSArray *callStackSymbols; // @synthesize callStackSymbols;
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate;
@property(retain, nonatomic) NSString *netType; // @synthesize netType;
@property(retain, nonatomic) NSString *requestUrl; // @synthesize requestUrl;
@property(retain, nonatomic) NSString *protocolType; // @synthesize protocolType;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)formattedDateStr;
- (id)init;

@end
