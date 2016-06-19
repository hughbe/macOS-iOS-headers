//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APBluetoothClientDelegate.h"

@class APBluetoothClient, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface APBrowserBTLEManager : NSObject <APBluetoothClientDelegate>
{
    unsigned short _btleMode;
    BOOL _p2pSoloSupported;
    BOOL _p2pSoloSupportedIsSet;
    BOOL _trackingEnabled;
    BOOL _isAdvertising;
    BOOL _isScanning;
    BOOL _isEnabled;
    BOOL _preferencesUpdated;
    BOOL _isInvalidated;
    BOOL _isSoloBeaconDisabled;
    APBluetoothClient *_btleClient;
    void *_eventHandlerContext;
    CDUnknownFunctionPointerType _eventHandlerFunc;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueAPBrowserBTLEManager *_managerRef;
    NSMutableDictionary *_btleDevices;
    NSObject<OS_dispatch_source> *_staleDevicesTimer;
}

+ (int)createEventInfoDictionary:(id *)arg1 withDeviceID:(id)arg2 IPAddress:(id)arg3 port:(id)arg4 supportsSolo:(id)arg5 rssi:(id)arg6;
@property(nonatomic) NSObject<OS_dispatch_source> *staleDevicesTimer; // @synthesize staleDevicesTimer=_staleDevicesTimer;
@property(nonatomic) BOOL isSoloBeaconDisabled; // @synthesize isSoloBeaconDisabled=_isSoloBeaconDisabled;
@property(nonatomic) BOOL isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(retain, nonatomic) NSMutableDictionary *btleDevices; // @synthesize btleDevices=_btleDevices;
@property(nonatomic) struct OpaqueAPBrowserBTLEManager *managerRef; // @synthesize managerRef=_managerRef;
@property(nonatomic) BOOL preferencesUpdated; // @synthesize preferencesUpdated=_preferencesUpdated;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) BOOL isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) CDUnknownFunctionPointerType eventHandlerFunc; // @synthesize eventHandlerFunc=_eventHandlerFunc;
@property(nonatomic) void *eventHandlerContext; // @synthesize eventHandlerContext=_eventHandlerContext;
@property(retain, nonatomic) APBluetoothClient *btleClient; // @synthesize btleClient=_btleClient;
- (int)copyShowInfo:(id *)arg1 verbose:(BOOL)arg2;
- (id)stringForBTLEmode:(unsigned short)arg1;
- (void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4;
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)airPlaySoloStoppedScanning:(id)arg1;
- (void)airPlaySoloStartedScanning:(id)arg1;
- (void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)airPlaySoloStoppedAdvertising:(id)arg1;
- (void)airPlaySoloStartedAdvertising:(id)arg1;
- (void)airPlaySoloDidUpdateState:(id)arg1;
- (int)handleFoundDevice:(id)arg1 withAdvertisementData:(CDStruct_b2d45402 *)arg2 rssi:(int)arg3;
- (int)dispatchEvent:(unsigned int)arg1 withEventInfo:(id)arg2;
- (int)handleLostDevice:(id)arg1;
- (int)ensureScanningStopped;
- (int)dispatchLostEventForAllDevices;
- (int)ensureScanningStarted;
- (int)ensureAdvertisingStopped;
- (int)ensureAdvertisingStarted;
- (int)ensureBTLEClientInitialized;
- (int)getBTLEMode:(unsigned short *)arg1;
- (int)setBTLEMode:(unsigned short)arg1;
- (int)getTrackingEnabled:(char *)arg1;
- (int)setTrackingEnabled:(BOOL)arg1;
- (int)setSupportsSolo:(BOOL)arg1;
- (int)ensurePreferencesUpdatedWithShouldForce:(BOOL)arg1;
- (int)update;
- (unsigned long long)nearbySoloDevicesCount;
- (int)setEventHandler:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 managerRef:(struct OpaqueAPBrowserBTLEManager *)arg3;
- (int)stop;
- (int)startMode:(unsigned short)arg1;
- (int)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

