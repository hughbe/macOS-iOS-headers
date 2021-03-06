//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface _NSDatePickerArrowCell : NSActionCell
{
    NSTimer *_timer;
    NSDate *_lastFireDateForTimer;
    double _doubleValue;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (void)setAlternateImage:(id)arg1;
- (id)alternateImage;
- (id)_pressureConfigurationIfNeeded;
- (void)_updateMouseTracking;
- (BOOL)_hasTrackingGesture;
- (void)setControlView:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTrackingGesture:(id)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_rescheduleTimer;
- (void)_scheduleTimer;
- (double)_initialTimerDelay;
- (double)_timerInterval;
- (void)_invalidateTimer;
- (void)_timerDidFire;
- (void)_sendAction;
- (double)doubleValue;
- (void)setDoubleValue:(double)arg1;
- (id)_appearanceContentStyleInView:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)initImageCell:(id)arg1;

@end

