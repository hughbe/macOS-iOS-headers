//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, RolloverTrackingButton;

@protocol RolloverTrackingButtonDelegate <NSObject>

@optional
- (void)rolloverTrackingButtonDidResignFirstResponder:(RolloverTrackingButton *)arg1;
- (void)rolloverTrackingButtonDidBecomeFirstResponder:(RolloverTrackingButton *)arg1;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 flagsDidChangeDuringMouseOver:(NSEvent *)arg2;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 didMouseDown:(NSEvent *)arg2;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 didMouseUp:(NSEvent *)arg2;
- (void)rolloverTrackingButton:(RolloverTrackingButton *)arg1 mouseDidEnterOrExit:(BOOL)arg2;
@end

