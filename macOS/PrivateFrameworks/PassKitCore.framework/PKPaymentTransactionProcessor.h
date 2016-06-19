//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLGeocoder, CLLocationManager, NSMutableSet, NSObject<OS_dispatch_source>, NSString, PKUsageNotificationServer;

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate>
{
    NSMutableSet *_locationUpdateItems;
    NSMutableSet *_merchantCleanupItems;
    CLLocationManager *_locationManager;
    CLGeocoder *_geocoder;
    NSObject<OS_dispatch_source> *_locationUpdateTimeoutTimer;
    BOOL _active;
    id <PKPaymentTransactionProcessorDelegate> _delegate;
    PKUsageNotificationServer *_usageNotificationServer;
}

@property(nonatomic) __weak PKUsageNotificationServer *usageNotificationServer; // @synthesize usageNotificationServer=_usageNotificationServer;
@property(nonatomic) id <PKPaymentTransactionProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;
- (void)_processItemForMerchantCleanup:(id)arg1;
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)_stopUpdatingLocationIfPossible;
- (void)_startUpdatingLocationIfPossible;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)processPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

