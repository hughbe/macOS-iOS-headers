//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeltaSnapshotInfo, FSPath, NSCalendar, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSSet, NSString, VolumeInfo, XattrAppleDouble;

@interface DeltaHierarchy : NSObject
{
    NSString *_pathRoot;
    FSPath *_realPathPrefix;
    DeltaSnapshotInfo *_currentSnapshot;
    NSMutableArray *_snapshotsFound;
    NSMutableDictionary *_snapshotsByDate;
    VolumeInfo *_volumeInfo;
    NSSet *_hiddenParents;
    NSDictionary *_hiddenPaths;
    NSMutableDictionary *_moveSetForEpoch;
    NSRecursiveLock *_moveSetLock;
    XattrAppleDouble *_xattrsOnVolume;
    NSDictionary *_privateInfoDictionary;
    long long _estimateChangeNotificationBytesDelta;
    double _estimateChangeNotificationTimeDelta;
    id _delegate;
    NSCalendar *_cal;
    BOOL _previousFixUpwardMarkers;
    BOOL _previousMatchOwners;
    BOOL _sizeEstimateChangedNotificationIsPending;
    NSString *_previousDeltaParentPathString;
    long long _estimatedBytesChanged;
}

+ (id)directoryNameForDate:(id)arg1;
@property long long estimatedBytesChanged; // @synthesize estimatedBytesChanged=_estimatedBytesChanged;
@property BOOL sizeEstimateChangedNotificationIsPending; // @synthesize sizeEstimateChangedNotificationIsPending=_sizeEstimateChangedNotificationIsPending;
@property BOOL previousMatchOwners; // @synthesize previousMatchOwners=_previousMatchOwners;
@property BOOL previousFixUpwardMarkers; // @synthesize previousFixUpwardMarkers=_previousFixUpwardMarkers;
@property(retain) NSString *previousDeltaParentPathString; // @synthesize previousDeltaParentPathString=_previousDeltaParentPathString;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *privateInfoDictionary; // @synthesize privateInfoDictionary=_privateInfoDictionary;
@property(retain) XattrAppleDouble *xattrsOnVolume; // @synthesize xattrsOnVolume=_xattrsOnVolume;
@property(retain, nonatomic) NSRecursiveLock *moveSetLock; // @synthesize moveSetLock=_moveSetLock;
@property(retain, nonatomic) NSMutableDictionary *moveSetForEpoch; // @synthesize moveSetForEpoch=_moveSetForEpoch;
@property(retain, nonatomic) NSDictionary *hiddenPaths; // @synthesize hiddenPaths=_hiddenPaths;
@property(retain, nonatomic) NSSet *hiddenParents; // @synthesize hiddenParents=_hiddenParents;
@property(retain, nonatomic) VolumeInfo *volumeInfo; // @synthesize volumeInfo=_volumeInfo;
@property(retain, nonatomic) NSMutableDictionary *snapshotsByDate; // @synthesize snapshotsByDate=_snapshotsByDate;
@property(retain, nonatomic) NSMutableArray *snapshotsFound; // @synthesize snapshotsFound=_snapshotsFound;
@property(retain, nonatomic) DeltaSnapshotInfo *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
- (void)dealloc;
- (void)abridgeUsingOptions:(int)arg1 minSizeForChunking:(unsigned long long)arg2;
- (void)setEstimatedSizeNotificationsCheckEvery:(double)arg1 deltaBytes:(long long)arg2;
- (long long)estimatedTotalSize;
- (id)dateAttributesForSnapshot:(id)arg1 fullPath:(id)arg2;
- (id)retrieveFSEventStoreUUID;
- (BOOL)retrieveFSEventStreamID:(unsigned long long *)arg1;
- (BOOL)storeFSEventStreamID:(unsigned long long)arg1 storeUUID:(id)arg2;
- (id)findPartiallyMergedSnapshots;
- (BOOL)removeSnapshotAndMerge:(id)arg1;
- (void)mergeAdjacentSnapshots:(id)arg1 into:(id)arg2;
- (void)mergeItemFrom:(id)arg1 fromSnapshot:(id)arg2 to:(id)arg3 toSnapshot:(id)arg4 isDirectory:(BOOL)arg5;
- (BOOL)replicateUpwardSubpath:(id)arg1 fromSnapshot:(id)arg2 toSnapshot:(id)arg3;
- (BOOL)replicateDirectoryFrom:(id)arg1 to:(id)arg2;
- (void)replicateMarker:(id)arg1 at:(id)arg2;
- (BOOL)unconditionallyRemoveSnapshot:(id)arg1;
- (BOOL)markSnapshotForDeletion:(id)arg1;
- (id)snapshotForFullPath:(id)arg1 skipping:(unsigned long long)arg2;
- (id)fsPathWithoutSnapshot:(id)arg1;
- (id)attributesOfItemAtPath:(id)arg1 forSnapshot:(id)arg2 forceMeta:(BOOL)arg3;
- (id)attributesOfItemAtPath:(id)arg1 forDate:(id)arg2 forceMeta:(BOOL)arg3;
- (id)synthesizeXattrsForVolumeDirectoryAtDate:(id)arg1;
- (id)attributesOfMetadataAtPath:(id)arg1 forDate:(id)arg2 force:(BOOL)arg3 pathChanged:(BOOL)arg4;
- (id)overEstimatedSizeOfMetaDataAtPath:(id)arg1;
- (id)composeWideFileNumberFromNarrow:(id)arg1;
- (id)pathOfItemAtSubPath:(id)arg1 forSnapshot:(id)arg2 removingVolume:(BOOL)arg3 isInSnapshot:(char *)arg4;
- (id)pathOfItemAtSubPath:(id)arg1 forSnapshot:(id)arg2 removingVolume:(BOOL)arg3;
- (id)pathOfItemAtSubPath:(id)arg1 forDate:(id)arg2 removingVolume:(BOOL)arg3 isInSnapshot:(char *)arg4;
- (id)pathOfItemAtSubPath:(id)arg1 forDate:(id)arg2 removingVolume:(BOOL)arg3;
- (id)priorMovePathFromSubPath:(id)arg1 forDate:(id)arg2 removingVolume:(BOOL)arg3;
- (id)fsPathOfItemAtSubpath:(id)arg1 forDate:(id)arg2 removingVolume:(BOOL)arg3 pathChanged:(char *)arg4;
- (id)_fullPathOfContentForSubPath:(id)arg1 lookingForwardFromSnapshot:(id)arg2;
- (id)fsResolveMoveSubpathOfItemAtSubpath:(id)arg1 forDate:(id)arg2;
- (id)fsResolveMovePathOfItemAtSubpath:(id)arg1 forDate:(id)arg2 resolveLastComponent:(BOOL)arg3 foundInSnapshot:(id *)arg4;
- (id)fsPathOfMove:(id)arg1 subPath:(id)arg2 inSnapshot:(id)arg3 foundInSnapshot:(id *)arg4;
- (id)contentsOfSnapshotDirectory:(id)arg1;
- (id)contentsOfDirectoryAtPath:(id)arg1 forSnapshot:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 forDate:(id)arg2;
- (id)elideHiddenMountsAtFSPath:(id)arg1 WithSet:(id)arg2;
- (id)directorySetsAtFSPath:(id)arg1;
- (BOOL)newSnapshot;
- (BOOL)newSnapshotAt:(id)arg1;
- (id)fetchTimeForSnapshotMarking;
- (void)recursivelyScanFixingMoveChangesStartingAt:(id)arg1 forSnapshot:(id)arg2 isCurrent:(BOOL)arg3;
- (void)fixMoveChangesForItemAtSubPath:(id)arg1 inSnapshot:(id)arg2 isCurrent:(BOOL)arg3 withInodeNumber:(unsigned long long)arg4;
- (void)rewireMoveForwardMarker:(id)arg1 inodeRealPath:(id)arg2 inSnapshot:(id)arg3 isCurrent:(BOOL)arg4;
- (void)relocateCreationMarkerToMatchInodePath:(id)arg1 inSnapshot:(id)arg2;
- (void)unmarkOrRemoveExistingBackpointerAt:(id)arg1;
- (void)moveDirectoryTo:(id)arg1;
- (void)moveFileTo:(id)arg1;
- (void)moveObjectTo:(id)arg1 isDir:(BOOL)arg2;
- (BOOL)moveDirectoryFrom:(id)arg1 fd:(int)arg2;
- (BOOL)moveFileFrom:(id)arg1 fd:(int)arg2;
- (BOOL)addNewDirectory:(id)arg1;
- (BOOL)addNewFile:(id)arg1;
- (BOOL)addNewObject:(id)arg1 inode:(unsigned long long)arg2 isDir:(BOOL)arg3;
- (BOOL)addDeletedDirectory:(id)arg1 fileDescriptor:(int)arg2;
- (BOOL)addDeletedFile:(id)arg1 fileDescriptor:(int)arg2 avoidCopy:(BOOL)arg3;
- (BOOL)addDeletedFile:(id)arg1 isDir:(BOOL)arg2 fileDescriptor:(int)arg3 avoidCopy:(BOOL)arg4;
- (BOOL)_applyMoveBackpointerMarkerAtPath:(id)arg1 withForwarderPath:(id)arg2;
- (BOOL)_applyMoveForwardMarkerAtPath:(id)arg1 withForwardedPath:(id)arg2;
- (void)_createLinksToMarkerAtPath:(id)arg1 mirroringLinksForInode:(unsigned long long)arg2;
- (id)_moveOriginSubPathForInodeNumber:(unsigned long long)arg1;
- (BOOL)addChangedDirectory:(id)arg1;
- (BOOL)addChangedFile:(id)arg1 fileDescriptor:(int)arg2 avoidCopy:(BOOL)arg3;
- (BOOL)haveCurrentSnapshot;
- (BOOL)faultUpwardPathForObject:(id)arg1 forSnapshot:(id)arg2 matchOwnership:(BOOL)arg3 fixUpwardMarkers:(BOOL)arg4;
- (void)fixMoveMarkersUpwardAlongPath:(id)arg1 atSnapshot:(id)arg2;
- (BOOL)moveContentsUnderForwardMarker:(id)arg1 to:(id)arg2;
- (id)initWithRootURL:(id)arg1 numberOfComponentsToVolumeRoot:(unsigned long long)arg2;
- (id)initWithRootURL:(id)arg1 numberOfComponentsToVolumeRoot:(unsigned long long)arg2 create:(BOOL)arg3;
- (id)initWithRoot:(id)arg1 numberOfComponentsToVolumeRoot:(unsigned long long)arg2;
- (id)initWithRoot:(id)arg1 numberOfComponentsToVolumeRoot:(unsigned long long)arg2 create:(BOOL)arg3;
- (BOOL)loadPrivateVolumeInfo:(BOOL)arg1;
- (void)storePrivateVolumeInfo;
- (id)setUpDefaultPrivateVolumeInfo;
- (BOOL)setACLOnRoot;
- (BOOL)createRootDirectoryAt:(id)arg1;
@property(nonatomic) NSString *realPathPrefix; // @dynamic realPathPrefix;
@property(nonatomic) NSString *pathRoot; // @dynamic pathRoot;
- (id)attributesForNewSnapshotDirectory;
- (BOOL)containsSnapshot:(id)arg1;
- (BOOL)ascertainCurrentSnapshots;
- (id)findDateOfSnapshotNamed:(id)arg1;
- (void)updateSnapshotIndices;
- (id)volumeComponentOfPath:(id)arg1;
- (BOOL)isVolumePath:(id)arg1;
- (BOOL)isSnapshotFullPath:(id)arg1;
- (id)subPathFromSnapshotFullPath:(id)arg1;
- (id)realPathFromSubPathContainingVolume:(id)arg1;
- (id)equivalentPathForContentsToSubPath:(id)arg1 givenSnapshot:(id)arg2;
- (id)equivalentPathToSubPath:(id)arg1 givenSnapshot:(id)arg2;
- (id)equivalentPathToFullPath:(id)arg1 givenSnapshot:(id)arg2;
- (id)pathOfContentsForSnapshot:(id)arg1;
- (id)realPathFromSubPath:(id)arg1;
- (id)subPathFromRealFullPath:(id)arg1;
- (id)pathRemovingVolumeComponent:(id)arg1;
- (id)snapshotPathFromName:(id)arg1;
- (id)directoryNameForDate:(id)arg1;
- (id)parseNameIntoDate:(id)arg1;
- (BOOL)validateRoot;
- (BOOL)isValidHierarchy;
- (void)refreshOnMountChange;
- (void)buildListOfHiddenPaths;

@end

