/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJournalManager : PLJournalManagerCore {
    PLChangeHandlingNotificationObserver * _changeHandlingNotificationObserver;
    NSPersistentHistoryToken * _currentHistoryToken;
    _Atomic bool  _ignoreHistoryDuringSnapshot;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _startupWaitGroup;
    unsigned short  _state;
    PLPhotoLibrary * _transientPhotoLibrary;
}

+ (bool)assetJournalExists:(id)arg1 error:(id*)arg2;
+ (id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id*)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4 shouldStopBlock:(id /* block */)arg5;
+ (bool)existingJournalsCompatibleForRebuild:(id)arg1 error:(id*)arg2;
+ (id)existingObjectWithID:(id)arg1 managedObjectContext:(id)arg2;
+ (Class)payloadClassForAdditionalEntityName:(id)arg1;
+ (id)payloadClasses;

- (void).cxx_destruct;
- (bool)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (bool)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2;
- (void)_handleChangeHandlingNotificationWithTransaction:(id)arg1;
- (void)_loadHistoryToken;
- (bool)_needFullSnapshot;
- (bool)_needPartialSnapshot:(id)arg1;
- (bool)_needSnapshot;
- (bool)_performSnapshotsForceFull:(bool)arg1 error:(id*)arg2;
- (void)_recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3;
- (void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)_registerForChangeHandlingNotifications;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (bool)_replayFromCurrentHistoryToken;
- (bool)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1;
- (void)_start;
- (void)_startAfterRebuild;
- (void)_unregisterForChangeHandlingNotifications;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (bool)forceFullSnapshot:(id*)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)newTransientContext;
- (void)notifyDidImportFileSystemAssets;
- (void)notifyWillImportFileSystemAssets;
- (void)recreateAllObjectsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2;
- (void)recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3;
- (void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
