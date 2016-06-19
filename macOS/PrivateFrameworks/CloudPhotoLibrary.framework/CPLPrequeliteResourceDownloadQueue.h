//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineResourceDownloadQueueImplementation.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation>
{
    CPLPrequeliteVariable *_nextTaskIdentifier;
    CPLPrequeliteVariable *_nextPosition;
}

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)countOfQueuedDownloadTasks;
- (unsigned long long)_countOfRecordsWithStatus:(int)arg1;
- (id)enumeratorForDownloadedResources;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (BOOL)dequeueNextBackgroundDownloadTasks:(unsigned long long)arg1 resourceType:(unsigned long long)arg2 localResources:(id *)arg3 taskIdentifiers:(id *)arg4 error:(id *)arg5;
- (BOOL)dequeueNextBackgroundDownloadTask:(id *)arg1 resourceType:(unsigned long long)arg2 taskIdentifier:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 bumpRetryCount:(BOOL)arg3 didDiscard:(char *)arg4 error:(id *)arg5;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_enqueueResource:(id)arg1 error:(id *)arg2;
- (id)_enqueuedResourceForResource:(id)arg1;
- (BOOL)_deleteEnqueuedResource:(id)arg1 error:(id *)arg2;
- (BOOL)_getNextPosition:(unsigned long long *)arg1 andBumpWithError:(id *)arg2;
- (unsigned long long)newTaskIdentifier;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

