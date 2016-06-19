//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDMasterModel.h>

#import "RDCloudSyncingModel.h"
#import "RDModelAttachments.h"
#import "RDModelFingerprint.h"

@class NSString, NSTimeZone;

@interface RDMaster : RDMasterModel <RDModelAttachments, RDModelFingerprint, RDCloudSyncingModel>
{
    NSTimeZone *_imageTimeZone;
}

+ (long long)nextVersionNumberForMasterUuid:(id)arg1 alternateMasterUuid:(id)arg2 inDatabase:(id)arg3;
+ (id)allVersionsForMaster:(id)arg1 andAlternateMaster:(id)arg2;
+ (id)mastersForVersions:(id)arg1;
+ (id)calculateFixedImageAssetForType:(unsigned char)arg1 size:(struct CGSize)arg2;
+ (id)supportedMasterTypes;
+ (id)supportedMasterImageTypes;
+ (id)supportedAudioTypes;
+ (id)supportedMovieTypes;
+ (id)utiFromMetadata:(id)arg1 Extension:(id)arg2;
+ (BOOL)conformsToUTType:(struct __CFString *)arg1 forExtention:(id)arg2;
+ (BOOL)conformsToUTTypes:(id)arg1 forExtention:(id)arg2;
+ (BOOL)isSupportedFile:(id)arg1 uti:(id)arg2;
+ (unsigned long long)totalDiskSpaceForAllMasters:(id)arg1;
+ (id)removeFromTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)putInTrash:(id)arg1 withReason:(unsigned short)arg2;
+ (id)allMastersForMasters:(id)arg1;
+ (BOOL)isMasterFilePathVideo:(id)arg1;
+ (void)repairUnsyncedAlternateMasters:(id)arg1;
+ (void)repairConflictingMasterImagePathsWithRepair:(id)arg1;
+ (void)repairPairingWithRepair:(id)arg1;
+ (void)repairMasterInTrashStateWithRepair:(id)arg1;
+ (void)repairDuplicateSyncedMastersWithRepair:(id)arg1;
+ (void)repairImageDate:(id)arg1;
+ (void)repairDuplicateAlternateMasterUuid:(id)arg1;
+ (void)repairIncompleteImportWithRepair:(id)arg1;
+ (BOOL)deleteIncompletelyImportedMasterModels:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
+ (BOOL)_checkStatusOfFilesForMasters:(id)arg1 deleteImmediately:(id)arg2 skip:(id)arg3;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned short)arg2;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned short)arg2 progressBlock:(CDUnknownBlockType)arg3;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned short)arg2 deleteImmediately:(id)arg3 skip:(id)arg4;
+ (void)deleteMasters:(id)arg1 withReason:(unsigned short)arg2 deleteImmediately:(id)arg3 skip:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
+ (id)fixMissingFileNameForMaster:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cloudIdentifier;
- (id)cgImageProperties;
- (id)metadata;
- (id)oldestVersion;
- (id)oldestVersionFromVersions:(id)arg1;
- (id)alternateMaster;
- (long long)nextVersionNumber;
- (id)allVersionsIncludingAlternateMaster;
- (id)allVersionsWithPropertyKeys:(id)arg1;
- (id)allVersions;
- (id)allVersionUuids;
- (id)anyVersion;
- (id)versionsWithPropertyKeys:(id)arg1;
- (id)versions;
- (void)setGeneratedFingerprintWithData:(id)arg1;
- (void)setGeneratedFingerprintWithHandler:(CDUnknownBlockType)arg1;
- (id)timeZoneAdjustedImageDate;
- (id)imageTimeZone;
- (void)setImageTimeZoneOffsetSeconds:(id)arg1;
- (void)setImageDate:(id)arg1;
- (void)resetHasAttachments;
- (id)attachments;
- (BOOL)isUnsupportedUTType;
- (BOOL)conformsToUTType:(struct __CFString *)arg1;
- (BOOL)conformsToUTTypes:(id)arg1;
- (void)setUnsupportedUTType;
- (BOOL)isJpegPrimary;
- (BOOL)isRawPrimary;
- (BOOL)isRawPlusJpeg;
- (BOOL)isRawImage;
- (BOOL)isImage;
- (BOOL)isMovieOrAudio;
- (BOOL)isMovie;
- (BOOL)isAudio;
- (unsigned short)subType;
- (unsigned char)type;
- (void)setMediaGroupId:(id)arg1;
- (void)setIsMissing:(BOOL)arg1;
- (void)setIsInTrash:(BOOL)arg1 inTrashDate:(id)arg2 reason:(unsigned short)arg3;
- (void)setIsInTrash:(BOOL)arg1 reason:(unsigned short)arg2;
- (void)setIsInTrash:(BOOL)arg1;
- (void)cacheMetadata:(id)arg1;
- (void)setFileVolumeUuid:(id)arg1;
- (struct PFIntSize_st)size;
- (void)setFileName:(id)arg1;
- (id)importGroupName;
- (id)importGroup;
- (CDUnknownBlockType)willPersist;
- (BOOL)isBurstMaster;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (short)modelType;
- (id)nextAvailableNewVersionName;
- (id)extension;
- (id)initWithUuid:(id)arg1 name:(id)arg2 importGroup:(id)arg3 withFilePath:(id)arg4 isReference:(BOOL)arg5 metadata:(id)arg6;
- (void)deleteVideoComplementWithReason:(unsigned short)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)makeReferencedVideoComplementWithURL:(id)arg1 volume:(id)arg2 error:(id *)arg3;
- (BOOL)makeManagedVideoComplementWithURL:(id)arg1 hardLink:(BOOL)arg2 error:(id *)arg3;
- (id)makeManagedVideoComplementWithError:(id *)arg1;
- (id)newVideoComplementMetadataAndUpdateModels:(BOOL)arg1;
- (void)setVideoComplementMetadata:(id)arg1;
- (void)setVideoComplementMetadata:(id)arg1 forResource:(id)arg2;
@property(readonly) struct CGSize masterVideoComplementSize;
- (void)_setVideoComplementMetadata:(id)arg1 resource:(id)arg2;
- (void)obtainMasterVideoComplementAccess:(unsigned char)arg1 toURLWithHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasMasterVideoComplementModel;
- (BOOL)hasMasterVideoComplement;
- (id)videoComplementResourceWithUTI:(id)arg1 error:(id *)arg2;
- (id)newVideoComplementResourceWithUTI:(id)arg1 persistModel:(BOOL)arg2 error:(id *)arg3;
- (id)masterVideoComplementResource;
- (BOOL)moveFilePathToTrash:(id)arg1 trashPaths:(id)arg2;
- (id)renameMasterMediaWithUTI:(id)arg1;
- (id)setFilenameFastModernizeVideoMediaWithMetadata:(id)arg1;
- (id)utiFastModernizeVideoMediaWithMetadata:(id)arg1;
- (id)generateUTI;
- (BOOL)isReallyAvailable;
- (void)setupReferenceFileURL:(id)arg1 volume:(id)arg2;
- (void)convertToManagedWithImagePath:(id)arg1;
- (BOOL)isOffline;
- (BOOL)isLikelyAvailable;
- (BOOL)isStillImporting;
- (id)allManagedMasterDirectoryPaths;
- (void)findCommonReferencedRootFolderCompletion:(CDUnknownBlockType)arg1;
- (id)masterFileURL;
- (void)obtainMasterURLAccessWithHandler:(CDUnknownBlockType)arg1;
- (id)bookmark;
- (id)uniqueManagedImagePath;
- (void)setManagedImagePath:(id)arg1;
- (id)managedImagePath;
- (void)setFileVolume:(id)arg1;
- (id)fileVolume;

// Remaining properties
@property(nonatomic) long long cloudLibraryState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasBeenSynced;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isCloudQuarantined;
@property(readonly) Class superclass;

@end

