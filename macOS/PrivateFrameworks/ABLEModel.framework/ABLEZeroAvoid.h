//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABLEZeroAvoid : NSObject
{
    double _decayRate;
    double _minimumLevel;
    double _maximumLevel;
}

@property(readonly) double maximumLevel; // @synthesize maximumLevel=_maximumLevel;
@property(readonly) double minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property(readonly) double decayRate; // @synthesize decayRate=_decayRate;
- (id)zeroAvoid:(id)arg1;
- (id)initWithDecayRatePerEntry:(double)arg1 minimumLevel:(double)arg2 maximumLevel:(double)arg3;

@end

