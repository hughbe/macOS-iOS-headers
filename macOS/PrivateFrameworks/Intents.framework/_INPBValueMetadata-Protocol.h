//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBConfidenceScore;

@protocol _INPBValueMetadata <NSObject>
@property(readonly, nonatomic) BOOL hasUuid;
@property(copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) BOOL hasSourceAppBundleIdentifier;
@property(copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property(readonly, nonatomic) BOOL hasSource;
@property(copy, nonatomic) NSString *source;
@property(readonly, nonatomic) unsigned long long requiredEntitlementsCount;
@property(readonly, nonatomic) int *requiredEntitlements;
@property(readonly, nonatomic) BOOL hasInput;
@property(copy, nonatomic) NSString *input;
@property(nonatomic) BOOL hasConfirmed;
@property(nonatomic) BOOL confirmed;
@property(readonly, nonatomic) BOOL hasConfidenceScore;
@property(retain, nonatomic) _INPBConfidenceScore *confidenceScore;
@property(readonly, nonatomic) BOOL hasCanonicalValue;
@property(copy, nonatomic) NSString *canonicalValue;
- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@end

