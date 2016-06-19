//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCAccountSession *_session;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    NSMutableSet *_containerIDsUpdated;
    BOOL _shouldFetchAnotherBatch;
}

@property(readonly, nonatomic) BOOL shouldFetchAnotherBatch; // @synthesize shouldFetchAnotherBatch=_shouldFetchAnotherBatch;
- (void).cxx_destruct;
- (void)main;
- (void)_completedWithServerChangeToken:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)performAfterFetchingAssetContents:(CDUnknownBlockType)arg1;
- (void)performAfterFetchingRecordChanges:(CDUnknownBlockType)arg1;
- (void)performAfterCreatingZoneIfNeeded:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (id)initWithSession:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

