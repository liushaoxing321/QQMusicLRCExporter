//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol CGUpnpDeviceDelegate;

@interface QPlayUpnpDevice : NSObject
{
    _Bool isCObjectCreated;
    void *cObject;
    id <CGUpnpDeviceDelegate> delegate;
}

@property __weak id <CGUpnpDeviceDelegate> delegate; // @synthesize delegate;
@property void *cObject; // @synthesize cObject;
- (void).cxx_destruct;
- (int)QplayDeviceType;
- (id)absoluteIconUrl:(id)arg1;
- (id)smallestIconWithMimeType:(id)arg1;
- (id)smallestIcon;
- (id)ipaddress;
- (void *)userData;
- (void)setUserData:(void *)arg1;
- (_Bool)announce;
- (_Bool)isRunning;
- (_Bool)stop;
- (_Bool)start;
- (id)sonosHHID;
- (id)icons;
- (id)getServiceForType:(id)arg1;
- (id)getServiceForID:(id)arg1;
- (id)services;
- (_Bool)isFriendlyName:(id)arg1;
- (_Bool)isUDN:(id)arg1;
- (_Bool)isDeviceType:(id)arg1;
- (void)setUdn:(id)arg1;
- (_Bool)isAdvertisementAlive;
- (void)setFriendlyName:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (id)presentationURL;
- (id)locationURL;
- (id)descriptionURL;
- (id)urlBase;
- (id)modelName;
- (id)modelNumber;
- (id)manufacturer;
- (id)udn;
- (id)deviceType;
- (void)setQPlayCapability:(id)arg1;
- (void)setRoomName:(id)arg1;
- (id)QPlayCapability;
- (id)roomName;
- (id)authInfor;
- (id)friendlyName;
- (id)platform;
- (void)dealloc;
- (_Bool)parseXMLDescription:(id)arg1;
- (id)initWithXMLDescription:(id)arg1;
- (id)initWithCObject:(void *)arg1;
- (id)init;

@end

