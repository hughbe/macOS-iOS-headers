//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLChangeBatch, NSArray, NSString;

@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
@property(nonatomic, getter=isLocked) BOOL locked;
- (NSArray *)allChangeBatches;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (CPLChangeBatch *)nextBatch;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)markChangesWithIdentifier:(NSString *)arg1 withAlterationType:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)appendChangeBatch:(CPLChangeBatch *)arg1 error:(id *)arg2;
- (unsigned long long)countOfQueuedBatches;
@end

