//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalCalDAVTaskManager, CalDAVAccountInfoProvider, NSDate, NSError, NSManagedObjectID, NSMutableSet, NSObject<OS_dispatch_source>;

@interface CalDAVQueueableOperation : NSObject
{
    NSManagedObjectID *_sessionID;
    NSError *_error;
    BOOL _running;
    long long _retryCounter;
    BOOL _pendingRetry;
    NSDate *_startDate;
    NSMutableSet *_dependencies;
    CalCalDAVTaskManager *_taskManager;
    CalDAVAccountInfoProvider *_accountInfoProvider;
    NSObject<OS_dispatch_source> *_timerOfDeath;
}

+ (id)_createTimerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(retain) NSObject<OS_dispatch_source> *timerOfDeath; // @synthesize timerOfDeath=_timerOfDeath;
@property(readonly, retain) CalCalDAVTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain) CalDAVAccountInfoProvider *accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (BOOL)_isLowPriority;
- (BOOL)_shouldKillAgentIfThisTakesTooLong;
- (BOOL)_shouldCoalesceWithOperations:(id)arg1;
- (void)handleRemovalCleanup;
- (id)dependencies;
- (BOOL)hasDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (BOOL)isReady;
- (long long)sequenceNumber;
- (long long)maxRetries;
- (long long)retryCounter;
- (BOOL)isPendingRetry;
- (id)readableDescription;
- (id)description;
- (BOOL)isRunning;
- (void)removeAssociatedEntities;
- (void)finishOperation;
- (void)enqueue;
- (void)setError:(id)arg1;
- (void)_persistException;
- (BOOL)suppressErrorDialog;
- (void)scheduleRetryMainThread:(id)arg1;
- (BOOL)scheduleRetry:(long long)arg1;
- (void)retryTimerFired:(id)arg1;
- (BOOL)isTransientError:(id)arg1;
- (id)rebuildError:(id)arg1;
- (id)extraUserInfoForRebuiltError;
- (id)error;
- (id)queue;
- (id)session;
- (id)sessionID;
- (id)associatedChangeRequestInContext:(id)arg1;
- (void)performOperation;
- (void)performOperationSynchronously;
- (void)_updateAccountInfoProviderIfNecessary;
- (void)_cancelTimer;
- (void)_startTimer;
- (void)beginQueueableOperation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1;

@end

