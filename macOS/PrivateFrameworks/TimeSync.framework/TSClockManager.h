//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TSClockManager : NSObject
{
    unsigned int _connection;
    NSMutableArray *_clockPersonalities;
    unsigned long long _machAbsoluteNanosecondClockIdentifier;
}

+ (id)diagnosticDescriptionForClockService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)defaultClockPersonalities;
+ (id)clockManager;
+ (id)sharedClockManager;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;
+ (void)loadClockManagerNub;
@property(readonly, nonatomic) unsigned long long machAbsoluteNanosecondClockIdentifier; // @synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier;
- (void)dealloc;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(BOOL)arg4 error:(id *)arg5;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (id)availableClockIdentifiers;
- (BOOL)removegPTPServicesWithError:(id *)arg1;
- (BOOL)addgPTPServicesWithError:(id *)arg1;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int *)arg2 error:(id *)arg3;
- (BOOL)releaseDynamicClockID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (BOOL)getMachAbsoluteClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (void)removeClockPersonality:(id)arg1;
- (void)addClockPersonality:(id)arg1;
- (id)init;

@end

