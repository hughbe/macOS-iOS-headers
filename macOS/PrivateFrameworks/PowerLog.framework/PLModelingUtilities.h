//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLModelingUtilities : NSObject
{
}

+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isNarrowScreen;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isPercentageSupported;
+ (double)networkingEnergyWithBytes:(int)arg1 withDuration:(double)arg2;
+ (BOOL)alsCurveHigherThanDefault;
+ (BOOL)carrierBuild;
+ (BOOL)internalBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (BOOL)shouldShowBatteryGraphs;
+ (BOOL)isHomePod;
+ (BOOL)isMac;
+ (BOOL)isWatch;
+ (BOOL)isiPod;
+ (BOOL)isiPhone;
+ (BOOL)isiPad;
+ (id)valueForMobileGestaltCapability:(id)arg1;
+ (double)duetDiscretionaryBudget;

@end

