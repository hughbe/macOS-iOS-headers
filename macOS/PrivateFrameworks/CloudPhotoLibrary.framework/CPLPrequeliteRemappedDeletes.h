//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import "CPLEngineRemappedDeletesImplementation.h"

@class NSString;

@interface CPLPrequeliteRemappedDeletes : CPLPrequeliteStorage <CPLEngineRemappedDeletesImplementation>
{
}

- (id)realIdentifierForRemappedIdentifier:(id)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)discardDeleteForRemappedRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)scheduleDeleteForRemappedRecordWithIdentifier:(id)arg1 realIdentifier:(id)arg2 asap:(BOOL)arg3 error:(id *)arg4;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

