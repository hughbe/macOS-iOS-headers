//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentOptionsProtocol.h"

@class CNContact, NSDictionary, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsProtocol>
{
    NSDictionary *_defaultBillingAddresses;
    CNContact *_defaultShippingAddress;
    CNContact *_defaultContactName;
    CNContact *_defaultContactEmail;
    CNContact *_defaultContactPhone;
}

+ (id)defaults;
- (void).cxx_destruct;
- (void)deleteDefaultForContactKey:(id)arg1;
- (void)deleteAllDefaults;
- (void)deleteDefaultContactName;
@property(retain, nonatomic) CNContact *defaultContactName; // @synthesize defaultContactName=_defaultContactName;
- (void)deleteDefaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactPhone; // @synthesize defaultContactPhone=_defaultContactPhone;
- (void)deleteDefaultContactEmail;
@property(retain, nonatomic) CNContact *defaultContactEmail; // @synthesize defaultContactEmail=_defaultContactEmail;
- (void)_hardDeleteDefaultBillingAddress;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (id)_rawDefaultBillingAddresses;
@property(readonly, nonatomic) NSDictionary *defaultBillingAddresses; // @synthesize defaultBillingAddresses=_defaultBillingAddresses;
- (void)deleteDefaultShippingAddress;
@property(retain, nonatomic) CNContact *defaultShippingAddress; // @synthesize defaultShippingAddress=_defaultShippingAddress;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)_deleteKeychainDataForKey:(id)arg1;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)_keychainDataForKey:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

