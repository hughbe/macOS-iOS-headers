/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
 */

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver> {
    <HKFeatureAvailabilityProviding> * _featureAvailabilityProvider;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
    <HKRPUserDefaultsSyncProviding> * _userDefaultsSyncProvider;
}

- (void).cxx_destruct;
- (void)_queue_featureAvailabilityDidChange;
- (void)dealloc;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3 didStart:(id /* block */)arg4;

@end
