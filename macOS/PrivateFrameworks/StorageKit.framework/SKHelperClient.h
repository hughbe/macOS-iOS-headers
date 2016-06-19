//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKDaemonProtocol.h"
#import "SKHelperClientProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface SKHelperClient : NSObject <SKHelperClientProtocol, SKDaemonProtocol>
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_progressBlockDictionary;
    CDUnknownBlockType _progressBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sharedClient;
- (void).cxx_destruct;
- (void)_setProgressHandler:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)managerResumed;
- (void)managerStalled;
- (void)disksDisappeared:(id)arg1;
- (void)disksChanged:(id)arg1;
- (void)disksAppeared:(id)arg1;
- (void)initialPopulateComplete;
- (void)updateUUID:(id)arg1 progress:(float)arg2 message:(id)arg3;
- (void)deleteRAID:(id)arg1 progress:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)repairRAID:(id)arg1 spareDisk:(id)arg2 progress:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)volumesForAPFSPS:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)physicalStoresForAPFSVolume:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fixIncorrectlySizedPartitionMapOnDisk:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addDisks:(id)arg1 toRAID:(id)arg2 memberType:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addChildVolumeToEmptyLVG:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completetionBlock:(CDUnknownBlockType)arg3;
- (void)filesystemsWithCallbackBlock:(CDUnknownBlockType)arg1;
- (void)extendedInfoForDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)blockRestoreDisk:(id)arg1 fromDiskImageFileURL:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)blockRestoreDisk:(id)arg1 fromDisk:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)isBusy:(CDUnknownBlockType)arg1;
- (void)childDisksForWholeDisk:(id)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)wholeDiskForDisk:(id)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)diskForPath:(id)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)createRAIDSetType:(id)arg1 name:(id)arg2 disks:(id)arg3 format:(id)arg4 options:(id)arg5 progressBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)recacheDisk:(id)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)enclosingDiskAtLevel:(unsigned long long)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)enclosingVolumeCount:(CDUnknownBlockType)arg1;
- (void)getFDEUsersFromDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)changePasswordForDisk:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3 passwordHint:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)convertDiskToFDE:(id)arg1 withRecipe:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)establishReserveKEKForDisk:(id)arg1 diskUnlockPassword:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)decryptVolume:(id)arg1 withPassword:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)unlockEncryptedDisk:(id)arg1 withiCloudUser:(id)arg2 iCloudHandle:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)unlockEncryptedDisk:(id)arg1 diskUnlockPassword:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)validateEncryptedDiskPassword:(id)arg1 diskUnlockPassword:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)iCloudRecoverManageFDEUsersForDisk:(id)arg1 icloudUser:(id)arg2 iCloudHandle:(id)arg3 usersToRemoveArray:(id)arg4 resettingUserPasswords:(id)arg5 fdeRecipe:(id)arg6 handlingProgress:(CDUnknownBlockType)arg7 withCompletionBlock:(CDUnknownBlockType)arg8;
- (void)manageFDEUsersForDisk:(id)arg1 diskUnlockPassword:(id)arg2 removingUsers:(id)arg3 resettingUserPasswords:(id)arg4 fdeRecipe:(id)arg5 handlingProgress:(CDUnknownBlockType)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (void)convertDisk:(id)arg1 toCoreStorage:(BOOL)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)getRecoverySystemInfoForDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)enableJournalingOnDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)enablePermissionsOnDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)ensureRecoveryForDisk:(id)arg1 withRecoverySystemPath:(id)arg2 chunkkList:(id)arg3 diagnostics:(id)arg4 ignoreBlacklist:(BOOL)arg5 handlingProgress:(CDUnknownBlockType)arg6 callbackBlock:(CDUnknownBlockType)arg7;
- (void)blessDisk:(id)arg1 options:(id)arg2 withCallbackBlock:(CDUnknownBlockType)arg3;
- (void)compositeDisks:(id)arg1 volumeName:(id)arg2 handlingProgress:(CDUnknownBlockType)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (void)resize:(id)arg1 toSize:(unsigned long long)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removeDisk:(id)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)splitDisk:(id)arg1 toSize:(unsigned long long)arg2 newDiskRole:(id)arg3 name:(id)arg4 caseSensitive:(BOOL)arg5 password:(id)arg6 handlingProgress:(CDUnknownBlockType)arg7 withCompletionBlock:(CDUnknownBlockType)arg8;
- (void)splitDisk:(id)arg1 toSize:(unsigned long long)arg2 newDiskType:(id)arg3 name:(id)arg4 caseSensitive:(BOOL)arg5 password:(id)arg6 handlingProgress:(CDUnknownBlockType)arg7 withCompletionBlock:(CDUnknownBlockType)arg8;
- (void)ejectDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)mountDisk:(id)arg1 options:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)unmountDisk:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)renameDisk:(id)arg1 to:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)secureEraseDisk:(id)arg1 withEraseLevel:(int)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)eraseDisk:(id)arg1 toFilesystem:(id)arg2 partitionMap:(id)arg3 name:(id)arg4 password:(id)arg5 handlingProgress:(CDUnknownBlockType)arg6 withCompletionBlock:(CDUnknownBlockType)arg7;
- (void)repairUserHomeDirectoryForDisk:(id)arg1 forUser:(long long)arg2 handlingProgress:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)repairDisk:(id)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)verifyDisk:(id)arg1 handlingProgress:(CDUnknownBlockType)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setDiskIconWithImageData:(id)arg1 forDisk:(id)arg2 WithReply:(CDUnknownBlockType)arg3;
- (void)setDaemonLanguage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)diskNotificationQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

