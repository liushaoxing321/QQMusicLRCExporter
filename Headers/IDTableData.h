//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface IDTableData : NSObject
{
    NSMutableArray *rows;
    unsigned long long columns;
}

+ (id)emptyTableData;
+ (id)emptyCellTableData;
+ (id)tableDataWithCapacity:(unsigned long long)arg1 columns:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns;
- (void).cxx_destruct;
- (_Bool)isEqualToTableData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addRow:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)init;

@end

