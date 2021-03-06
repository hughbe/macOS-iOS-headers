//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSString, _MLTLogger;
@protocol _MLTInputProvider;

@interface _MLTInferenceTesterConfiguration : NSObject
{
    BOOL _allowHardwareFallback;
    BOOL _measurePredictionPerformance;
    BOOL _measurePredictionCPUCycles;
    BOOL _measurePredictionCPUMemory;
    BOOL _measurePredictionGPUMemory;
    BOOL _measurePredictionANEMemory;
    MLModel *_model;
    NSString *_modelPath;
    id <_MLTInputProvider> _testDataProvider;
    NSString *_testDataPath;
    long long _computeUnit;
    _MLTLogger *_logger;
}

- (void).cxx_destruct;
@property BOOL measurePredictionANEMemory; // @synthesize measurePredictionANEMemory=_measurePredictionANEMemory;
@property BOOL measurePredictionGPUMemory; // @synthesize measurePredictionGPUMemory=_measurePredictionGPUMemory;
@property BOOL measurePredictionCPUMemory; // @synthesize measurePredictionCPUMemory=_measurePredictionCPUMemory;
@property BOOL measurePredictionCPUCycles; // @synthesize measurePredictionCPUCycles=_measurePredictionCPUCycles;
@property BOOL measurePredictionPerformance; // @synthesize measurePredictionPerformance=_measurePredictionPerformance;
@property(retain) _MLTLogger *logger; // @synthesize logger=_logger;
@property long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain) NSString *testDataPath; // @synthesize testDataPath=_testDataPath;
@property(retain) id <_MLTInputProvider> testDataProvider; // @synthesize testDataProvider=_testDataProvider;
@property BOOL allowHardwareFallback; // @synthesize allowHardwareFallback=_allowHardwareFallback;
@property(retain) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain) MLModel *model; // @synthesize model=_model;
- (id)init;

@end

