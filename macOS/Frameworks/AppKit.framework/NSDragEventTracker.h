//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSEventTracker.h>

@interface NSDragEventTracker : NSEventTracker
{
    unsigned long long _discardEventMask;
    double _movementThreshold;
    double _timeoutThreshold;
    BOOL _routesScrollWheelEventsToWindow;
    BOOL _wantsRightMouseEvents;
    double _gestureAmount;
    long long _stage;
    struct CGPoint _location;
}

@property struct CGPoint location; // @synthesize location=_location;
@property long long stage; // @synthesize stage=_stage;
@property double gestureAmount; // @synthesize gestureAmount=_gestureAmount;
@property unsigned long long discardEventMask; // @synthesize discardEventMask=_discardEventMask;
@property BOOL wantsRightMouseEvents; // @synthesize wantsRightMouseEvents=_wantsRightMouseEvents;
@property BOOL routesScrollWheelEventsToWindow; // @synthesize routesScrollWheelEventsToWindow=_routesScrollWheelEventsToWindow;
@property double timeoutThreshold; // @synthesize timeoutThreshold=_timeoutThreshold;
@property double movementThreshold; // @synthesize movementThreshold=_movementThreshold;
- (void)trackEvent:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

