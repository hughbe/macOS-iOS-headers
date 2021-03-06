/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
 */

@interface DRSService : NSObject {
    DRSCloudKitHelper * _ckHelper;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSMutableDictionary * _connectionToState;
    DRSDampeningManager * _dampeningManager;
    bool  _isEnabled;
    unsigned long long  _maxSingleSessionUploadSizeInBytes;
    NSObject<OS_dispatch_queue> * _messageQueue;
    NSObject<OS_dispatch_queue> * _postReceiptWorkQueue;
    NSObject<OS_xpc_object> * _serviceConnection;
    NSPersistentContainer * _serviceContainer;
    NSObject<OS_dispatch_semaphore> * _serviceDeactivatedSem;
    unsigned char  _state;
}

@property (nonatomic, readonly) DRSCloudKitHelper *ckHelper;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) NSMutableDictionary *connectionToState;
@property (nonatomic, readonly) DRSDampeningManager *dampeningManager;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) unsigned long long maxSingleSessionUploadSizeInBytes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *postReceiptWorkQueue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *serviceConnection;
@property (nonatomic, readonly) NSPersistentContainer *serviceContainer;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) unsigned long long weeklyUploadQuotaBytes;

+ (id)databaseDirectory;
+ (id)fileDirectory;
+ (bool)serviceIsEnabled;
+ (id)sharedInstance;
+ (unsigned long long)uploadSessionUploadCapBytes;

- (void).cxx_destruct;
- (void)_addRequestToDAFileList:(id)arg1;
- (id)_cachedMatchingQuery:(id)arg1 workingContext:(id)arg2;
- (void)_ckQueueDownstreamOnly_uploadInFlightWithTransaction:(id)arg1 xpcActivity:(id)arg2;
- (void)_ckQueueOnly_submitOutstandingEnableDataGatheringQueriesWithTransaction:(id)arg1 xpcActivity:(id)arg2 followupWorkBlock:(id /* block */)arg3;
- (void)_configureReportStatsXPCActivity;
- (void)_configureUploadXPCActivity;
- (void)_configureXPCActivities;
- (bool)_connectionHasEntitlement:(id)arg1;
- (bool)_enableDataGatheringQueryPassesRandomRejection;
- (void)_finishReportingStatsSessionWithActivity:(id)arg1 withState:(long long)arg2 transaction:(id)arg3 endResultString:(id)arg4;
- (void)_finishUploadSessionWithActivity:(id)arg1 withState:(long long)arg2 transaction:(id)arg3 endResultString:(id)arg4;
- (void)_handleCKWorkTriggerRequest:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleDRSRequestMessage:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleDampeningConfigurationDictMessage:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleDampeningConfigurationGlobalEnablementMessage:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleDampeningConfigurationReset:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleEnableLogGatheringRequest:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_handleInjectEnableLogGatheringRequestResult:(id)arg1 state:(id)arg2;
- (void)_handleNewEntitledConnection:(id)arg1 state:(id)arg2;
- (void)_handleRequestCleanTrigger:(id)arg1 state:(id)arg2;
- (bool)_persistEnableLogGatheringResult:(id)arg1 workingContext:(id)arg2;
- (void)_postReceiptProcessingWork:(id)arg1 wasAccepted:(bool)arg2;
- (void)_rejectInjectRequest:(id)arg1 state:(id)arg2 reason:(const char *)arg3;
- (unsigned long long)_remainingSessionUploadQuotaBytesWithContext:(id)arg1;
- (unsigned long long)_remainingWeekUploadQuotaBytesWithContext:(id)arg1;
- (double)_resolvedEnableDataGatheringQueryAcceptanceRate;
- (void)_runCloudKitUploadWorkSessionWithTransaction:(id)arg1 xpcActivity:(id)arg2;
- (void)_runReportingSessionWithTransaction:(id)arg1 xpcActivity:(id)arg2;
- (bool)_saveDampeningManager;
- (void)_sendAdminRequestReply:(bool)arg1 rejectionReason:(const char *)arg2 requestMessage:(id)arg3;
- (void)_sendCurrentConfigurationToConnection:(id)arg1;
- (void)_sendRejectionMessage:(id)arg1 rejectionReason:(unsigned long long)arg2 state:(id)arg3;
- (void)_waitForDeviceUnlockAndInitializeServiceState;
- (bool)activateService;
- (id)ckHelper;
- (id)cloudKitQueue;
- (id)connectionToState;
- (id)dampeningManager;
- (void)deactivateService;
- (void)dealloc;
- (void)handleRequest:(id)arg1 state:(id)arg2;
- (id)init;
- (bool)isEnabled;
- (unsigned long long)maxSingleSessionUploadSizeInBytes;
- (id)messageQueue;
- (id)postReceiptWorkQueue;
- (id)serviceConnection;
- (id)serviceContainer;
- (id)serviceDeactivatedSem;
- (unsigned char)state;
- (unsigned long long)weeklyUploadQuotaBytes;

@end
