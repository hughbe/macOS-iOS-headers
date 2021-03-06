//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PKExpressPassInformation : NSObject <NSSecureCoding>
{
    NSDictionary *_configuration;
    _Bool _forceModernEncoding;
    long long _cardType;
    NSString *_passUniqueIdentifier;
    NSDictionary *_subcredentialCredentialIdentifiers;
    NSDictionary *_subcredentialEndpointIdentifiers;
    NSString *_paymentApplicationIdentifier;
    NSString *_expressMode;
    long long _expressPassType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long expressPassType; // @synthesize expressPassType=_expressPassType;
@property(readonly, nonatomic) NSString *expressMode; // @synthesize expressMode=_expressMode;
@property(readonly, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(nonatomic) _Bool forceModernEncoding; // @synthesize forceModernEncoding=_forceModernEncoding;
@property(readonly, nonatomic) NSDictionary *subcredentialEndpointIdentifiers; // @synthesize subcredentialEndpointIdentifiers=_subcredentialEndpointIdentifiers;
@property(readonly, nonatomic) NSDictionary *subcredentialCredentialIdentifiers; // @synthesize subcredentialCredentialIdentifiers=_subcredentialCredentialIdentifiers;
@property(readonly, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
- (id)description;
- (void)enumerateCriteriaWithHandler:(CDUnknownBlockType)arg1;
- (id)criteriaForPaymentApplicationIdentifier:(id)arg1;
- (id)paymentApplicationIdentifiers;
- (void)_createModernPropertiesIfNecessary;
- (void)_createLegacyPropertiesIfNecessary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg1 paymentPass:(id)arg2 withTechologyTest:(CDUnknownBlockType)arg3;
- (id)initForPaymentPass:(id)arg1 withTechologyTest:(CDUnknownBlockType)arg2;
- (id)_initForPaymentPass:(id)arg1 configuration:(id)arg2 subcredentialCredentialIdentifiers:(id)arg3;
- (id)init;

@end

