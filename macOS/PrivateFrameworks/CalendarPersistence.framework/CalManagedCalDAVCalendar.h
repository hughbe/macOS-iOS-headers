//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedRemoteCalendar.h>

#import <CalendarPersistence/CalAccountLikeObject-Protocol.h>

@class NSSet, NSString, NSTimeZone, NSURL;

@interface CalManagedCalDAVCalendar : CalManagedRemoteCalendar <CalAccountLikeObject>
{
    BOOL _keepRemindersOnSplit;
    BOOL _keepEventsOnSplit;
}

+ (id)calendarSourceWithFallbackToCoreDataForCalendarUID:(id)arg1 usingContext:(id)arg2;
+ (void)enableChangeRequestNotifications;
+ (id)entityName;
@property BOOL keepRemindersOnSplit; // @synthesize keepRemindersOnSplit=_keepRemindersOnSplit;
@property BOOL keepEventsOnSplit; // @synthesize keepEventsOnSplit=_keepEventsOnSplit;
- (id)serverPath;
- (void)_setDefaultSchedulingCalendarToSelf;
- (BOOL)isDefaultSchedulingCalendar;
- (BOOL)allowsScheduling;
- (BOOL)defaultOrganizerIsMeForNewItems;
- (id)defaultOrganizerEncodedLikenessDataForNewItems;
- (id)defaultOrganizerPhoneNumberForNewItems;
- (id)_ownerEmailAddresses;
- (id)defaultOrganizerEmailForNewItems;
- (id)defaultOrganizerAddressForNewItems;
- (id)defaultOrganizerNameForNewItems;
- (BOOL)isShareable;
- (id)sharedOwnerAddresses;
- (id)sharedOwnerAddress;
- (id)sharedOwnerName;
- (id)sharingStatusString;
- (void)setOrder:(int)arg1;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (void)clearETags;
- (void)clearCalendarTags;
@property(retain) NSString *syncToken; // @dynamic syncToken;
@property(retain) NSString *cTag; // @dynamic cTag;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1;
- (id)_ownerAddressesAsDicts;
- (id)properties;
- (BOOL)isOwnerAddress:(id)arg1;
- (BOOL)isOwnerMe;
- (id)ownerAddressStrings;
@property(readonly) NSURL *ownerAddress;
- (id)nodesInNamespace;
- (id)calendarPathAppendSlashIfNeeded;
- (id)subscriptionOrPublishURL;
- (BOOL)supportsCalDAVPublish;
- (BOOL)isCalDAVPublished;
- (BOOL)supportsSharing;
- (BOOL)isSharedByMe;
- (BOOL)isSharedToMe;
- (BOOL)isShared;
@property(retain) NSTimeZone *timeZone; // @dynamic timeZone;
- (BOOL)keepSyncRecordLocal;
- (id)type;
- (id)relativePath;
- (void)willRefresh:(BOOL)arg1;
- (BOOL)isMigrateable;
@property BOOL isAffectingAvailability; // @dynamic isAffectingAvailability;
@property BOOL isColorEditable;
@property BOOL isRenameable;
@property BOOL isFamilyCalendar;
- (BOOL)dualTypeCollectionAbleToBeSplit;
- (id)calendarSource;
- (id)_addressForOwnerWithNoMailFallback;
- (void)insertSplitDualTypeRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarPublishStateInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarTimeZoneRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeFreeBusyCalendarRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarDescriptionRequestInManagedObjectContext:(id)arg1;
- (void)insertRenameCalendarRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarOrderRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarColorRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarAlarmsInManagedObjectContext:(id)arg1;
- (void)processUpdatedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processDeletedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processInsertedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;
- (void)migrateETags:(id)arg1;
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
@property(retain) NSString *calendarPath; // @dynamic calendarPath;
@property BOOL canBePublished; // @dynamic canBePublished;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property BOOL needsSplit; // @dynamic needsSplit;
@property(retain) NSSet *ownerAddresses; // @dynamic ownerAddresses;
@property(retain) NSString *ownerDisplayName; // @dynamic ownerDisplayName;
@property(retain) NSString *ownerPrincipalPath; // @dynamic ownerPrincipalPath;
@property(retain) NSString *pushKey; // @dynamic pushKey;
@property(readonly) Class superclass;

@end

