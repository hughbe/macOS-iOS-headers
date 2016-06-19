//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WPNearbyDelegate.h"

@class CUBitCoder, CURetrier, NSData, NSDictionary, NSObject<OS_dispatch_queue>, NSString, WPNearby;

@interface SFBLEAdvertiser : NSObject <WPNearbyDelegate>
{
    BOOL _activateCalled;
    long long _advertiseState;
    BOOL _invalidateCalled;
    CUBitCoder *_payloadCoder;
    NSData *_payloadDataCurrent;
    NSData *_payloadDataPrevious;
    NSDictionary *_payloadFields;
    NSString *_payloadIdentifier;
    long long _payloadType;
    CURetrier *_startRetrier;
    WPNearby *_wpNearby;
    struct LogCategory *_ucat;
    long long _advertiseRate;
    CDUnknownBlockType _advertiseStateChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType advertiseStateChangedHandler; // @synthesize advertiseStateChangedHandler=_advertiseStateChangedHandler;
@property(nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
- (void).cxx_destruct;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearbyDidUpdateState:(id)arg1;
- (int)_preparePayload:(BOOL)arg1;
- (void)_restartIfNeeded:(BOOL)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setPayloadCoder:(id)arg1 fields:(id)arg2 identifier:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

