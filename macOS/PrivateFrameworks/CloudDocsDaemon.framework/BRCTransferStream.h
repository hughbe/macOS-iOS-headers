//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLifeCycle-Protocol.h>
#import <CloudDocsDaemon/BRCSuspendable-Protocol.h>

@class BRCAccountSession, BRCDeadlineSource, BRCSyncContext, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable>
{
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    long long _nextFire;
    NSMutableDictionary *_inFlightOpByID;
    BRCDeadlineSource *_schedulingSource;
    NSObject<OS_dispatch_queue> *_transferQueue;
    unsigned long long _inFlightSize;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    BOOL _isWaitingForTransferBatch;
    BOOL _hasReachedCap;
    _Atomic int _multipleItemsInteractiveSchedulingCount;
    BOOL _isCancelled;
    CDUnknownBlockType _streamDidBecomeReadyToTransferRecords;
    unsigned long long _maxCountOfBatchesInFlight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long inFlightSize; // @synthesize inFlightSize=_inFlightSize;
@property(nonatomic) unsigned long long maxCountOfBatchesInFlight; // @synthesize maxCountOfBatchesInFlight=_maxCountOfBatchesInFlight;
@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) CDUnknownBlockType streamDidBecomeReadyToTransferRecords; // @synthesize streamDidBecomeReadyToTransferRecords=_streamDidBecomeReadyToTransferRecords;
- (void)suspend;
- (void)close;
- (void)cancel;
- (void)resume;
- (double)progressForTransferID:(id)arg1 operationID:(id)arg2;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2 operationID:(id)arg3;
- (void)cancelTransferID:(id)arg1 operationID:(id)arg2;
- (void)_schedule;
- (void)_scheduleOneBatchWithQoS:(long long)arg1;
- (void)addBatchOperation:(id)arg1;
- (void)_addBatchOperation:(id)arg1;
- (void)_evaluateCap;
- (void)forceSchedulingPendingInteractiveTransfers;
- (void)endSchedulingMultipleItemsInteractively;
- (void)startSchedulingMultipleItemsInteractively;
- (void)_setReachedCap:(BOOL)arg1;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (id)initWithSyncContext:(id)arg1 name:(id)arg2 scheduler:(id)arg3;
@property(readonly) NSArray *operations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

