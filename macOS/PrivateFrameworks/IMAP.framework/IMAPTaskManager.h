//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskManager.h"

@class IMAPAccountSyncTask, NSConditionLock, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IMAPTaskManager : MCTaskManager
{
    NSMutableDictionary *_mailboxSyncTasks;
    NSMutableDictionary *_bodyFetchTasks;
    NSMutableDictionary *_localActionSyncTasks;
    NSMutableArray *_allLocalActions;
    NSMutableSet *_inSyncMailboxes;
    NSMutableSet *_mailboxesCheckedForIncomplete;
    NSMutableSet *_mailboxesUpdatingUIDValidity;
    NSCountedSet *_dataSourcesBeingAddedTo;
    NSCountedSet *_dataSourcesBeingDeletedFrom;
    NSMutableSet *_dataSourcesToSyncAfterDeletes;
    NSMutableSet *_dataSourcesToFullySyncAfterDeletes;
    NSMutableDictionary *_newExistsForDataSource;
    NSMutableDictionary *_messageNumbersNeedingFlagsForDataSource;
    NSMutableDictionary *_flagsByUnpersistedUIDForDataSource;
    unsigned long long _throughputHistoryIndex;
    unsigned long long _throughputHistory[8];
    unsigned long long _weightHistory[8];
    NSConditionLock *_creatingNewConnectionLock;
    BOOL _preserveNetworkResources;
    BOOL _networkIsLimited;
    unsigned int _firstNewInboxUID;
    id <IMAPAccount> _account;
    IMAPAccountSyncTask *_accountSyncTask;
    NSString *_defaultIdleMailboxName;
    NSString *_secondaryIdleMailboxName;
    unsigned long long _fetchChunkSize;
}

