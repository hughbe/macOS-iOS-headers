//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMeaningfulEventSetTrait.h>

@interface PGMeaningfulEventSceneSetTrait : PGMeaningfulEventSetTrait
{
    BOOL _accumulateHighConfidenceAssetCounts;
    unsigned long long _minimumNumberOfHighConfidenceAssets;
    unsigned long long _minimumNumberOfNegativeHighConfidenceAssets;
    double _minimumRatioOfHighConfidenceAssets;
}

@property(nonatomic) BOOL accumulateHighConfidenceAssetCounts; // @synthesize accumulateHighConfidenceAssetCounts=_accumulateHighConfidenceAssetCounts;
@property(nonatomic) double minimumRatioOfHighConfidenceAssets; // @synthesize minimumRatioOfHighConfidenceAssets=_minimumRatioOfHighConfidenceAssets;
@property(nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets; // @synthesize minimumNumberOfNegativeHighConfidenceAssets=_minimumNumberOfNegativeHighConfidenceAssets;
@property(nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets; // @synthesize minimumNumberOfHighConfidenceAssets=_minimumNumberOfHighConfidenceAssets;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (id)initWithNodes:(id)arg1;

@end

