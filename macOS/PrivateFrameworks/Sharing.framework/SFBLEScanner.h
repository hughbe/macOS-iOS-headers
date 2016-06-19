//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "WPAWDLDelegate.h"
#import "WPNearbyDelegate.h"

@class CBCentralManager, CUBitCoder, CURetrier, NSArray, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, WPAWDL, WPNearby;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate, WPAWDLDelegate, WPNearbyDelegate>
{
    BOOL _activateCalled;
    CBCentralManager *_centralManager;
    struct NSMutableDictionary *_devices;
    NSArray *_deviceFilter;
    BOOL _invalidateCalled;
    NSData *_payloadFilterData;
    NSData *_payloadFilterMask;
    long long _payloadType;
    NSObject<OS_dispatch_source> *_rescanTimer;
    CURetrier *_startRetrier;
    WPAWDL *_wpAirDrop;
    WPNearby *_wpNearby;
    struct LogCategory *_ucat;
    BOOL _distanceUpdatesEnabled;
    BOOL _filterDuplicates;
    BOOL _rssiUpdatesEnabled;
    BOOL _scanCache;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUBitCoder *_payloadCoder;
    double _rescanInterval;
    long long _rssiThreshold;
    long long _scanRate;
}

@property(nonatomic) long long scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) BOOL scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) BOOL rssiUpdatesEnabled; // @synthesize rssiUpdatesEnabled=_rssiUpdatesEnabled;
@property(nonatomic) long long rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(nonatomic) double rescanInterval; // @synthesize rescanInterval=_rescanInterval;
@property(retain, nonatomic) CUBitCoder *payloadCoder; // @synthesize payloadCoder=_payloadCoder;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) BOOL filterDuplicates; // @synthesize filterDuplicates=_filterDuplicates;
@property(nonatomic) BOOL distanceUpdatesEnabled; // @synthesize distanceUpdatesEnabled=_distanceUpdatesEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void).cxx_destruct;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (BOOL)awdl:(id)arg1 foundDevice:(id)arg2;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdlStartedScanning:(id)arg1;
- (void)awdlDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)_updateRescanTimer;
- (void)_restartIfNeeded;
- (void)_rescanTimerFired;
- (void)_poweredOff;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setRSSIThreshold:(long long)arg1;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;
- (void)setDeviceFilter:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

