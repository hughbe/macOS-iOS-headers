//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding>
{
    long long _credentialType;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_expiration;
    NSString *_longDescription;
    long long _cardType;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
}

+ (BOOL)supportsSecureCoding;
+ (id)fakeRemoteCredentials;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(retain, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
@property(nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localAppletSubcredentialPassCredential;
- (BOOL)isLocalAppletSubcredentialPassCredential;
- (id)accountCredential;
- (BOOL)isAccountCredential;
- (id)purchasedProductCredential;
- (BOOL)isPurchasedProductCredential;
- (id)digitalIssuanceProductCredential;
- (BOOL)isDigitalIssuanceProductCredential;
- (id)contactlessProductCredential;
- (BOOL)isContactlessProductCredential;
- (id)peerPaymentCredential;
- (BOOL)isPeerPaymentCredential;
- (id)localPassCredential;
- (BOOL)isLocalPassCredential;
- (id)remoteCredential;
- (BOOL)isRemoteCredential;

@end

