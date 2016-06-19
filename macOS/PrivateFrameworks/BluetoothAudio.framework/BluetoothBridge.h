//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, SFDeviceDiscovery;

@interface BluetoothBridge : NSObject
{
    NSObject<OS_dispatch_semaphore> *_connectedSemaphore;
    NSObject<OS_dispatch_semaphore> *_disconnectedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueFigEndpointManager *_manager;
    SFDeviceDiscovery *_deviceDiscovery;
}

+ (id)sharedBluetoothBridge;
@property(retain) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
@property(nonatomic) struct OpaqueFigEndpointManager *manager; // @synthesize manager=_manager;
- (void)deviceDestroyed:(id)arg1;
- (void)devicePublished:(id)arg1;
- (void)hostControllerPoweredOff:(id)arg1;
- (void)deviceDisconnected:(id)arg1;
- (void)deviceConnected:(id)arg1;
- (void)disconnectFromAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)connectToAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)deviceFromLEUUID:(id)arg1;
- (id)deviceFromAddress:(id)arg1;
- (id)nameFromDevice:(id)arg1;
- (id)addressFromDevice:(id)arg1;
- (unsigned char)supportedFormats:(id)arg1;
- (BOOL)isConnected:(id)arg1;
- (BOOL)isAudioDevice:(id)arg1;
- (void)removeListeners;
- (void)addListeners;
- (struct __CFDictionary *)descriptionWithAddress:(id)arg1 name:(id)arg2 supportedFormats:(unsigned char)arg3 deviceClassMinor:(unsigned int)arg4 vendorID:(unsigned short)arg5 productID:(unsigned short)arg6 connected:(BOOL)arg7;
- (struct __CFDictionary *)descriptionWithDevice:(id)arg1;
- (void)dealloc;
- (id)init;

@end

