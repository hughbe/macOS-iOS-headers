//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLActivityCriterion.h>

@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion
{
    double _interval;
    double _rescheduleDelay;
    PLMonotonicTimer *_timer;
}

+ (double)minTimeInterval;
+ (id)timeCriterionWithInterval:(double)arg1;
- (void).cxx_destruct;
@property(retain) PLMonotonicTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double rescheduleDelay; // @synthesize rescheduleDelay=_rescheduleDelay;
@property double interval; // @synthesize interval=_interval;
- (id)description;
- (void)didDisableActivity:(id)arg1;
- (void)didInterruptActivity:(id)arg1;
- (void)didCompleteActivity:(id)arg1;
- (void)didEnableActivity:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1;

@end

