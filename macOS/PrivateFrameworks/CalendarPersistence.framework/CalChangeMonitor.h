//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistenceMonitor.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSTask, NSTimer, NSURL;

@interface CalChangeMonitor : CalPersistenceMonitor
{
    BOOL disabled;
    BOOL migrating;
    BOOL _hasUnsyncedChanges;
    NSArray *_fastSyncArgs;
    NSArray *_slowSyncArgs;
    NSArray *_refreshArgs;
    NSArray *_restoreSyncArgs;
    NSTimer *syncTimer;
    NSMutableArray *_outstandingTasks;
    NSURL *_calendarCacheURL;
    NSMutableSet *_notReallyChanged;
    NSObject<OS_dispatch_queue> *_sync_queue;
    NSTask *_syncTask;
}

+ (id)defaultMonitor;
@property(readonly) NSURL *calendarCacheURL; // @synthesize calendarCacheURL=_calendarCacheURL;
@property(retain) NSTask *syncTask; // @synthesize syncTask=_syncTask;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (BOOL)changeIsOfInterest:(id)arg1 trueUpdates:(id)arg2;
- (void)checkAgainstCommittedValues:(id)arg1;
- (void)syncNowWithRefresh:(BOOL)arg1;
@property(readonly) NSArray *syncArgs;
- (void)finishedDatabaseMigration:(BOOL)arg1;
- (void)finishedDatabaseReset;
- (void)setiCalSyncRefreshMode;
- (void)doSlowSync;
- (void)_agentSyncWithArgs:(id)arg1 shouldDelay:(BOOL)arg2;
- (void)periodicSync;
- (void)launchSyncWithArgs:(id)arg1 shouldDelay:(BOOL)arg2;
- (void)_doSyncProcessDied:(id)arg1;
- (void)beginningDatabaseMigration;
- (void)beginningDatabaseReset:(BOOL)arg1;
- (void)beginningDatabaseReset;
- (void)cancelSyncing;
@property(readonly) NSString *syncToolPath;
@property BOOL databaseReset;
@property(readonly) BOOL syncEnabled;
@property(readonly) BOOL trackingEnabled;
- (BOOL)_syncingWithOtherClients;
- (void)disableSyncingAndChangeTracking;
- (void)scheduleTimerOnMainThread:(id)arg1;
- (void)invalideTimeOnMainThread;
- (void)forceSyncByAppNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)changeTracker;
- (id)threadChangeTracker;

@end

