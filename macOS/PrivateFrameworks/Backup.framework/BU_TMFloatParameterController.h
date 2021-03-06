//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BU_TMFloatParameterController : NSObject
{
    double _initialValue;
    double _targetValue;
    struct TNSRef<CAMediaTimingFunction, void> _mediaTimingFunction;
    double _startTime;
    double _targetTime;
}

+ (id)parameterControllerWithInitialValue:(double)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)interpolatedValueAtTime:(double)arg1;
- (double)duration;
- (double)targetValue;
- (double)initialValue;
- (void)setTargetValue:(double)arg1 atTime:(double)arg2 withDuration:(double)arg3;
- (void)_setInitialValue:(double)arg1;
- (id)init;

@end

