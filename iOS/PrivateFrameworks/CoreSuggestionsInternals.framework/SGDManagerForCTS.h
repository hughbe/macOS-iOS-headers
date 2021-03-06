/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDManagerForCTS : NSObject {
    NSObject<OS_dispatch_source> * _adjustActivitySource;
    SGServiceContext * _context;
    struct SGDSuggestManagerCTSCriteriaState { 
        bool hasItemsHighPriority; 
        bool hasItemsLowPriority; 
    }  _ctsCriteriaState;
    NSObject<OS_dispatch_queue> * _frontfillQueue;
    NSObject<OS_dispatch_semaphore> * _frontfillSemaphoreForTesting;
    NSObject<OS_dispatch_source> * _frontfillSource;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _geocodeLock;
    NSObject<OS_dispatch_queue> * _harvestQueue;
    SGSqlEntityStore * _harvestStore;
    double  _lastFrontfillFinishTime;
    PETEventTracker2 * _pet2tracker;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _verificationLock;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (void)_logCallInteractions:(id)arg1;
+ (id)defaultInstance;
+ (id)sharedSingletonInstance;

- (void).cxx_destruct;
- (bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (void)_doAdjustCriteriaForCTS;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (void)_performCollectWeeklyStats:(id)arg1;
- (void)_performCustomResponseHarvest:(id)arg1;
- (void)_performHarvestActivity:(id)arg1 callback:(id /* block */)arg2;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_performMobileAssetMetadataDownloadActivity:(id)arg1;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_performProcessPendingVerificationActivity:(id)arg1 overrideVerificationStatus:(id)arg2;
- (void)_performSendRTCActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_performVacuumActivity;
- (void)_registerForCTSHarvestActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerForCustomResponseHarvest;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_registerProcessPendingGeocodesActivity;
- (void)_registerProcessPendingVerificationActivity;
- (void)adjustCriteriaForCTS;
- (void)dealloc;
- (void)drainDefaultQueueCompletely;
- (void)drainDefaultQueueWithStructuredEventsCandidatesPriorityOption;
- (bool)drainHarvestQueue:(id)arg1 priorityOption:(unsigned char)arg2 continuingWhile:(id /* block */)arg3;
- (bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (id)initWithHarvestStore:(id)arg1 xpcActivityManager:(id)arg2;
- (void)performContactDetailCacheRebuildActivity:(id)arg1;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3 harvestMetrics:(id)arg4;
- (bool)processSearchableItemForTesting:(id)arg1;
- (void)registerForCTS;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)resumeFrontfillForTesting;
- (void)suspendFrontfillForTesting;
- (void)triggerFrontfillHarvest;
- (void)waitForXpcActivityQueue;
- (void)waitUntilFrontfillFinishedForTesting;

@end
