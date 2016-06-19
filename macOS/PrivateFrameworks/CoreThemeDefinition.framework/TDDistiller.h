//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIMutableCommonAssetStorage, CoreThemeDocument, NSArray, NSMutableArray, NSString, NSThread, NSUUID, TDLogger;

@interface TDDistiller : NSObject
{
    CoreThemeDocument *_document;
    CUIMutableCommonAssetStorage *_assetStore;
    NSMutableArray *_renditionEntries;
    NSArray *_changedProductions;
    NSArray *_mainThreadPerformRunLoopModes;
    int _fileCompression;
    BOOL _incremental;
    BOOL _cancelled;
    BOOL _successful;
    BOOL _finished;
    NSString *_assetStoreVersionString;
    long long _assetStoreVersionNumber;
    TDLogger *_logger;
    NSString *_accumulatedErrorDescription;
    NSThread *_callbackThread;
    CDUnknownBlockType _oldCompletionHandler;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType oldCompletionHandler; // @synthesize oldCompletionHandler=_oldCompletionHandler;
@property(retain) NSThread *callbackThread; // @synthesize callbackThread=_callbackThread;
@property(retain, nonatomic) NSString *accumulatedErrorDescription; // @synthesize accumulatedErrorDescription=_accumulatedErrorDescription;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(retain) TDLogger *logger; // @synthesize logger=_logger;
@property(getter=isSuccessful) BOOL successful; // @synthesize successful=_successful;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property long long assetStoreVersionNumber; // @synthesize assetStoreVersionNumber=_assetStoreVersionNumber;
@property(copy) NSString *assetStoreVersionString; // @synthesize assetStoreVersionString=_assetStoreVersionString;
@property(getter=isIncremental) BOOL incremental; // @synthesize incremental=_incremental;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)cancelDistill;
- (void)waitTimerDidFire:(id)arg1;
- (void)waitUntilFinished;
- (void)saveAndDistillWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)distillWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginDistillWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_distill:(id)arg1;
- (BOOL)assetStoreWriteToDisk;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)setAssetStoreUuid:(id)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)_distillChanges:(id)arg1;
- (void)_resetDocumentUuid:(id)arg1;
- (void)markDistillationAsFinished;
- (void)finishDistillationWithSuccess:(BOOL)arg1;
- (BOOL)distillCursorFacetDefinitions;
- (BOOL)_distillCursorFacetDefinitions:(id)arg1;
- (BOOL)distillZeroCodeArtworkElementAndPartIdentifiers;
- (BOOL)distillZeroCodeArtworkInfoOfType:(long long)arg1;
- (BOOL)distillZeroCodeArtworkInfo:(id)arg1 ofType:(long long)arg2;
- (id)zeroCodeArtworkInfoOfType:(long long)arg1 error:(id *)arg2;
- (BOOL)distillNamedElements;
- (BOOL)_distillNamedElements:(id)arg1;
- (id)_copyStandardEffectDefinitions;
- (BOOL)distillCustomFontSizes;
- (BOOL)distillCustomFonts;
- (BOOL)_distillFonts:(id)arg1;
- (BOOL)distillCustomColors;
- (BOOL)_distillColorDefinitions:(id)arg1;
- (BOOL)distillCatalogGlobals;
- (BOOL)distillRenditions;
- (BOOL)_recordRenditionEntryFromRendition:(id)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (BOOL)sortAndStoreRenditions;
- (void)_storeRenditions;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1;
- (BOOL)_sortRenditionEntries;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken *)arg2 fromRenditionSpec:(id)arg3;
- (id)_renditionsFromProductions:(id)arg1 error:(id *)arg2;
- (id)_renditionsWithError:(id *)arg1;
- (id)_textureFaceExclusionPredicate;
- (id)_filterRenditions:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken *)arg1;
- (id)keyFormatData;
- (void)dealloc;
- (id)documentPath;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 versionString:(id)arg4;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (BOOL)_setupWithOutputPath:(id)arg1 attemptIncremental:(BOOL)arg2;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_accumulateErrorDescription:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logInfo:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
@property int fileCompression;

@end

