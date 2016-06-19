//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudHistoryThrottlerDataStore.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, WBSCloudHistoryConfiguration, WBSCloudHistoryPushAgentProxy, WBSCloudHistoryThrottler;

@interface WBSCloudHistory : NSObject <WBSCloudHistoryThrottlerDataStore>
{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    BOOL _cloudHistoryEnabled;
    BOOL _saveChangesWhenHistoryLoads;
    BOOL _fetchChangesWhenHistoryLoads;
    id <NSObject> _historyWasLoadedObserver;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _replayLongLivedSaveOperationSuddenTerminationDisabler;
    BOOL _removedHistoryItemsArePendingSave;
    BOOL _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id <WBSCloudHistoryDataStore> _store;
    WBSCloudHistoryThrottler *_saveChangesThrottler;
    WBSCloudHistoryThrottler *_fetchChangesThrottler;
    WBSCloudHistoryThrottler *_syncCircleSizeRetrievalThrottler;
    NSTimer *_serverBackoffTimer;
    BOOL _saveChangesWhenBackoffTimerFires;
    BOOL _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    NSTimer *_pushNotificationFetchTimer;
    unsigned long long _numberOfDevicesInSyncCircle;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
}

@property(nonatomic) unsigned long long numberOfDevicesInSyncCircle; // @synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetForAccountChange;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_updateThrottlerPolicies;
- (void)_updateDeviceCountInResponseToPushNotification;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSaveChangesThrottlerPolicyString;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (long long)_resultFromError:(id)arg1;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_saveChangesWhenHistoryLoads;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (void)_processPendingPushNotifications;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_initializePushNotificationSupport;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_persistedLongLivedSaveOperationID:(id *)arg1 databaseGeneration:(long long *)arg2;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2 withPriority:(long long)arg3;
- (void)_fetchAndMergeChangesBypassingThrottler:(BOOL)arg1;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChanges;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(BOOL)arg1;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)_saveChangesToCloudHistoryStoreBypassingThrottler:(BOOL)arg1;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesToCloudHistoryStore;
- (BOOL)_hasCloudHistoryEntitlement;
@property(nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

