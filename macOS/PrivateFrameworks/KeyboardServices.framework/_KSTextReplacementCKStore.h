//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_KSTextReplacementStoreProtocol.h"
#import "_KSTextReplacementSyncProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, _KSCloudKitManager, _KSTextReplacementCoreDataStore;

@interface _KSTextReplacementCKStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementSyncProtocol>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSTextReplacementCoreDataStore *_coreDataStore;
    _KSCloudKitManager *_cloudKitManager;
}

+ (BOOL)isMigrationCompleted;
@property(retain, nonatomic) _KSCloudKitManager *cloudKitManager; // @synthesize cloudKitManager=_cloudKitManager;
@property(retain, nonatomic) _KSTextReplacementCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
- (void).cxx_destruct;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)queryDeletedEntries;
- (id)queryUpdatedLocalEntries;
- (void)pullRemoteDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSyncShouldPull:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)queryMigrationStatusOnCloudWithCallback:(CDUnknownBlockType)arg1;
- (void)pushMigrationStatusToCloud;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)pushAllLocalData;
- (void)pullAllData;
- (void)accountDidChange:(id)arg1;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (void)checkForCoreDataUniqueRecordNameCleanup;
- (void)dealloc;
- (id)initWithDirectoryPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

