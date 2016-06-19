//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABLEBONDrain;

@interface ABLEGradient : NSObject
{
    float _minDecay;
    float _maxDecay;
    ABLEBONDrain *_drainMap;
}

@property(readonly) ABLEBONDrain *drainMap; // @synthesize drainMap=_drainMap;
@property(readonly) float maxDecay; // @synthesize maxDecay=_maxDecay;
@property(readonly) float minDecay; // @synthesize minDecay=_minDecay;
- (void).cxx_destruct;
- (unsigned long long)calculateBONfromDrainRate:(float)arg1;
- (unsigned long long)calculateLinearBONfromDrainRate:(float)arg1;
- (unsigned long long)calculateBONfromTable:(id)arg1;
- (unsigned long long)calculateBON:(id)arg1;
- (float)calculateHourlyDecayRateFromTable:(id)arg1;
- (float)calculateHourlyDecayRate:(id)arg1;
- (id)initWithMinDecay:(float)arg1 andMaxDecay:(float)arg2;
- (id)initWithCurveAndMinDecay:(float)arg1 andMaxDecay:(float)arg2;
- (id)initWithCurve:(id)arg1 minDecay:(float)arg2 maxDecay:(float)arg3;

@end

