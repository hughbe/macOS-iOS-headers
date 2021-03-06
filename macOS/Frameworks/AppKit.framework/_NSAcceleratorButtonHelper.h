//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCell, NSTimer, NSValue;
@protocol _NSAcceleratorCell;

__attribute__((visibility("hidden")))
@interface _NSAcceleratorButtonHelper : NSObject
{
    NSValue *_cellStorage;
    NSTimer *_timer;
    double _lastTime;
    double _accumulatedActions;
    double _timerTarget;
    double _initialDelay;
    float _minRate;
    float _maxRate;
    float _currentRate;
    BOOL _satisfiedInitialDelay;
}

+ (float)defaultPeriodicInterval;
+ (float)defaultPeriodicDelay;
+ (double)accelerationForGestureAmount:(double)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
- (void)_scheduleTimer;
- (void)_acceleratorTimerFired:(id)arg1;
- (void)accelerationChanged:(double)arg1;
- (void)levelChanged:(unsigned long long)arg1 withMaximum:(unsigned long long)arg2;
- (void)pressComplete;
- (void)pressStarted:(BOOL)arg1;
@property(readonly) __weak NSCell<_NSAcceleratorCell> *cell;
- (void)dealloc;
- (id)initWithCell:(id)arg1;

@end

