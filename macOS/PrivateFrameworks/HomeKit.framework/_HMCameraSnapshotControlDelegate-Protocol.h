//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraSnapshot, NSError, _HMCameraSnapshotControl;

@protocol _HMCameraSnapshotControlDelegate <NSObject>
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(_HMCameraSnapshotControl *)arg1;
- (void)cameraSnapshotControl:(_HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
@end

