//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NS1DVelocityFilter : NSObject
{
    double _maxAllowedVelocity;
    double _lastTimestamp;
    id _private;
}

@property double maxAllowedVelocity; // @synthesize maxAllowedVelocity=_maxAllowedVelocity;
@property double lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
- (BOOL)_isTimestampOutOfDate:(double)arg1;
- (BOOL)resetIfOutOfDate:(double)arg1;
- (void)reset;
@property(readonly) double filteredVelocity;
- (void)addDelta:(double)arg1 withTimestamp:(double)arg2;
- (void)dealloc;
- (id)init;

@end

