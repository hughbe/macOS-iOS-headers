//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>
{
}

@property(nonatomic, getter=isLocked) BOOL locked;
- (id)allChangeBatches;
- (id)popAllChangeBatchesWithError:(id *)arg1;
- (BOOL)compactChangeBatchesWithError:(id *)arg1;
- (BOOL)deleteAllChangeBatchesWithError:(id *)arg1;
- (BOOL)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (BOOL)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (BOOL)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfQueuedBatches;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

