//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLAbstractObject.h"
#import "CPLEngineComponent.h"

@class CPLEngineLibrary, CPLPlatformObject, NSCountedSet, NSDate, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    NSDate *_nextScheduledDate;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    BOOL _opened;
    NSDate *_unavailabilityLimitDate;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    BOOL _didStartFirstSync;
    unsigned long long _rejectedRecordsRetries;
    NSSet *_rejectedRecordIdentifiers;
    BOOL _needsPrePush;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CDUnknownBlockType _requiredStateObserverBlock;
    CDUnknownBlockType _shouldBackOffOnErrorBlock;
}

+ (id)platformImplementationProtocol;
@property(readonly) BOOL needsPrePush; // @synthesize needsPrePush=_needsPrePush;
@property(copy, nonatomic) CDUnknownBlockType shouldBackOffOnErrorBlock; // @synthesize shouldBackOffOnErrorBlock=_shouldBackOffOnErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType requiredStateObserverBlock; // @synthesize requiredStateObserverBlock=_requiredStateObserverBlock;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (BOOL)needsPrepush;
- (id)_minimalDateForFirstSync;
- (void)_writeFirstSynchronizationMarker;
- (id)_pathToFirstSynchronizationMarker;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetBackoffInterval;
- (void)noteSyncSessionFailedDuringPhase:(unsigned long long)arg1 withError:(id)arg2;
- (void)_handleResetAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetClientCacheAndQuarantineRecords:(id)arg1 completionHAndler:(CDUnknownBlockType)arg2;
- (void)noteSyncSessionSucceeded;
- (void)noteSyncSessionStateWillBeAttempted:(unsigned long long)arg1;
- (void)noteNetworkStateDidChange;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)_disableRetryAfterLocked;
- (BOOL)isSynchronizationDisabledWithReasonError:(id *)arg1;
- (BOOL)isMinglingEnabled;
- (void)enableMingling;
- (void)disableMingling;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (BOOL)isClientInForeground;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteResourceDownloadQueueIsFull;
- (void)noteServerHasChanges;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)noteClientIsInSyncWithClientCache;
- (void)notePullQueueIsFull;
- (void)notePushQueueIsFull;
- (void)notePushQueueIsEmpty;
- (void)kickOffSyncSession;
- (void)startRequiredSyncSessionNow;
- (void)_backOff;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)arg1;
- (void)_unscheduleNextSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_scheduleNextSyncSession;
- (void)_startRequiredSyncSession;
- (void)_reallyStartSyncSession;
- (void)_startSyncSessionWithMinimalPhase:(unsigned long long)arg1;
- (BOOL)_syncSessionIsPossible;
- (void)_setRequiredFirstState:(unsigned long long)arg1;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

