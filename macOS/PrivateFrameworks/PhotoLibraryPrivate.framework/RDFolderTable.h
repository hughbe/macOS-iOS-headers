//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFolderTable : RDTable
{
    LiKeyPath *_folderTypeKeyPath;
    LiKeyPath *_nameKeyPath;
    LiKeyPath *_parentFolderUuidKeyPath;
    LiKeyPath *_implicitAlbumUuidKeyPath;
    LiKeyPath *_posterVersionUuidKeyPath;
    LiKeyPath *_automaticallyGenerateFullSizePreviewsKeyPath;
    LiKeyPath *_versionCountKeyPath;
    LiKeyPath *_minImageTimeZoneNameKeyPath;
    LiKeyPath *_maxImageTimeZoneNameKeyPath;
    LiKeyPath *_minImageDateKeyPath;
    LiKeyPath *_maxImageDateKeyPath;
    LiKeyPath *_folderPathKeyPath;
    LiKeyPath *_createDateKeyPath;
    LiKeyPath *_isExpandedKeyPath;
    LiKeyPath *_isHiddenKeyPath;
    LiKeyPath *_isHiddenWhenEmptyKeyPath;
    LiKeyPath *_isFavoriteKeyPath;
    LiKeyPath *_isInTrashKeyPath;
    LiKeyPath *_inTrashDateKeyPath;
    LiKeyPath *_isMagicKeyPath;
    LiKeyPath *_colorLabelIndexKeyPath;
    LiKeyPath *_sortAscendingKeyPath;
    LiKeyPath *_sortKeyPathKeyPath;
    LiKeyPath *_cloudLibraryStateKeyPath;
    LiKeyPath *_hasBeenSyncedKeyPath;
    LiKeyPath *_cloudIdentifierKeyPath;
    LiKeyPath *_isCloudQuarantinedKeyPath;
    LiKeyPath *_cloudSortTypeKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *cloudSortTypeKeyPath; // @synthesize cloudSortTypeKeyPath=_cloudSortTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *isCloudQuarantinedKeyPath; // @synthesize isCloudQuarantinedKeyPath=_isCloudQuarantinedKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudIdentifierKeyPath; // @synthesize cloudIdentifierKeyPath=_cloudIdentifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *hasBeenSyncedKeyPath; // @synthesize hasBeenSyncedKeyPath=_hasBeenSyncedKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudLibraryStateKeyPath; // @synthesize cloudLibraryStateKeyPath=_cloudLibraryStateKeyPath;
@property(readonly, nonatomic) LiKeyPath *sortKeyPathKeyPath; // @synthesize sortKeyPathKeyPath=_sortKeyPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *sortAscendingKeyPath; // @synthesize sortAscendingKeyPath=_sortAscendingKeyPath;
@property(readonly, nonatomic) LiKeyPath *colorLabelIndexKeyPath; // @synthesize colorLabelIndexKeyPath=_colorLabelIndexKeyPath;
@property(readonly, nonatomic) LiKeyPath *isMagicKeyPath; // @synthesize isMagicKeyPath=_isMagicKeyPath;
@property(readonly, nonatomic) LiKeyPath *inTrashDateKeyPath; // @synthesize inTrashDateKeyPath=_inTrashDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *isInTrashKeyPath; // @synthesize isInTrashKeyPath=_isInTrashKeyPath;
@property(readonly, nonatomic) LiKeyPath *isFavoriteKeyPath; // @synthesize isFavoriteKeyPath=_isFavoriteKeyPath;
@property(readonly, nonatomic) LiKeyPath *isHiddenWhenEmptyKeyPath; // @synthesize isHiddenWhenEmptyKeyPath=_isHiddenWhenEmptyKeyPath;
@property(readonly, nonatomic) LiKeyPath *isHiddenKeyPath; // @synthesize isHiddenKeyPath=_isHiddenKeyPath;
@property(readonly, nonatomic) LiKeyPath *isExpandedKeyPath; // @synthesize isExpandedKeyPath=_isExpandedKeyPath;
@property(readonly, nonatomic) LiKeyPath *createDateKeyPath; // @synthesize createDateKeyPath=_createDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *folderPathKeyPath; // @synthesize folderPathKeyPath=_folderPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *maxImageDateKeyPath; // @synthesize maxImageDateKeyPath=_maxImageDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *minImageDateKeyPath; // @synthesize minImageDateKeyPath=_minImageDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *maxImageTimeZoneNameKeyPath; // @synthesize maxImageTimeZoneNameKeyPath=_maxImageTimeZoneNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *minImageTimeZoneNameKeyPath; // @synthesize minImageTimeZoneNameKeyPath=_minImageTimeZoneNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionCountKeyPath; // @synthesize versionCountKeyPath=_versionCountKeyPath;
@property(readonly, nonatomic) LiKeyPath *automaticallyGenerateFullSizePreviewsKeyPath; // @synthesize automaticallyGenerateFullSizePreviewsKeyPath=_automaticallyGenerateFullSizePreviewsKeyPath;
@property(readonly, nonatomic) LiKeyPath *posterVersionUuidKeyPath; // @synthesize posterVersionUuidKeyPath=_posterVersionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *implicitAlbumUuidKeyPath; // @synthesize implicitAlbumUuidKeyPath=_implicitAlbumUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *parentFolderUuidKeyPath; // @synthesize parentFolderUuidKeyPath=_parentFolderUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
@property(readonly, nonatomic) LiKeyPath *folderTypeKeyPath; // @synthesize folderTypeKeyPath=_folderTypeKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

