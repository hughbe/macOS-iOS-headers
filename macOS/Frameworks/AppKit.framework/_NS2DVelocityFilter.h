//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _NS1DVelocityFilter;

@interface _NS2DVelocityFilter : NSObject
{
    _NS1DVelocityFilter *xFilter;
    _NS1DVelocityFilter *yFilter;
}

- (BOOL)resetIfOutOfDate:(double)arg1;
- (void)reset;
- (void)addDelta:(struct CGPoint)arg1 withTimestamp:(double)arg2;
@property(readonly) struct CGPoint filteredVelocity;
@property double maxAllowedVelocity;
@property(readonly) double lastTimestamp;
- (void)dealloc;
- (id)init;

@end

