/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingList : FCPrivateDataController {
    FCCloudContext * _cloudContext;
    NSMutableDictionary * _entriesByArticleID;
    FCMTWriterLock * _itemsLock;
}

@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (nonatomic, retain) NSMutableDictionary *entriesByArticleID;
@property (nonatomic, retain) FCMTWriterLock *itemsLock;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 eventInitiationLevel:(long long)arg3;
- (id)_allEntriesInReadingList;
- (id)_allSortedEntriesInReadingList;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(id /* block */)arg1;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)arg1;
- (id)_readingListEntryForArticleID:(id)arg1;
- (void)addArticleToReadingList:(id)arg1;
- (void)addArticleToReadingList:(id)arg1 eventInitiationLevel:(long long)arg2 origin:(unsigned long long)arg3;
- (void)addObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)allNonConsumedArticleIDs;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)arg1;
- (id)allSortedArticleIDsInReadingList;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)cloudContext;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)arg1;
- (id)dateArticleWasAdded:(id)arg1;
- (id)entriesByArticleID;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (bool)isArticleOnReadingList:(id)arg1;
- (id)itemsLock;
- (void)loadLocalCachesFromStore;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeArticleFromReadingList:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setEntriesByArticleID:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (bool)shouldHideHeadline:(id)arg1;

@end
