//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSDate, NSString;

@interface ICLegacyTombstone : ICCloudSyncingObject
{
}

+ (id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2;
+ (void)removeLegacyTombstoneForFolder:(id)arg1;
+ (void)addLegacyTombstoneForFolder:(id)arg1;
+ (void)removeLegacyTombstoneForNote:(id)arg1;
+ (void)addLegacyTombstoneForNote:(id)arg1;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)allLegacyTombstones;
+ (id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3;
+ (id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (BOOL)hasTombstonePrefix:(id)arg1;
+ (short)tombstoneTypeFromRecordName:(id)arg1;
- (id)loggingDescriptionValues;
- (void)deleteFromLocalDatabase;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasDeletedFromCloud;
- (void)mergeDataFromRecord:(id)arg1;
- (id)newlyCreatedRecord;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isInICloudAccount;
- (id)recordZoneName;
- (id)recordType;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(retain, nonatomic) NSString *contentHashAtImport; // @dynamic contentHashAtImport;
@property(retain, nonatomic) NSDate *modificationDateAtImport; // @dynamic modificationDateAtImport;
@property(nonatomic) short type; // @dynamic type;

@end

