//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCRPCStruct.h"

@class FMCVehicleDataEventStatus;

@interface FMCAirbagStatus : FMCRPCStruct
{
}

@property(retain) FMCVehicleDataEventStatus *passengerKneeAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *passengerSideAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *driverKneeAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *passengerCurtainAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *passengerAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *driverCurtainAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *driverSideAirbagDeployed;
@property(retain) FMCVehicleDataEventStatus *driverAirbagDeployed;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
