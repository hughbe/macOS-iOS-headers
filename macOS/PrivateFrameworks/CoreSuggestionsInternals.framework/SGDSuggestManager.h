//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGDSuggestManagerAllProtocol.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSXPCConnection, SGAsset, SGQueryPredictions, SGServiceContext, SGSqlEntityStore, SGSuggestHistory;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol>
{
    SGSqlEntityStore *_harvestStore;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    CDUnknownBlockType _ekStoreFactory;
    NSObject<OS_dispatch_queue> *_frontfillQueue;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    NSObject<OS_dispatch_semaphore> *_frontfillSemaphoreForTesting;
    BOOL _dirty;
    BOOL _xpcActivity;
    SGAsset *_asset;
    struct _opaque_pthread_mutex_t _geocodeLock;
    struct SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
    SGQueryPredictions *_queryPredictions;
    SGServiceContext *_context;
}

+ (void)resetXpcActivityForTesting;
+ (void)resetLastFrontfillFinishTimeForTesting;
+ (void)initialize;
@property(readonly, nonatomic) SGServiceContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_maybeFormatString;
- (void)sleepWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonExitWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)keepDirty:(BOOL)arg1;
- (void)schemaOrgToEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSHarvestActivity;
- (void)_adjustCriteriaForCTS;
- (void)waitForXpcActivityQueue;
- (void)_doAdjustCriteriaForCTS;
- (void)registerForCoreSpotlightIndexing;
- (void)registerForCTS;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)drainDefaultQueueCompletely;
- (void)drainDefaultQueueCompletelyRunningOptionalDissectors:(BOOL)arg1;
- (void)waitUntilFrontfillFinishedForTesting;
- (void)resumeFrontfillForTesting;
- (void)suspendFrontfillForTesting;
- (BOOL)drainHarvestQueue:(id)arg1 runningOptionalDissectors:(BOOL)arg2 highPriorityOnly:(BOOL)arg3 continuingWhile:(CDUnknownBlockType)arg4;
- (void)processPendingGeocodes;
- (BOOL)processSearchableItem:(id)arg1 pipeline:(id)arg2 dissectionQueue:(id)arg3 storeQueue:(id)arg4;
- (BOOL)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueueSearchableItems:(id)arg1;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)resetConfirmationAndRejectionHistory:(CDUnknownBlockType)arg1;
- (void)rejectContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectContactDetailRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmContactDetailRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)confirmContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectEventByRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmEventByRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_delayedBannerConfirmWithEvent:(id)arg1;
- (void)originFromRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eventFromUniqueId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (BOOL)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(BOOL)arg4;
- (BOOL)containsNonCuratedData:(id)arg1;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (id)curatedEventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (id)fetchEKEventForPseudoNLEvent:(id)arg1 entityTitle:(id)arg2;
- (id)fetchEKEventForPseudoEventBySimilarTitleAndStartTime:(id)arg1;
- (void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageResult:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didEndSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didStartSearch:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1;
- (void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_suggestionsFromMessageWithIdentifier:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 providedBy:(CDUnknownBlockType)arg5 dissectIfNecessary:(BOOL)arg6;
- (void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(CDUnknownBlockType)arg7;
- (BOOL)_canBannerUseStoredDissection:(id)arg1 needsOptionalDissectorsToRun:(char *)arg2 options:(unsigned long long)arg3;
- (id)cachedResultForKey:(id)arg1 generateResult:(CDUnknownBlockType)arg2 validateResults:(CDUnknownBlockType)arg3;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3 existingEnrichments:(id)arg4;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)eventFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)_mapToPseudoEvents:(id)arg1;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)storageContactFromRecordId:(id)arg1;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)isEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareForRealtimeExtraction:(CDUnknownBlockType)arg1;
- (BOOL)_clientIsMail;
- (id)xpcActivity;
- (void)dealloc;
- (id)initWithStore:(id)arg1 xpcActivity:(BOOL)arg2;
- (id)initWithConnection:(id)arg1 store:(id)arg2;
- (id)ekStore;
- (void)setEKStoreFactoryForTesting:(CDUnknownBlockType)arg1;
- (void)_onInteractionBlacklistUpdate:(id)arg1;
- (void)_setupHistoryObserver:(id)arg1;
- (void)setupManagerWithConnection:(id)arg1 store:(id)arg2 xpcActivity:(BOOL)arg3 queryPredictions:(id)arg4;

@end

