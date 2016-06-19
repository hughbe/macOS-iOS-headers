//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_PASDeviceStateProtocol.h"

@class NSString;

@interface _PASDeviceState : NSObject <_PASDeviceStateProtocol>
{
}

+ (id)currentOsBuild;
+ (BOOL)isConstrainedDevice;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(CDUnknownBlockType)arg1;
+ (void)blockUntilFirstUnlock;
+ (BOOL)isDeviceFormattedForProtection;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (id)registerForLockStateChangeNotifications:(CDUnknownBlockType)arg1;
+ (int)lockState;
+ (BOOL)isUnlocked;
+ (BOOL)isClassCLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

