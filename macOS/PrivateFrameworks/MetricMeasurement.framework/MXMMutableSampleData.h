//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMSampleData.h>

@interface MXMMutableSampleData : MXMSampleData
{
}

- (id)dataMatchingFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)appendUnsignedIntegerValue:(unsigned long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendIntegerValue:(long long)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendIntValue:(int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendUnsignedIntValue:(unsigned int)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendDoubleValue:(double)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendFloatValue:(float)arg1 tag:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)appendSample:(id)arg1;
- (void)appendSet:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendAttribute:(id)arg1;
- (void)appendAttributes:(id)arg1;

@end

