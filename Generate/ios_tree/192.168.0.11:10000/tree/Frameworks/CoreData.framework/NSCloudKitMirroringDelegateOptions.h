/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateOptions : NSObject {
    NSString * _apsConnectionMachServiceName;
    bool  _automaticallyDownloadFileBackedFutures;
    bool  _automaticallyScheduleImportAndExportOperations;
    NSNumber * _ckAssetThresholdBytes;
    NSString * _containerIdentifier;
    CKContainerOptions * _containerOptions;
    PFCloudKitContainerProvider * _containerProvider;
    long long  _databaseScope;
    CKOperationConfiguration * _defaultOperationConfiguration;
    bool  _initializeSchema;
    PFCloudKitMetadataPurger * _metadataPurger;
    PFCloudKitMetricsClient * _metricsClient;
    CKNotificationListener * _notificationListener;
    NSNumber * _operationMemoryThresholdBytes;
    bool  _preserveLegacyRecordMetadataBehavior;
    NSObject<NSCloudKitMirroringDelegateProgressProvider> * _progressProvider;
    CKScheduler * _scheduler;
    bool  _skipCloudKitSetup;
    PFCloudKitStoreMonitorProvider * _storeMonitorProvider;
    bool  _useDaemon;
    bool  _useDeviceToDeviceEncryption;
    bool  _useTestDaemon;
}

@property (nonatomic, retain) NSString *apsConnectionMachServiceName;
@property (nonatomic) bool automaticallyDownloadFileBackedFutures;
@property (nonatomic) bool automaticallyScheduleImportAndExportOperations;
@property (nonatomic, retain) NSNumber *ckAssetThresholdBytes;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic, retain) PFCloudKitContainerProvider *containerProvider;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) CKOperationConfiguration *defaultOperationConfiguration;
@property (nonatomic) bool initializeSchema;
@property (nonatomic, retain) PFCloudKitMetadataPurger *metadataPurger;
@property (nonatomic, retain) PFCloudKitMetricsClient *metricsClient;
@property (nonatomic, retain) CKNotificationListener *notificationListener;
@property (nonatomic, retain) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) bool preserveLegacyRecordMetadataBehavior;
@property (nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (nonatomic, retain) CKScheduler *scheduler;
@property (nonatomic) bool skipCloudKitSetup;
@property (nonatomic, retain) PFCloudKitStoreMonitorProvider *storeMonitorProvider;
@property (nonatomic) bool useDaemon;
@property (nonatomic) bool useDeviceToDeviceEncryption;
@property (nonatomic) bool useEncryptedStorage;
@property (nonatomic) bool useTestDaemon;

- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (bool)automaticallyDownloadFileBackedFutures;
- (bool)automaticallyScheduleImportAndExportOperations;
- (id)ckAssetThresholdBytes;
- (id)containerIdentifier;
- (id)containerOptions;
- (id)containerProvider;
- (id)copy;
- (long long)databaseScope;
- (void)dealloc;
- (id)defaultOperationConfiguration;
- (id)description;
- (id)init;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (bool)initializeSchema;
- (id)metadataPurger;
- (id)metricsClient;
- (id)notificationListener;
- (id)operationMemoryThresholdBytes;
- (bool)preserveLegacyRecordMetadataBehavior;
- (id)progressProvider;
- (id)scheduler;
- (void)setApsConnectionMachServiceName:(id)arg1;
- (void)setAutomaticallyDownloadFileBackedFutures:(bool)arg1;
- (void)setAutomaticallyScheduleImportAndExportOperations:(bool)arg1;
- (void)setCkAssetThresholdBytes:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerOptions:(id)arg1;
- (void)setContainerProvider:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setDefaultOperationConfiguration:(id)arg1;
- (void)setInitializeSchema:(bool)arg1;
- (void)setMetadataPurger:(id)arg1;
- (void)setMetricsClient:(id)arg1;
- (void)setNotificationListener:(id)arg1;
- (void)setOperationMemoryThresholdBytes:(id)arg1;
- (void)setPreserveLegacyRecordMetadataBehavior:(bool)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSkipCloudKitSetup:(bool)arg1;
- (void)setStoreMonitorProvider:(id)arg1;
- (void)setUseDaemon:(bool)arg1;
- (void)setUseDeviceToDeviceEncryption:(bool)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (void)setUseTestDaemon:(bool)arg1;
- (bool)skipCloudKitSetup;
- (id)storeMonitorProvider;
- (bool)useDaemon;
- (bool)useDeviceToDeviceEncryption;
- (bool)useEncryptedStorage;
- (bool)useTestDaemon;

@end
