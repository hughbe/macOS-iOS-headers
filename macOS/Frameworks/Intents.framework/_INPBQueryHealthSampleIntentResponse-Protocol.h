//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBWellnessObjectResultValue;

@protocol _INPBQueryHealthSampleIntentResponse <NSObject>
+ (Class)resultValuesType;
@property(readonly, nonatomic) unsigned long long resultValuesCount;
@property(copy, nonatomic) NSArray *resultValues;
- (_INPBWellnessObjectResultValue *)resultValuesAtIndex:(unsigned long long)arg1;
- (void)addResultValues:(_INPBWellnessObjectResultValue *)arg1;
- (void)clearResultValues;
@end

