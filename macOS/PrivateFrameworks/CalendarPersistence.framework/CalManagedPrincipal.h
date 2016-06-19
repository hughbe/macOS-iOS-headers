//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedGroup.h>

#import "CalAccountLikeObject.h"
#import "DefaultAlarmProviderProtocol.h"

@class ACAccount, CalManagedDefaultAlarmSet, CalManagedMigrationGroup, NSDate, NSSet, NSString, NSURL;

@interface CalManagedPrincipal : CalManagedGroup <CalAccountLikeObject, DefaultAlarmProviderProtocol>
{
    BOOL _statusIsBusy;
}

+ (id)_delegatePrincipalsInContext:(id)arg1;
+ (id)_cachedParentACAccountForCachedACAccount:(id)arg1;
+ (void)updateInfoDictionary:(id)arg1 withAccount:(id)arg2;
+ (void)updateInfoDictionary:(id)arg1 atPath:(id)arg2 withAccount:(id)arg3;
+ (BOOL)principalInfoDictionaryRepresentsUnmigratedPrincipal:(id)arg1;
+ (BOOL)principalInfoDictionaryRepresentsMainPrincipal:(id)arg1;
+ (BOOL)principalInfoDictionaryRepresentsExchangePrincipal:(id)arg1;
+ (BOOL)principalInfoDictionaryRepresentsCalDAVPrincipal:(id)arg1;
+ (id)delegatePrincipalInfoDictionariesForPrincipalWithUID:(id)arg1;
+ (id)principalInfoDictionaryForPrincipalWithUID:(id)arg1;
+ (BOOL)infoDictionaryRepresentsPrincipal:(id)arg1;
+ (id)accountFromPrincipalInfoDictionary:(id)arg1;
+ (id)principalWithUID:(id)arg1 inContext:(id)arg2;
+ (id)principalsWithUIDs:(id)arg1 inContext:(id)arg2;
+ (id)mainPrincipalForAccount:(id)arg1 inContext:(id)arg2;
+ (id)enabledDelegatePrincipalsInContext:(id)arg1;
+ (id)enabledAccountsSortedByMainPrincipalsInContext:(id)arg1;
+ (id)delegatePrincipalsForAccount:(id)arg1 inContext:(id)arg2;
+ (id)allPrincipalsInContext:(id)arg1;
+ (id)allPrincipalsForAccount:(id)arg1 inContext:(id)arg2;
+ (id)activePrincipalsInContext:(id)arg1;
+ (Class)freeBusyCacheClass;
+ (BOOL)calendarUserAddress:(id)arg1 isInCalendarAddressUserSet:(id)arg2;
+ (id)myAddressInPrincipal:(id)arg1 forEvent:(id)arg2;
+ (id)fetchPrincipalWithObjectID:(id)arg1 prefetchedRelationshipKeyPaths:(id)arg2 inContext:(id)arg3;
+ (id)fetchRequestWithUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequestWithUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
@property BOOL statusIsBusy; // @synthesize statusIsBusy=_statusIsBusy;
- (BOOL)updateCachedAccountValues;
- (int)displayOrder;
- (id)ownerAddresses;
- (id)providerIdentifier;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
- (id)externalSourceIdentifier;
- (id)messageTraceableAccountName;
- (BOOL)validateForInsert:(id *)arg1;
- (id)fetchRequestForInsertValidation;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)stripPathAndSetOverrideBaseURL:(id)arg1;
@property(retain) NSURL *overrideBaseURL;
- (void)_setOverrideBaseURL:(id)arg1;
- (BOOL)supportsPrivateEvents;
@property(readonly) BOOL supportsFreebusy;
@property BOOL isDelegate;
@property(readonly) BOOL isMainPrincipal;
@property(readonly) BOOL isAutoScheduleSupported;
@property(readonly) BOOL isLikenessPropagationSupported;
@property(readonly) BOOL isPrivateCommentsSupported;
@property(readonly) BOOL isCalendarServerPrivateEventsSupported;
- (id)properties;
@property(readonly) NSURL *calendarUserAddress;
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)arg1;
- (id)keysOnlyRelevantToNetworkDetails;
- (id)calendarUserAddressesAsURLs;
- (id)serverURL;
- (id)title;
@property BOOL isManuallyConfigured;
@property(readonly) NSString *fullName;
@property(readonly) ACAccount *cachedACAccountForAccessingParentDerivedProperties;
@property(readonly) ACAccount *cachedACAccount;
@property(readonly) ACAccount *acAccount;
- (BOOL)changeAffectsAlarms:(id)arg1;
- (BOOL)changesAffectSession:(id)arg1;
- (BOOL)changesAffectRefresh:(id)arg1;
- (BOOL)changesAffectPush:(id)arg1;
- (BOOL)changesAffectDock:(id)arg1;
- (BOOL)deleteAffectsDock;
- (BOOL)deleteAffectsPush;
- (BOOL)deleteAffectsSession;
- (BOOL)insertAffectsDock;
- (BOOL)insertAffectsPush;
- (BOOL)insertAffectsSession;
- (id)objectIdentifier;

// Remaining properties
@property(retain) NSString *accountID; // @dynamic accountID;
@property(retain) NSSet *calendarUserAddresses; // @dynamic calendarUserAddresses;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain) CalManagedDefaultAlarmSet *defaultAlarmSet; // @dynamic defaultAlarmSet;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property BOOL isInSeparateWindow; // @dynamic isInSeparateWindow;
@property BOOL keepOffline; // @dynamic keepOffline;
@property(retain) CalManagedDefaultAlarmSet *localDefaultAlarmSet; // @dynamic localDefaultAlarmSet;
@property(retain) NSSet *messages; // @dynamic messages;
@property(retain) CalManagedMigrationGroup *migrationGroup; // @dynamic migrationGroup;
@property(retain) NSDate *refreshDate; // @dynamic refreshDate;
@property BOOL shareDefaultAlarmSettings; // @dynamic shareDefaultAlarmSettings;
@property(readonly) Class superclass;
@property BOOL supportsDefaultAlarms; // @dynamic supportsDefaultAlarms;

@end

