//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IASUnifiedProgressClient;

@interface OSIPowerController : NSObject
{
    BOOL _machineHasBattery;
    BOOL _machineIsPluggedIn;
    BOOL _machineIsLowOnPower;
    BOOL _machineIsCriticallyLowOnPower;
    BOOL _previouslyReleasedSleepAssertion;
    unsigned int _systemSleepAssertion;
    IASUnifiedProgressClient *_progressClient;
}

@property(retain) IASUnifiedProgressClient *progressClient; // @synthesize progressClient=_progressClient;
@property BOOL previouslyReleasedSleepAssertion; // @synthesize previouslyReleasedSleepAssertion=_previouslyReleasedSleepAssertion;
@property unsigned int systemSleepAssertion; // @synthesize systemSleepAssertion=_systemSleepAssertion;
@property BOOL machineIsCriticallyLowOnPower; // @synthesize machineIsCriticallyLowOnPower=_machineIsCriticallyLowOnPower;
@property BOOL machineIsLowOnPower; // @synthesize machineIsLowOnPower=_machineIsLowOnPower;
@property BOOL machineIsPluggedIn; // @synthesize machineIsPluggedIn=_machineIsPluggedIn;
@property BOOL machineHasBattery; // @synthesize machineHasBattery=_machineHasBattery;
- (void)_cacheMachineProperties;
- (void)_updateState;
- (void)disableSystemSleep;
- (void)enableSystemSleep;
- (void)dealloc;
- (id)init;

@end

