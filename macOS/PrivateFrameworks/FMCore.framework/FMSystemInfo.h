//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMSystemInfo : NSObject
{
}

+ (id)sharedInstance;
- (id)ownerAccount;
- (BOOL)hasSEP;
- (BOOL)isDeviceSecured;
- (BOOL)isInternalBuild;
- (id)btMacAddress;
- (id)wifiMacAddress;
- (id)ecid;
- (id)meid;
- (id)imei;
- (id)serialNumber;
- (id)deviceModelName;
- (id)deviceName;
- (id)osBuildVersion;
- (id)osVersion;
- (id)deviceUDID;
- (id)deviceClass;
- (id)productName;
- (id)productType;

@end

