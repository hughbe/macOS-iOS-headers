//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIPurgeSnapshotsElement : OSIInstallQueueElement
{
}

- (BOOL)okayToSkip;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)isSkippableSnapshot:(id)arg1 deleteAllSnapshotTypes:(BOOL)arg2;
- (BOOL)_purgeSnapshotsOnVolume:(id)arg1 preserveLastSnapshot:(BOOL)arg2 deleteAllSnapshotTypes:(BOOL)arg3 withError:(id *)arg4;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1;

@end

