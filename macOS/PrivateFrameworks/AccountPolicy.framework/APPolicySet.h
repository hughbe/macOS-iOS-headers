//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSMutableSet;

@interface APPolicySet : NSObject <NSCopying>
{
    NSMutableSet *_authentication;
    NSMutableSet *_passwordChange;
    NSMutableSet *_passwordContent;
}

+ (id)policySetWithDictionary:(id)arg1;
+ (id)policySetWithAuthenticationPolicies:(id)arg1 passwordChangePolicies:(id)arg2 passwordContentPolicies:(id)arg3;
+ (id)policySet;
+ (id)categoryAndIdentifierForLegacyPolicyName:(id)arg1;
@property(retain) NSMutableSet *passwordContent; // @synthesize passwordContent=_passwordContent;
@property(retain) NSMutableSet *passwordChange; // @synthesize passwordChange=_passwordChange;
@property(retain) NSMutableSet *authentication; // @synthesize authentication=_authentication;
- (void).cxx_destruct;
- (void)_removePolicies:(id)arg1 fromPolicies:(id)arg2;
- (id)_newPoliciesByUnioningPolicies:(id)arg1 withPolicies:(id)arg2;
- (_Bool)_attribute:(id)arg1 usedInParameters:(id)arg2 orInFormatString:(id)arg3;
- (id)_arrayOfDictionariesWithPolicies:(id)arg1;
- (void)_enumerateAllPoliciesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removePolicyDictionary:(id)arg1 fromCategory:(id)arg2;
- (void)addPolicyDictionary:(id)arg1 toCategory:(id)arg2;
- (id)description;
- (id)debugDescription;
- (void)removePolicyWithIdentifier:(id)arg1 fromCategory:(id)arg2;
- (void)removePolicy:(id)arg1 fromCategory:(id)arg2;
- (void)addPolicySet:(id)arg1;
- (void)addPolicy:(id)arg1 toCategory:(id)arg2;
@property(readonly, copy) NSArray *attributesUsed;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)passwordContentSummaryForLanguage:(id)arg1;
@property(readonly, copy) NSDictionary *passwordContentSummariesForAllLanguages;
@property(readonly, copy) NSArray *passwordContentPolicies;
@property(readonly, copy) NSArray *passwordChangePolicies;
@property(readonly, copy) NSArray *authenticationPolicies;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)policiesInCategory:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAuthenticationPolicies:(id)arg1 passwordChangePolicies:(id)arg2 passwordContentPolicies:(id)arg3;
- (id)init;
@property(readonly, copy) NSDictionary *legacyPolicies;
- (id)_policiesWithLegacyPolicyDictionary:(id)arg1;
- (id)_policiesWithArrayOfAccountPolicyDictionaries:(id)arg1;

@end