+ (void)_setReadSizeParameters;
+ (id)sharedKeySetForMessageInfo;
+ (double)IMAPIdleRefreshDelay;
+ (void)initialize;
+ (id)syncActivityLog;
@property(nonatomic) BOOL networkIsLimited; // @synthesize networkIsLimited=_networkIsLimited;
@property(nonatomic) unsigned int firstNewInboxUID; // @synthesize firstNewInboxUID=_firstNewInboxUID;
@property unsigned long long fetchChunkSize; // @synthesize fetchChunkSize=_fetchChunkSize;
@property(copy) NSString *defaultIdleMailboxName; // @synthesize defaultIdleMailboxName=_defaultIdleMailboxName;
@property(nonatomic) __weak IMAPAccountSyncTask *accountSyncTask; // @synthesize accountSyncTask=_accountSyncTask;
@property __weak id <IMAPAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)localActionTaskWasCanceled;
- (void)actionWasProcessed:(id)arg1;
- (void)checkForNewLocalActions;
- (void)messageSkeletonsWithUIDsWerePersisted:(id)arg1 toDataSource:(id)arg2;
- (BOOL)messageSkeletonWithUIDIsBeingPersisted:(unsigned int)arg1 toDataSource:(id)arg2;
- (BOOL)messagesAreBeingDeletedFromDataSource:(id)arg1;
- (BOOL)messagesAreBeingAddedToDataSource:(id)arg1;
- (void)updatedUIDValidity:(unsigned int)arg1 forDataSource:(id)arg2;
- (void)updatingUIDValidityForDataSource:(id)arg1;
- (void)receivedUIDNext:(unsigned int)arg1 forDataSource:(id)arg2;
- (void)waitUntilAllTasksAreFinished;
- (void)didAddMessagesWithUnknownUID:(id)arg1 toDataSource:(id)arg2;
- (void)didAddMessagesWithUIDs:(id)arg1 toDataSource:(id)arg2;
- (void)willAddMessagesToDataSource:(id)arg1;
- (void)uidsVanished:(id)arg1 withRanges:(id)arg2 mailboxName:(id)arg3;
- (void)messageExpungedForMessageNumber:(unsigned long long)arg1 uid:(unsigned int)arg2 mailboxName:(id)arg3;
- (void)existsChanged:(unsigned long long)arg1 forMailboxName:(id)arg2 duringExpunge:(BOOL)arg3;
- (void)_fetchFlagsForMessageNumber:(unsigned long long)arg1 dataSource:(id)arg2 mailboxName:(id)arg3;
- (void)flagsChangedForUnknownUIDWithMessageNumber:(unsigned long long)arg1 mailboxName:(id)arg2;
- (void)flagsChanged:(long long)arg1 forMessageWithMessageNumber:(unsigned long long)arg2 uid:(unsigned int)arg3 mailboxName:(id)arg4;
- (void)_syncMailboxWithDataSource:(id)arg1 withIMAPMailbox:(id)arg2 fromStatus:(BOOL)arg3 forceFullSync:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)syncMailboxWithDataSource:(id)arg1 withIMAPMailbox:(id)arg2 fromStatus:(BOOL)arg3 forceFullSync:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)syncMailboxWithName:(id)arg1 withIMAPMailbox:(id)arg2 fromStatus:(BOOL)arg3 forceFullSync:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)_syncAccountForceFullSync:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)syncAccountForceFullSync:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)removeNetworkHandler:(id)arg1;
- (void)addNetworkHandler:(id)arg1;
@property(nonatomic) BOOL preserveNetworkResources;
- (void)setChunkSizeFromElapsedTime:(double)arg1 bytesRead:(unsigned long long)arg2;
- (unsigned long long)_updatedThrougputAverageWithNewValue:(unsigned long long)arg1 weight:(unsigned long long)arg2;
- (BOOL)subscribedListingForMailbox:(id)arg1 options:(long long)arg2 listingInfo:(id)arg3;
- (BOOL)listingForMailbox:(id)arg1 options:(long long)arg2 listingInfo:(id)arg3;
- (void)expungeMailboxIfSelected:(id)arg1;
- (BOOL)_currentThreadIsForConnectionSelectedOnMailbox:(id)arg1;
- (void)unselectMailboxConnectionsWithName:(id)arg1 expunge:(BOOL)arg2;
- (id)_bodyFetchTaskWithDataSource:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_stopSyncingBodiesForUIDs:(id)arg1 dataSource:(id)arg2;
- (void)stopSyncingBodiesForUIDs:(id)arg1 dataSource:(id)arg2;
- (void)_syncBodiesForMessages:(id)arg1 uidNext:(unsigned int)arg2 userRequested:(BOOL)arg3 dataSource:(id)arg4;
- (void)syncUserRequestedBodiesForMessagesByDataSource:(id)arg1;
- (void)syncBodiesForMessages:(id)arg1 uidNext:(unsigned int)arg2 dataSource:(id)arg3;
- (void)deleteMessagesWithUIDs:(id)arg1 dataSource:(id)arg2;
- (void)_cancelMailboxSyncTask:(id)arg1;
- (void)cancelMailboxSyncTask:(id)arg1;
- (void)resetMailboxSyncWithDataSource:(id)arg1;
- (void)resetMailboxSyncWithName:(id)arg1;
- (BOOL)_mailboxIsSelected:(id)arg1;
- (BOOL)mailboxIsSelected:(id)arg1;
- (void)doPersistenceBlockForDataSource:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)_doCommandBlockForMailbox:(id)arg1 block:(CDUnknownBlockType)arg2 async:(BOOL)arg3 ifSelected:(BOOL)arg4 priority:(long long)arg5 description:(id)arg6;
- (void)doCommandBlockForMailbox:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 description:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)handlerBecameDisconnected:(id)arg1;
- (void)closeAllConnectionsAndCompact:(BOOL)arg1;
- (void)removeInvalidConnections;
- (void)resetMaximumConnectionCount;
- (BOOL)supportsCapability:(unsigned long long)arg1;
- (void)_createNewConnection;
- (void)_createNewConnectionSynchronously:(BOOL)arg1 isFirstConnection:(BOOL)arg2;
- (BOOL)_shouldCreateNewConnection;
- (BOOL)connectToServer;
- (void)activityDidFinish:(id)arg1;
- (void)assignIdleTasks;
- (id)_createNetworkHandler;
- (void)assignActiveTasks;
- (id)newBodyFetchContext;
- (id)newPersistenceHandler;
- (id)newNetworkHandler;
@property(readonly) BOOL isConnected;
@property(copy) NSString *secondaryIdleMailboxName; // @synthesize secondaryIdleMailboxName=_secondaryIdleMailboxName;
- (id)description;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

