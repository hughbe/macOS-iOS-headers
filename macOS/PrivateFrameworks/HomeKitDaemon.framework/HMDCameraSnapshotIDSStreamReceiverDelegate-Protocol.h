//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotIDSStreamReceiver, NSError;

@protocol HMDCameraSnapshotIDSStreamReceiverDelegate <NSObject>
- (void)relayReceiver:(HMDCameraSnapshotIDSStreamReceiver *)arg1 didReceiveFile:(NSError *)arg2;
@end

