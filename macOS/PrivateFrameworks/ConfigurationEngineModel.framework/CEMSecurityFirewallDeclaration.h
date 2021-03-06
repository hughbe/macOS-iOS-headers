//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadEnableFirewall;
    NSNumber *_payloadBlockAllIncoming;
    NSNumber *_payloadEnableStealthMode;
    NSArray *_payloadApplications;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2 withBlockAllIncoming:(id)arg3 withEnableStealthMode:(id)arg4 withApplications:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *payloadApplications; // @synthesize payloadApplications=_payloadApplications;
@property(copy, nonatomic) NSNumber *payloadEnableStealthMode; // @synthesize payloadEnableStealthMode=_payloadEnableStealthMode;
@property(copy, nonatomic) NSNumber *payloadBlockAllIncoming; // @synthesize payloadBlockAllIncoming=_payloadBlockAllIncoming;
@property(copy, nonatomic) NSNumber *payloadEnableFirewall; // @synthesize payloadEnableFirewall=_payloadEnableFirewall;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

