//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NEAppRule.h"

@class NSArray, NSString;

@interface NSPAppRule : NEAppRule
{
    BOOL _disableFallback;
    BOOL _enableDirectMultipath;
    BOOL _enableDirectTFO;
    BOOL _enableDirectExtendedValidation;
    BOOL _divertDNSOnly;
    BOOL _enabled;
    NSArray *_directTLSPorts;
    unsigned long long _serviceID;
    double _fallbackTimeout;
    unsigned long long _fallbackBufferLimit;
    unsigned long long _fallbackCountBeforeImmediateFallback;
    NSString *_proxyEvaluationPath;
}

+ (id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)loadAppRules:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)validateRuleDictionary:(id)arg1;
@property(copy) NSString *proxyEvaluationPath; // @synthesize proxyEvaluationPath=_proxyEvaluationPath;
@property unsigned long long fallbackCountBeforeImmediateFallback; // @synthesize fallbackCountBeforeImmediateFallback=_fallbackCountBeforeImmediateFallback;
@property unsigned long long fallbackBufferLimit; // @synthesize fallbackBufferLimit=_fallbackBufferLimit;
@property double fallbackTimeout; // @synthesize fallbackTimeout=_fallbackTimeout;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property unsigned long long serviceID; // @synthesize serviceID=_serviceID;
@property BOOL divertDNSOnly; // @synthesize divertDNSOnly=_divertDNSOnly;
@property(copy) NSArray *directTLSPorts; // @synthesize directTLSPorts=_directTLSPorts;
@property BOOL enableDirectExtendedValidation; // @synthesize enableDirectExtendedValidation=_enableDirectExtendedValidation;
@property BOOL enableDirectTFO; // @synthesize enableDirectTFO=_enableDirectTFO;
@property BOOL enableDirectMultipath; // @synthesize enableDirectMultipath=_enableDirectMultipath;
@property BOOL disableFallback; // @synthesize disableFallback=_disableFallback;
- (void).cxx_destruct;
- (id)copyAccountIdentifierConditions;
- (id)copyExecutableConditions;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFromDictionary:(id)arg1;

@end

