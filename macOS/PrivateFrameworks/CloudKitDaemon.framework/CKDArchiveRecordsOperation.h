//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDArchiveRecordsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _recordArchivedBlock;
    NSArray *_recordIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)main;
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

