//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDSystemAvailabilityWatcher.h"

@class CKDClientContext, CKWatchdog, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSXPCConnection;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher>
{
    CKDClientContext *_context;
    BOOL _sandboxed;
    BOOL _canUsePackages;
    BOOL _canOpenByID;
    BOOL _canUseCKDuringBuddy;
    BOOL _canUseCKBeforeFirstUnlock;
    BOOL _holdAllOperations;
    int _pid;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_cleanupOperationQueue;
    NSString *_procName;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    NSObject<OS_dispatch_queue> *_statusQueue;
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSString *_bundleIdentifier;
    NSString *_sourceApplicationBundleIdentifier;
    NSArray *_cachedSandboxExtensions;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_pendingOperationIDs;
    CKWatchdog *_watchdog;
    NSDate *_connectionDate;
    NSMutableDictionary *_operationStatisticsByClassName;
}

+ (id)sharedClientThrottlingOperationQueue;
@property(retain, nonatomic) NSMutableDictionary *operationStatisticsByClassName; // @synthesize operationStatisticsByClassName=_operationStatisticsByClassName;
@property(retain, nonatomic) NSDate *connectionDate; // @synthesize connectionDate=_connectionDate;
@property(retain, nonatomic) CKWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSMutableSet *pendingOperationIDs; // @synthesize pendingOperationIDs=_pendingOperationIDs;
@property(nonatomic) BOOL holdAllOperations; // @synthesize holdAllOperations=_holdAllOperations;
@property(nonatomic) BOOL canUseCKBeforeFirstUnlock; // @synthesize canUseCKBeforeFirstUnlock=_canUseCKBeforeFirstUnlock;
@property(nonatomic) BOOL canUseCKDuringBuddy; // @synthesize canUseCKDuringBuddy=_canUseCKDuringBuddy;
@property(nonatomic) BOOL canOpenByID; // @synthesize canOpenByID=_canOpenByID;
@property(nonatomic) BOOL canUsePackages; // @synthesize canUsePackages=_canUsePackages;
@property(retain, nonatomic) NSMutableArray *pendingContexts; // @synthesize pendingContexts=_pendingContexts;
@property(retain, nonatomic) NSArray *cachedSandboxExtensions; // @synthesize cachedSandboxExtensions=_cachedSandboxExtensions;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSOperationQueue *backgroundOperationThrottleQueue; // @synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // @synthesize statusQueue=_statusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cancellationQueue; // @synthesize cancellationQueue=_cancellationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) NSString *procName; // @synthesize procName=_procName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSOperationQueue *cleanupOperationQueue; // @synthesize cleanupOperationQueue=_cleanupOperationQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (BOOL)canUsePackagesWithError:(id *)arg1;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)purgeDirectory:(id)arg1;
- (void)updatePushTokens;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (id)CKStatusReportArray;
- (id)_operationStatusReport:(id)arg1;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performFetchEnvironmentOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)forceFinishClientSetupWithClientContext:(id)arg1;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_bundleURL;
- (id)_executablePath;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)cancelAllOperations;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fullNameAndPrimaryEmailOnAccountWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accountChangedWithID:(id)arg1;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)openFileWithOpenInfo:(id)arg1 error:(id *)arg2;
- (void)_handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2;
- (void)_handleCompletionForOperationWithID:(id)arg1 isLongLived:(BOOL)arg2 withResult:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)_accountStatusWithClientContext:(id)arg1;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(CDUnknownBlockType)arg2;
- (BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id *)arg2;
- (BOOL)darkWakeEnabledEntitlement;
- (BOOL)usePublicTokenEntitlement;
- (id)apsEnvironmentEntitlement;
- (id)_clientPrefixEntitlement;
- (id)applicationIdentifier;
- (BOOL)hasDisplaysSystemAcceptPromptEntitlement;
- (BOOL)hasParticipantPIIEntitlement;
- (BOOL)hasOutOfProcessUIEntitlement;
- (BOOL)hasAllowAccessBeforeFirstUnlockSinceBootEntitlement;
- (BOOL)hasLightweightPCSEntitlement;
- (BOOL)hasAllowAccessDuringBuddyEntitlement;
- (BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (BOOL)hasCloudKitSystemServiceEntitlement;
- (BOOL)hasDeviceIdentifierEntitlement;
- (BOOL)hasProtectionDataEntitlement;
- (BOOL)_hasCustomAccountsEntitlement;
- (BOOL)_hasEnvironmentEntitlement;
- (BOOL)hasMasqueradingEntitlement;
- (BOOL)_hasEntitlementForKey:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)isLongLived;
- (BOOL)hasTCCAuthorization;
- (void)tearDown;
@property(retain, nonatomic) CKDClientContext *context;
- (void)setClientProxyAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)_setupOperationQueues;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

