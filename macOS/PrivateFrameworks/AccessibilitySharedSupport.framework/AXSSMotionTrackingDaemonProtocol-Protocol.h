//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AXSSMotionTrackingInputConfiguration, AXSSMotionTrackingVideoFileInput, NSURL;

@protocol AXSSMotionTrackingDaemonProtocol
- (void)playVideoAtURL:(NSURL *)arg1 onMotionTrackingVideoFileInput:(AXSSMotionTrackingVideoFileInput *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)hideDebugOverlay;
- (void)showDebugOverlay;
- (void)stopTracking;
- (void)startTracking;
- (void)setLookAtPoint:(struct CGPoint)arg1;
- (void)setJoystickModeMovementThreshold:(double)arg1;
- (void)setInputConfiguration:(AXSSMotionTrackingInputConfiguration *)arg1;
- (void)setSensitivity:(double)arg1;
- (void)setMotionTrackingMode:(unsigned long long)arg1;
@end

