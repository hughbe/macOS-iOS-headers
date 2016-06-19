//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import "ICCloudObject.h"
#import "ICSearchIndexable.h"
#import "NSPasteboardWriting.h"

@class AVAsset, ICAttachmentLocation, ICAttachmentModel, ICMedia, ICNote, NSData, NSDate, NSSet, NSString, NSURL;

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable, NSPasteboardWriting>
{
    short _attachmentType;
    ICAttachmentModel *_attachmentModel;
    BOOL previewImagesIntegrityChecked;
    BOOL settingMergeableData;
    BOOL isBeingEditedLocallyOnDevice;
    struct AVAsset *_movie;
}

+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (BOOL)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1;
+ (BOOL)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1;
+ (BOOL)typeUTIIsDrawing:(id)arg1;
+ (BOOL)typeUTIIsPlayableAudio:(id)arg1;
+ (BOOL)typeUTIIsPlayableMovie:(id)arg1;
+ (id)filenameFromUTI:(id)arg1;
+ (id)filenameExtensionForUTI:(id)arg1;
+ (short)sectionFromTypeUTI:(id)arg1 url:(id)arg2;
+ (id)imageCache;
+ (id)imageLoadingOperationQueue;
+ (id)thumbnailOperationQueue;
+ (void)initialize;
+ (void)addPreviewImages:(id)arg1 toRecord:(id)arg2;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)noteFromAttachmentRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)newFetchRequestForAttachmentsInContext:(id)arg1;
+ (id)predicateForSearchableAttachments;
+ (id)predicateForAttachmentBrowser;
+ (id)predicateForVisibleAttachments;
+ (id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)visibleAttachmentsInContext:(id)arg1;
+ (id)allAttachmentsInContext:(id)arg1;
+ (id)attachmentWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3;
+ (id)attachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllAttachmentsInContext:(id)arg1;
+ (void)purgeAttachment:(id)arg1;
+ (void)deleteAttachment:(id)arg1;
+ (id)newAttachmentWithIdentifier:(id)arg1 context:(id)arg2;
@property(nonatomic) BOOL isBeingEditedLocallyOnDevice; // @synthesize isBeingEditedLocallyOnDevice;
@property(retain, nonatomic) AVAsset *movie; // @synthesize movie=_movie;
@property(nonatomic, getter=isSettingMergeableData) BOOL settingMergeableData; // @synthesize settingMergeableData;
@property(nonatomic) BOOL previewImagesIntegrityChecked; // @synthesize previewImagesIntegrityChecked;
- (void).cxx_destruct;
- (void)checkPreviewImagesIntegrity;
- (id)loggingDescriptionValues;
- (struct NSImage *)cachedImage;
- (void)setCachedImage:(struct NSImage *)arg1;
- (void)didUpdateLocationPlace;
- (BOOL)locationNeedsUpdate;
- (void)attachmentDidChange;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)unmarkForDeletion;
- (void)markForDeletion;
- (id)childCloudObjects;
- (id)parentCloudObject;
- (void)saveAndClearDecryptedData;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (BOOL)isEncryptableKeyBinaryData:(id)arg1;
- (id)parentEncryptableObject;
@property(retain, nonatomic) NSData *mergeableData; // @dynamic mergeableData;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSURL *remoteFileURL; // @dynamic remoteFileURL;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *urlString; // @dynamic urlString;
- (BOOL)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 fallbackBlock:(CDUnknownBlockType)arg7 aboutToLoadHandler:(CDUnknownBlockType)arg8;
- (BOOL)thumbnailImage:(struct NSImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(char *)arg5 isMovie:(char *)arg6 movieDuration:(CDStruct_198678f7 *)arg7;
- (id)movieDurationForSpeaking;
- (id)modificationDateForSpeaking;
- (id)activityItems;
- (void)willSave;
- (id)attachmentModel;
- (short)attachmentType;
- (BOOL)supportsSavingAttachmentToExternalFile;
- (BOOL)needsToBeRequested;
- (BOOL)isVisible;
- (struct CGSize)intrinsicContentSize;
- (void)saveMergeableDataIfNeeded;
@property(retain, nonatomic) NSString *typeUTI; // @dynamic typeUTI;
- (id)fileSizeString;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (id)pasteboardDataForAttributedString;
- (id)attributedString;
- (void)clearCachedImages;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;
- (struct NSImage *)image;
- (BOOL)isAppStore;
- (BOOL)isiTunes;
- (BOOL)isMap;
- (BOOL)isURL;
- (BOOL)isFolder;
- (id)URL;
- (void)resetUniqueIdentifier;
- (void)updatePreviewsFromRecord:(id)arg1;
- (BOOL)preferLocalPreviewImages;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (BOOL)supportsDeletionByTTL;
- (id)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (BOOL)needsToBePushedToCloud;
- (BOOL)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (BOOL)isInICloudAccount;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 newAttachment:(BOOL)arg2;
- (void)mergeDataFromRecord:(id)arg1;
- (id)recordZoneName;
- (id)recordType;
- (unsigned long long)approximateArchiveSizeIncludingPreviews:(BOOL)arg1;
- (void)savePreview:(id)arg1 toArchive:(struct PreviewImage *)arg2;
- (void)saveToArchive:(struct Attachment *)arg1;
- (void)loadPreviewArchive:(const struct PreviewImage *)arg1;
- (void)loadFromArchive:(const struct Attachment *)arg1 withIdentifierMap:(id)arg2;
- (void)updatePlaceInLocationIfNeededHandler:(CDUnknownBlockType)arg1;
- (id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)addLocationIfNeeded;
- (id)addMediaWithURL:(id)arg1 waitUntilDone:(BOOL)arg2;
- (id)addMediaWithURL:(id)arg1;
- (id)addMediaWithFileWrapper:(id)arg1;
- (id)addMediaWithData:(id)arg1 filename:(id)arg2 forceWriteInBackground:(BOOL)arg3;
- (void)updateAfterMediaChange;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 matchScale:(BOOL)arg3;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 save:(BOOL)arg6;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5;
- (id)updateAttachmentPreviewImageWithImageSrc:(struct CGImageSource *)arg1 maxDimension:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(BOOL)arg4 metadata:(id)arg5 sendNotification:(BOOL)arg6;
- (id)updateAttachmentPreviewImageWithImage:(struct NSImage *)arg1 scale:(double)arg2 scaleWhenDrawing:(BOOL)arg3 metadata:(id)arg4 sendNotification:(BOOL)arg5;
- (void)invalidateAttachmentPreviewImages;
- (void)purgeAttachmentPreviewImages;
- (void)deleteAttachmentPreviewImages;
- (BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
- (id)generateSearchIndexStringsOperation;
- (id)searchIndexStringsOutHasAdditionalStrings:(char *)arg1;
- (id)nonModelSearchIndexStrings;
- (BOOL)isHiddenFromSearch;
- (void)deleteFromNoteContextUsingIndexerContext:(id)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (id)authorsExcludingCurrentUser;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (unsigned long long)searchResultsSection;
- (id)objectIdentifier;
- (long long)visibilityTestingType;

// Remaining properties
@property(nonatomic) BOOL checkedForLocation; // @dynamic checkedForLocation;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ICAttachmentLocation *location; // @dynamic location;
@property(retain, nonatomic) ICMedia *media; // @dynamic media;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) ICNote *note; // @dynamic note;
@property(nonatomic) short orientation; // @dynamic orientation;
@property(nonatomic) double originX; // @dynamic originX;
@property(nonatomic) double originY; // @dynamic originY;
@property(retain, nonatomic) NSSet *previewImages; // @dynamic previewImages;
@property(retain, nonatomic) NSDate *previewUpdateDate; // @dynamic previewUpdateDate;
@property(nonatomic) short section; // @dynamic section;
@property(nonatomic) double sizeHeight; // @dynamic sizeHeight;
@property(nonatomic) double sizeWidth; // @dynamic sizeWidth;
@property(readonly) Class superclass;

@end

