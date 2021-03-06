//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPURawCounter/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol GPURawCounterSourceGroup <NSObject>
@property(readonly) unsigned long long availableCounterTriggers;
@property(readonly) unsigned long long sampleMarker;
@property(copy) NSDictionary *vendorOptions;
@property unsigned long long samplingTriggers;
@property unsigned long long samplingPeriodInMicroseconds;
@property(readonly) NSArray *sourceList;
@property(readonly) NSString *name;
- (BOOL)stopSampling;
- (BOOL)startSampling;
@end

