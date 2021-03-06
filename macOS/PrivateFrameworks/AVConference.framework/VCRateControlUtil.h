//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlUtil : NSObject
{
}

+ (void)calculateNOWRDAccWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2;
+ (double)calculateNOWRDWithDuration:(double)arg1 owrdList:(CDStruct_55dce769 *)arg2 historySize:(unsigned int)arg3 minHistorySize:(unsigned int)arg4 initalRampUpReadyDuration:(double)arg5 isInitialRampUp:(BOOL)arg6;
+ (void)calculateNOWRDShortWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(BOOL)arg3;
+ (void)calculateNOWRDWithOWRDList:(CDStruct_55dce769 *)arg1 config:(struct VCRateControlAlgorithmConfig)arg2 isInitialRampUp:(BOOL)arg3;
+ (BOOL)prepareOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4;
+ (BOOL)calculateCongestionMetricsFromOWRDList:(CDStruct_55dce769 *)arg1 owrd:(double)arg2 time:(double)arg3 config:(struct VCRateControlAlgorithmConfig)arg4 isInitialRampUp:(BOOL)arg5;

@end

