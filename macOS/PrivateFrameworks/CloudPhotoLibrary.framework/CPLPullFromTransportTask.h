//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLFeatureVersionHistory, NSData, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPullFromTransportTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_initialSyncAnchor;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportQueryTask> _queryTask;
    id <CPLEngineTransportGetLibraryInfoTask> _getLibraryInfoTask;
    NSData *_lastKnownSyncAnchor;
    NSString *_clientCacheIdentifier;
    Class _currentQueryClass;
    BOOL _resetSyncAnchor;
    BOOL _ignoreNewBatches;
    BOOL _gotSomeChanges;
    BOOL _useCourtesyMingling;
    unsigned long long _rewindFeatureVersion;
    NSData *_rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    BOOL _isPrePushPhase;
}

@property(nonatomic, setter=setPrePushPhase:) BOOL isPrePushPhase; // @synthesize isPrePushPhase=_isPrePushPhase;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_checkServerFeatureVersion:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_launchPullTasksAndDisableQueries:(BOOL)arg1;
- (void)_launchNextQueryTask;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launchFetchChangesFromSyncAnchor:(id)arg1;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2;
- (BOOL)_checkStateBeforeContinuingInTransaction:(id)arg1;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 inTransaction:(id)arg3;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (id)initWithEngineLibrary:(id)arg1;

// Remaining properties
@property(retain) id <CPLPullFromTransportTaskDelegate> delegate; // @dynamic delegate;

@end

