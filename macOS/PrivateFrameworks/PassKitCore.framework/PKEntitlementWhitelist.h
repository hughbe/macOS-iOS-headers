//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKEntitlementWhitelist : NSObject
{
    BOOL _passesAllAccess;
    BOOL _passesAddSilently;
    BOOL _passPresentationSuppression;
    BOOL _paymentAllAccess;
    BOOL _paymentConfiguration;
    BOOL _paymentPresentation;
    BOOL _inAppPayments;
    BOOL _inAppPaymentsPrivate;
    BOOL _addSilently;
    NSString *_applicationID;
    NSArray *_merchantIdentifiers;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
}

+ (BOOL)supportsSecureCoding;
@property BOOL addSilently; // @synthesize addSilently=_addSilently;
@property(copy) NSArray *passTypeIDs; // @synthesize passTypeIDs=_passTypeIDs;
@property(copy) NSArray *teamIDs; // @synthesize teamIDs=_teamIDs;
@property(readonly, copy) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly) BOOL inAppPaymentsPrivate; // @synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate;
@property(readonly) BOOL inAppPayments; // @synthesize inAppPayments=_inAppPayments;
@property(readonly) BOOL paymentPresentation; // @synthesize paymentPresentation=_paymentPresentation;
@property(readonly) BOOL paymentConfiguration; // @synthesize paymentConfiguration=_paymentConfiguration;
@property(readonly) BOOL paymentAllAccess; // @synthesize paymentAllAccess=_paymentAllAccess;
@property(readonly) BOOL passPresentationSuppression; // @synthesize passPresentationSuppression=_passPresentationSuppression;
@property(readonly) BOOL passesAddSilently; // @synthesize passesAddSilently=_passesAddSilently;
@property(readonly) BOOL passesAllAccess; // @synthesize passesAllAccess=_passesAllAccess;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithConnection:(id)arg1;
@property(readonly) BOOL allAccess;
- (id)initWithConnection:(id)arg1;

@end

