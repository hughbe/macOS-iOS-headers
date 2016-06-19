//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCentralManager, CBScalablePipe, CBScalablePipeManager, NSData, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, SFBLEData;

@interface SFBLEPipe : NSObject
{
    BOOL _activateCalled;
    CBCentralManager *_btCentral;
    struct __channel *_btChannel;
    BOOL _btConnected;
    BOOL _btConnecting;
    BOOL _btEndpointRegistering;
    BOOL _btEndpointRegistered;
    int _btFD;
    unsigned char _btReadHeader[4];
    NSMutableData *_btReadPayload;
    unsigned long long _btReadLen;
    unsigned long long _btReadOffset;
    struct __channel_ring_desc *_btReadRing;
    NSObject<OS_dispatch_source> *_btReadSource;
    NSData *_btWriteData;
    SFBLEData *_btWriteItem;
    unsigned long long _btWriteLen;
    unsigned long long _btWriteOffset;
    const char *_btWritePtr;
    struct NSMutableArray *_btWriteQueue;
    struct __channel_ring_desc *_btWriteRing;
    NSObject<OS_dispatch_source> *_btWriteSource;
    BOOL _btWriteSuspended;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct NSMutableDictionary *_frameHandlers;
    BOOL _invalidateCalled;
    struct LogCategory *_ucat;
    BOOL _manualConnect;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _frameHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
}

@property(nonatomic) BOOL manualConnect; // @synthesize manualConnect=_manualConnect;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType frameHandler; // @synthesize frameHandler=_frameHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)_defaultPairedDeviceBluetoothIdentifier;
- (void)_frameHandler:(unsigned char)arg1 data:(id)arg2;
- (void)_setupIfNeeded;
- (void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFrameHandlerForType:(unsigned char)arg1;
- (void)addFrameHandlerForType:(unsigned char)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)init;

@end

