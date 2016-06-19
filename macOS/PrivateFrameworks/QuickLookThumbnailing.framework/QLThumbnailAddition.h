//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSAddition, NSDictionary, NSURL, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject
{
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    GSAddition *_addition;
    NSDictionary *_thumbnailDataDictionary;
    QLThumbnailVersion *_thumbnailVersion;
}

+ (BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(BOOL)arg2 atURL:(id)arg3 error:(id *)arg4;
+ (BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (BOOL)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
+ (void)downloadOrGenerateThumbnailAtPhysicalURL:(id)arg1;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id *)arg2;
+ (Class)imageClassWithError:(id *)arg1;
+ (BOOL)removeAdditionsOnURL:(id)arg1 error:(id *)arg2;
+ (BOOL)_removedAdditionsOnURL:(id)arg1;
+ (BOOL)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (BOOL)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
+ (BOOL)_removeAdditionsOnURLDirectly:(id)arg1 error:(id *)arg2;
+ (BOOL)associateImage:(struct CGImage *)arg1 metadata:(id)arg2 automaticallyGenerated:(BOOL)arg3 withURL:(id)arg4 error:(id *)arg5;
+ (id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2;
+ (BOOL)imageContainsAlpha:(struct CGImage *)arg1;
+ (BOOL)imageContainsAlphaForOtherImages:(struct CGImage *)arg1;
+ (BOOL)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id *)arg4;
+ (BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(BOOL)arg3 atURL:(id)arg4 error:(id *)arg5;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource *)arg1;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id *)arg4;
+ (BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id *)arg2;
+ (BOOL)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id *)arg4;
+ (BOOL)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)_hitAdditionsOnURLUsingDaemon:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_additionCreationInfo;
+ (unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1;
+ (BOOL)removeExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
+ (BOOL)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char *)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id *)arg5;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSDictionary *thumbnailDataDictionary; // @synthesize thumbnailDataDictionary=_thumbnailDataDictionary;
@property(retain) NSURL *additionURL; // @synthesize additionURL=_additionURL;
@property(readonly) unsigned long long additionSize;
- (id)allImageURLs;
@property(readonly) GSAddition *genStoreAddition;
- (id)thumbnailsDictionaryWithError:(id *)arg1;
- (struct CGImage *)thumbnailWithMaximumDimension:(double)arg1 contentRect:(struct CGRect *)arg2 flavor:(int *)arg3 lowQuality:(char *)arg4 properties:(id *)arg5;
@property(readonly) QLThumbnailVersion *thumbnailVersion;
- (id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(BOOL)arg2 error:(id *)arg3;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id *)arg2;
- (BOOL)_initWithXattrsPresentOnURL:(id)arg1 error:(id *)arg2;
- (BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
- (BOOL)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id *)arg2;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (void)dealloc;

@end

