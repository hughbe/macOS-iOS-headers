//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding>
{
    BOOL _mustReplay;
    BOOL _mustPush;
    unsigned long long _source;
    unsigned long long _destination;
    NSDate *_committed;
    NSString *_label;
}

+ (id)stringForHMDBackingStoreDestination:(unsigned long long)arg1;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1;
+ (id)logCategory;
+ (id)defaultPreferencesOptions;
+ (id)defaultResidenceOptions;
+ (id)defaultMetadataCloudOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultIDSOptions;
+ (id)localPushBackOptions;
+ (id)cloudRequiresPushOptions;
+ (id)defaultCloudOptions;
+ (id)defaultXPCOptions;
+ (id)defaultLocalOptions;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(BOOL)arg3 mustPush:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL mustPush; // @synthesize mustPush=_mustPush;
@property(readonly, nonatomic) BOOL mustReplay; // @synthesize mustReplay=_mustReplay;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSDate *committed; // @synthesize committed=_committed;
@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)debugString:(BOOL)arg1;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (id)_description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(BOOL)arg4 mustPush:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

