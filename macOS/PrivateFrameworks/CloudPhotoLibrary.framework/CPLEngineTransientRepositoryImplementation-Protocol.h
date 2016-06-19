//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLChangeBatch, CPLRecordChange, NSData, NSString;

@protocol CPLEngineTransientRepositoryImplementation <CPLEngineStorageImplementation>
- (BOOL)hasRecordWithIdentifier:(NSString *)arg1;
- (CPLRecordChange *)recordWithIdentifier:(NSString *)arg1;
- (unsigned long long)countOfAssetChanges;
- (unsigned long long)countOfUnmingledRecords;
- (BOOL)deleteAllRecordsWithError:(id *)arg1;
- (BOOL)deleteMingledRecordsWithError:(id *)arg1;
- (BOOL)resetMingledRecordsWithError:(id *)arg1;
- (BOOL)popChangeBatchOfChangedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)popChangeBatchOfDeletedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)popChangeBatchOfRemappedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)prepareForMinglingWithError:(id *)arg1;
- (BOOL)appendBatch:(CPLChangeBatch *)arg1 alreadyMingled:(BOOL)arg2 error:(id *)arg3;
- (BOOL)storeTransientSyncAnchor:(NSData *)arg1 error:(id *)arg2;
- (NSData *)transientSyncAnchor;
@end

