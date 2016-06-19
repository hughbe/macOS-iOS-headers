//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentWebServiceProxyObjectExportedInterface.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, PKPaymentWebService;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidateRemoteProxyTargetDevice;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)removePass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAllPaymentPasses;
- (void)validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hasPassesOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg1;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)paymentSupportedInCurrentRegion:(CDUnknownBlockType)arg1;
- (void)didRegisterWithRegionMap:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)deleteApplicationWithAID:(id)arg1;
- (void)getProvisioningDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getRegistrationDataWithAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithWebService:(id)arg1 connection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

