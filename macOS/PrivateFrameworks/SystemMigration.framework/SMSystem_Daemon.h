//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem.h>

@class NSArray, NSDictionary, NSImage, NSObject<SMSystem_FileManagerProtocol>, NSString, NSURL, SMCollectIncompatibleApps, SMDBAccess, SMODDBAccess, SMPathsUserHomeSizer;

@interface SMSystem_Daemon : SMSystem
{
    BOOL selected;
    BOOL _ineligible;
    BOOL _systemPrepared;
    NSString *systemName;
    NSArray *users;
    NSArray *groups;
    NSString *systemVersion;
    NSString *modelID;
    NSString *productVersion;
    unsigned long long state;
    NSString *daDiskID;
    NSImage *volumeIcon;
    NSURL *remoteDiskID;
    SMCollectIncompatibleApps *incompatibleAppsListedPaths;
    NSString *_ineligibleReasonKey;
    NSString *_volumeName;
    id <SMNRemoteProxy> _remoteProxy;
    NSObject<SMSystem_FileManagerProtocol> *_fileSystem;
    double _recordedTransferRate;
    SMPathsUserHomeSizer *_userHomeSizer;
    SMDBAccess *_dsdb;
    SMODDBAccess *_oddb;
}

+ (BOOL)isSystemClassResumable:(Class)arg1;
+ (Class)systemClassForLongTermIdentifier:(id)arg1;
+ (id)keyPathsForValuesAffectingModelIcon;
+ (id)keyPathsForValuesAffectingDisplayIcon;
+ (Class)daemonClassFromSystemClass:(Class)arg1;
+ (id)daemonInterestedKeys;
+ (unsigned long long)requiredScannerState;
+ (id)proxyFromDict:(id)arg1;
+ (id)timeMachineSystemWithPath:(id)arg1 volumeName:(id)arg2 machineName:(id)arg3 isLiteBackup:(BOOL)arg4 backedUpOnVolume:(id)arg5;
+ (id)archivedSystemWithPath:(id)arg1 onVolume:(id)arg2;
+ (id)currentSystem;
+ (id)systemWithPath:(id)arg1;
@property(retain) SMODDBAccess *oddb; // @synthesize oddb=_oddb;
@property(retain) SMDBAccess *dsdb; // @synthesize dsdb=_dsdb;
@property BOOL systemPrepared; // @synthesize systemPrepared=_systemPrepared;
@property(retain) SMPathsUserHomeSizer *userHomeSizer; // @synthesize userHomeSizer=_userHomeSizer;
@property double recordedTransferRate; // @synthesize recordedTransferRate=_recordedTransferRate;
@property(retain) NSObject<SMSystem_FileManagerProtocol> *fileSystem; // @synthesize fileSystem=_fileSystem;
@property(readonly) id <SMNRemoteProxy> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(retain) NSString *volumeName; // @synthesize volumeName=_volumeName;
@property(retain) NSString *ineligibleReasonKey; // @synthesize ineligibleReasonKey=_ineligibleReasonKey;
@property BOOL ineligible; // @synthesize ineligible=_ineligible;
@property(retain) SMCollectIncompatibleApps *incompatibleAppsListedPaths; // @synthesize incompatibleAppsListedPaths;
@property(retain) NSURL *remoteDiskID; // @synthesize remoteDiskID;
@property(copy) NSString *daDiskID; // @synthesize daDiskID;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
@property BOOL selected; // @synthesize selected;
@property(retain) NSString *modelID; // @synthesize modelID;
@property(retain) NSArray *groups; // @synthesize groups;
@property(retain) NSArray *users; // @synthesize users;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)accessibilityDescription;
- (BOOL)matches:(id)arg1;
- (id)incompatibleAppData;
- (BOOL)isPathInIncompatibleApplicationsList:(id)arg1;
- (id)incompatiblePathsUnderPath:(id)arg1;
- (void)prepareIncompatibleApplicationsList;
- (id)appleCloudNamesInUserRecordNames;
- (id)filteredUsers:(id)arg1;
- (BOOL)isUser:(id)arg1 inGroup:(id)arg2;
- (BOOL)isUserAnAdmin:(id)arg1;
- (unsigned int)nextAvailableGroupID;
- (id)getGroupWithGeneratedUID:(id)arg1;
- (id)getGroupWithID:(unsigned int)arg1;
- (id)getGroup:(id)arg1;
- (id)allGroups;
- (id)getUserWithUUID:(id)arg1;
- (id)getUserWithID:(unsigned int)arg1;
- (id)getUser:(id)arg1;
- (id)getUserByLongName:(id)arg1;
- (id)fdeSignedUsers;
- (id)hiddenSystemUsers;
- (id)allUsers;
- (id)defaultDatabase;
- (void)cancelSizing;
- (void)sizeAllUsersWithPather:(id)arg1 includingVaultUsers:(BOOL)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)reclaimPurgableSpace;
- (unsigned long long)purgableSpace;
- (unsigned long long)usedSize;
- (unsigned long long)totalSize;
- (unsigned long long)freeSpace;
- (void)resumeDataTransfers;
- (void)cancelDataTransfers;
- (void)prepareSystem;
- (BOOL)isMountableByUser;
- (BOOL)isMounted;
- (BOOL)isMounting;
- (void)mountWithCredentials:(id)arg1;
- (id)macAddress;
- (id)networkInterfaces;
- (id)networkPreferences;
- (void)evaluateServerType;
- (id)serverVersionOnSystem;
- (BOOL)isResumable;
- (BOOL)matchesLongTermIdentifier:(id)arg1;
@property(readonly) NSDictionary *longTermIdentifier;
@property(readonly) NSString *systemVersion; // @synthesize systemVersion;
@property(readonly) NSString *productVersion; // @synthesize productVersion;
@property(readonly) NSImage *warningBadge;
@property(readonly) NSImage *modelIcon;
@property(readonly) NSImage *volumeIcon; // @synthesize volumeIcon;
@property(readonly) NSImage *displayIcon;
- (id)filesystemEnumeratorSkippingPaths:(id)arg1;
- (id)filesystemEnumeratorAtRelativePath:(id)arg1 skippingPaths:(id)arg2 sizeRequired:(BOOL)arg3;
- (BOOL)pathExists:(id)arg1;
- (id)copier;
@property(readonly) double estimatedTransferRate;
- (unsigned long long)migratableItemsSupported;
- (BOOL)slashUsersIsASymlink;
- (id)autoLoginShortName;
@property(readonly) BOOL enabled;
@property(readonly) BOOL selectableSystem;
- (BOOL)availableAction;
@property(readonly) NSArray *childSystems;
- (BOOL)isVeryOldSystemVersion;
- (BOOL)isTargetDiskModeSystem;
- (BOOL)isOverAFP;
- (BOOL)isInternal;
- (BOOL)isUpToDate;
- (BOOL)isRemoteSystem;
- (BOOL)isNetworkSystem;
- (BOOL)isRunningSystem;
- (id)extendedDescription;
@property(readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property(readonly, getter=isFDEEnabled) BOOL fdeEnabled;
@property(readonly) NSString *systemName; // @synthesize systemName;
- (id)UUID;
- (void)updateFromDictRepresentation:(id)arg1 duringInit:(BOOL)arg2;
- (void)updateFromDictRepresentation:(id)arg1;
- (void)invalidateCachedData;
- (id)createFileManager;
- (id)initWithDictRepresentation:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

