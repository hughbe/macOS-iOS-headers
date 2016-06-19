//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCAppLibrary.h>

@class BRCRelativePath, BRContainer, NSString;

__attribute__((visibility("hidden")))
@interface BRCPrivateAppLibrary : BRCAppLibrary
{
    BOOL _containerMetadataNeedsSyncUp;
    BRContainer *_containerMetadata;
    NSString *_containerMetadataEtag;
}

@property(nonatomic) BOOL containerMetadataNeedsSyncUp; // @synthesize containerMetadataNeedsSyncUp=_containerMetadataNeedsSyncUp;
@property(retain, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) BRContainer *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
- (void).cxx_destruct;
- (id)createAliasWithTarget:(id)arg1 parentPath:(id)arg2 forceReparent:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_crossZoneMoveDocumentsFromClientZone:(id)arg1 toZone:(id)arg2;
- (id)pathRelativeToRoot;
- (void)scheduleContainerMetadataSyncUp;
- (id)plist;
- (void)associateWithClientZone:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (void)_updateIsInCloudDocsZone;
- (void)zoneDidChangeMovedToCloudDocsState;
- (BOOL)_isInCloudDocsZone;
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;
@property(readonly, nonatomic) BRCRelativePath *documentsPath;
- (BOOL)shouldSaveContainerMetadataServerside;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (BOOL)wasMovedToCloudDocs;
- (id)_unwrappedDescriptionWithContext:(id)arg1;
- (id)privateClientZone;
- (id)asPrivateAppLibrary;
- (BOOL)isPrivateAppLibrary;
- (id)initWithName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 zoneRowID:(id)arg4 db:(id)arg5 plist:(id)arg6 session:(id)arg7 initialCreation:(BOOL)arg8;
- (void)_updateContainerMetadataFromRecord:(id)arg1 stripIcons:(BOOL)arg2;

@end

