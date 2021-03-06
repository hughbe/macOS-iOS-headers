//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class MLFeatureDescription, NSDictionary, NSOrderedSet, NSString;

@interface MLModelInterface : NSObject <NSSecureCoding>
{
    NSDictionary *_inputDescription;
    NSDictionary *_outputDescription;
    NSString *_predictedFeatureName;
    NSString *_predictedProbabilitiesName;
    NSDictionary *_trainingInputDescription;
    NSOrderedSet *_inputFeatureNames;
    NSOrderedSet *_outputFeatureNames;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)validateSingleFeatureInDescription:(id)arg1 withSet:(id)arg2;
+ (id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6;
+ (id)modelInterfaceWithInputDescription:(id)arg1 orderedInputFeatureNames:(id)arg2 outputDescription:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7;
- (void).cxx_destruct;
@property(readonly) NSOrderedSet *outputFeatureNames; // @synthesize outputFeatureNames=_outputFeatureNames;
@property(readonly) NSOrderedSet *inputFeatureNames; // @synthesize inputFeatureNames=_inputFeatureNames;
@property(readonly) NSDictionary *trainingInputDescription; // @synthesize trainingInputDescription=_trainingInputDescription;
@property(readonly) NSString *predictedProbabilitiesName; // @synthesize predictedProbabilitiesName=_predictedProbabilitiesName;
@property(readonly) NSString *predictedFeatureName; // @synthesize predictedFeatureName=_predictedFeatureName;
@property(readonly) NSDictionary *outputDescription; // @synthesize outputDescription=_outputDescription;
@property(readonly) NSDictionary *inputDescription; // @synthesize inputDescription=_inputDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithInputDescription:(id)arg1 outputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3 orderedOutputFeatureNames:(id)arg4 predictedFeatureName:(id)arg5 predictedProbabilitiesName:(id)arg6 trainingInputDescription:(id)arg7;
- (id)initWithInterfaceFormat:(struct _MLModelDescriptionSpecification *)arg1 error:(id *)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
@property(readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property(readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property(readonly) MLFeatureDescription *predictedValueFeatureDescription;
@property(readonly, getter=isValidClassifierInterface) BOOL validClassifierInterface;
@property(readonly, getter=isValidRegressorInterface) BOOL validRegressorInterface;
- (BOOL)validateClassifierInterfaceWithError:(id *)arg1;
- (BOOL)validateRegressorInterfaceWithError:(id *)arg1;

@end

