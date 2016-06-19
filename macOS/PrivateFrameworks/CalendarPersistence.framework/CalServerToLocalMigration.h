//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalServerToLocalMigration : NSObject
{
}

+ (void)_haltNetworkingForPrincipal:(id)arg1;
+ (id)_eventsWithAttachmentsInPrincipal:(id)arg1;
+ (void)migrateToLocalPreAccountDeletionForPrincipal:(id)arg1 includeEvents:(BOOL)arg2 includeReminders:(BOOL)arg3;
+ (void)moveCalendarsIntoMigrationGroup:(id)arg1 fromPrincipal:(id)arg2 includeEvents:(BOOL)arg3 includeReminders:(BOOL)arg4;
+ (id)_mastersOrPhantomEventsFromEvents:(id)arg1;
+ (void)_removeAttendeesFromEvent:(id)arg1;
+ (void)_removeAttendeesFromMaster:(id)arg1;
+ (void)_moveAttachmentsForEvent:(id)arg1 fromCalendar:(id)arg2 toCalendar:(id)arg3;
+ (void)_moveEventSeriesFromMaster:(id)arg1 toCalendar:(id)arg2;
+ (id)_existingMatchUIDsInLocalCalendarsForItems:(id)arg1 inContext:(id)arg2;
+ (id)_serverToLocalMigrationGroupsInContext:(id)arg1;
+ (void)_processMigrationGroups;
+ (id)_limitingQueue;
+ (id)_localCalendarCreationQueue;
+ (id)_asyncWorkQueue;
+ (void)processMigrationGroups;

@end

