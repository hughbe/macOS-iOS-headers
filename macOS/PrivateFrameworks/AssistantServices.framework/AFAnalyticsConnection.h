//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAnalyticsService.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, NSString, NSXPCConnection;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableSet *_stagedEventsToBeSent;
    NSMutableSet *_stagedEventsBeingSent;
    NSObject<OS_dispatch_source> *_houseKeepingTimer;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _needsCleanUpConnection;
}

@property BOOL needsCleanUpConnection; // @synthesize needsCleanUpConnection=_needsCleanUpConnection;
- (void).cxx_destruct;
- (void)_houseKeeperArrived;
- (void)_stopHouseKeepingTimer;
- (void)_startHouseKeepingTimer;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (unsigned long long)_numberOfStagedEvents;
- (void)_mutateStagedEventsSynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (void)_finalizeSendingEvents:(id)arg1;
- (void)_handleBarrierCallbackForEvents:(id)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2;
- (void)_sendEvents:(id)arg1;
- (void)_processStagedEvents;
- (void)_stageEvents:(id)arg1;
- (void)_stageEvent:(id)arg1;
- (oneway void)stageEvents:(id)arg1;
- (oneway void)stageEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

