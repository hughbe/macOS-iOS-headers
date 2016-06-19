//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCServerZone, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;
    unsigned long long _editedAndDeletedRecordsCount;
}

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;
- (void)_startSyncDown;
- (void)_performAfterFetchingRecordChanges:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

