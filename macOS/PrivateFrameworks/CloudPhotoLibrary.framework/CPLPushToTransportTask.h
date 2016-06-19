//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLChangeBatch, CPLEngineChangePipe, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPushToTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    CPLChangeBatch *_uploadBatch;
    CPLChangeBatch *_batchToCommit;
    NSArray *_uploadResourceTasks;
    NSArray *_staleOrUnavailableResources;
    NSArray *_resourcesForBackgroundUpload;
    NSMutableDictionary *_recordsWithSparseResources;
    NSMutableDictionary *_recordsWithForwardCompatibilityCheck;
    NSMutableDictionary *_recordsToCheckForExistence;
    id <CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
    id <CPLEngineTransportUploadBatchTask> _uploadTask;
    unsigned long long _lastReportedProgress;
    unsigned long long _countOfPushedBatches;
    NSString *_clientCacheIdentifier;
    CPLEngineChangePipe *_currentPushQueue;
    double _startOfIteration;
    double _startOfDerivativesGeneration;
    BOOL _generatingSomeDerivatives;
    BOOL _deferredCancel;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)cancel:(BOOL)arg1;
- (void)resume;
- (void)pause;
- (void)launch;
- (void)_doOneIteration;
- (void)_uploadBatch;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_checkForRecordExistence;
- (void)_detectUpdatesNeedingExistenceCheck:(id)arg1;
- (void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(CDUnknownBlockType)arg3;
- (BOOL)_discardResourcesToUploadFromBatch:(id)arg1 error:(id *)arg2;
- (BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id *)arg2;
- (BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id *)arg2;
- (void)_requireExistenceCheckForRecords:(id)arg1;
- (void)_popNextBatchAndContinue;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPushToTransportTaskDelegate> delegate; // @dynamic delegate;

@end

