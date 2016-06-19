//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentDataProvider.h"
#import "PKPaymentServiceDelegate.h"

@class NSString, PKPaymentService, PKSecureElement;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider>
{
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    id <PKPaymentDataProviderDelegate> delegate;
}

@property(nonatomic) id <PKPaymentDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (BOOL)supportsNotificationsForPass:(id)arg1;
- (BOOL)supportsMessagesForPass:(id)arg1;
- (BOOL)supportsTransactionsForPass:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
- (void)setPaymentHandoffDisabled:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPaymentHandoffDisabled;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) BOOL isDeviceInRestrictedMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

