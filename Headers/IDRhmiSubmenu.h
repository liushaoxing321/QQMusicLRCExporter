//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface IDRhmiSubmenu : NSObject <NSCopying>
{
    unsigned long long _type;
}

+ (id)new;
+ (id)rhmiSubmenuMediaRadio;
+ (id)rhmiSubmenuSettings;
+ (id)rhmiSubmenuVehicleInformation;
+ (id)rhmiSubmenuNavigation;
+ (id)rhmiSubmenuOnlineServices;
+ (id)rhmiSubmenuRadio;
+ (id)rhmiSubmenuMultimedia;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (id)stringWithType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)stringRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;

@end
