//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCoalescingNodeObserverProtocol.h"
#import "TReadWriteLockingProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TBrowserViewDataSource : NSObject <TReadWriteLockingProtocol, TCoalescingNodeObserverProtocol>
{
    struct TReadWriteLock _lock;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _workerSerialQueue;
    _Bool _isTornDown;
    struct TNSRef<FI_TBVDSBulkConfigChangedState *, void> _bulkConfigChangedState;
    unordered_map_b08e525b _nodeToChildrenDataMap;
    _Bool _checkChildrenForTags;
    struct TString _sortPropertyStr;
    _Bool _isSortInIncreasingOrder;
    _Bool _isSortFoldersFirst;
    struct unordered_map<TFENode, TGroupModeData, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TGroupModeData>>> _containerNodeToGroupDataMap;
    struct TString _groupByPropertyStr;
    struct unordered_map<TFENode, TNSRef<FI_TBVDSBusyStateIncrementer *, void>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<FI_TBVDSBusyStateIncrementer *, void>>>> _firstPopBusyStateIncrementers;
    unsigned long long _busyStateRefCount;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    unordered_set_b5868ef5 _alwaysVisibleNodes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)unlockForWrite;
- (void)lockForWrite;
- (void)unlockForRead;
- (void)lockForRead;
- (void)_modifyChildrenOfContainerAsync:(const struct TFENode *)arg1 withUnlockedFunctor:(const function_d0dc754f *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openChildListUpdated:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncCompleted:(const struct TFENode *)arg2;
- (void)handleOpenSyncCompletedAndChildListUpdated:(const struct TFENode *)arg1 containerNodeSet:(const unordered_set_b5868ef5 *)arg2 nodeToChildrenDataMapToModify:(unordered_map_b08e525b *)arg3 groupModeDataToModify:(struct TGroupModeData *)arg4 dataSourceChangedListToModify:(vector_7b15bc4d *)arg5 isInGroupMode:(_Bool)arg6 checkChildrenForTags:(_Bool)arg7;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 groupDefinitionChanged:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesDeleted:(const struct TFENodeVector *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 spotlightAttrSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const struct TFENodeUpdateList *)arg2 inObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesAdded:(const struct TFENodeVector *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)dump;
- (void)dumpWithLock;
- (void)flushPendingEvents:(function_f9feaa7d)arg1;
- (struct TFENodeVector)typeSelectCandidates;
- (struct TGroupManager *)_groupManagerForNode:(const struct TFENode *)arg1 calculateFolderSizes:(_Bool)arg2;
- (_Bool)isGroupNode:(const struct TFENode *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (_Bool)_isGroupNode:(const struct TFENode *)arg1;
- (_Bool)_isContainerNode:(const struct TFENode *)arg1;
- (long long)indexForGroupedChild:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2 countGroups:(_Bool)arg3;
- (const struct TFENode *)groupedChildOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2 countGroups:(_Bool)arg3;
- (unsigned long long)numberOfGroupedChildrenForContainerNode:(const struct TFENode *)arg1 countGroups:(_Bool)arg2;
- (void)getGroupedChildren:(struct TFENodeVector *)arg1 forContainerNode:(const struct TFENode *)arg2 countGroups:(_Bool)arg3;
- (const struct TFENode *)groupNodeOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexForGroupNode:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (unsigned long long)numberOfGroupNodesForContainerNode:(const struct TFENode *)arg1;
- (const struct TFENodeVector *)sortedGroupNodesForContainerNode:(const struct TFENode *)arg1;
- (void)_rebuildOnWorkerQueue:(id)arg1;
@property struct TString groupByPropertyStr; // @dynamic groupByPropertyStr;
- (_Bool)isInGroupMode;
- (shared_ptr_0ec8498d)_newSortComparatorForContainerNode:(const struct TFENode *)arg1 calculateFolderSizes:(_Bool)arg2;
- (shared_ptr_0ec8498d)_newGroupComparatorForContainerNode:(const struct TFENode *)arg1 withGroupManager:(struct TGroupManager *)arg2;
- (void)_resortOnWorkerQueue:(id)arg1 completionHandler:(const function_f9feaa7d *)arg2;
- (void)setSortPropertyStr:(struct TString)arg1 inIncreasingOrder:(_Bool)arg2 sortFoldersFirst:(_Bool)arg3 completionHandler:(const function_f9feaa7d *)arg4;
@property(readonly) struct TString sortPropertyStr; // @dynamic sortPropertyStr;
@property(readonly) _Bool isSortFoldersFirst; // @dynamic isSortFoldersFirst;
@property(readonly) _Bool isSortInIncreasingOrder; // @dynamic isSortInIncreasingOrder;
- (_Bool)isNode:(const struct TFENode *)arg1 childOfContainerNode:(const struct TFENode *)arg2;
- (long long)indexForChild:(const struct TFENode *)arg1 forContainerNode:(const struct TFENode *)arg2;
- (const struct TFENode *)childOfContainerNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSortedChildrenForContainerNode:(const struct TFENode *)arg1;
- (const struct TFENodeVector *)sortedChildrenForContainerNode:(const struct TFENode *)arg1;
- (_Bool)atLeastOneTaggedChildInContainerNode:(const struct TFENode *)arg1;
- (void)_recheckChildrenForTagsOnWorkerQueue:(id)arg1;
@property _Bool checkChildrenForTags; // @dynamic checkChildrenForTags;
- (void)_decrementBusyStateRefCount;
- (void)_incrementBusyStateRefCount;
@property(readonly) _Bool isBusy; // @dynamic isBusy;
- (_Bool)containerNodeIsPopulated:(const struct TFENode *)arg1;
- (void)_removeFirstBVDSBusyStateIncrementerForNodeWhileLocked:(const struct TFENode *)arg1;
- (void)_removeFirstBVDSBusyStateIncrementerForNode:(const struct TFENode *)arg1;
- (void)_addFirstBVDSBusyStateIncrementerForNode:(const struct TFENode *)arg1;
@property _Bool bulkConfigInProgress; // @dynamic bulkConfigInProgress;
- (void)addNodesToAlwaysVisibleSet:(const struct TFENodeVector *)arg1;
- (const unordered_set_b5868ef5 *)alwaysVisibleNodes;
- (void)adjustContainerNodeObserverOptions:(const vector_04525f4a *)arg1;
- (void)closeContainerNodes:(const vector_c133cd5b *)arg1;
- (void)openContainerNodes:(const vector_a7e7ffc1 *)arg1;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)initWithSortPropertyStr:(const struct TString *)arg1 sortInIncreasingOrder:(_Bool)arg2 sortFoldersFirst:(_Bool)arg3 groupByPropertyStr:(const struct TString *)arg4 checkChildrenForTags:(_Bool)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

