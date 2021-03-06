//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PMLSessionDescriptor, SGCustomResponsesParameters, SGModelHyperparameters, SGQuickResponsesClassificationParameters, SGQuickResponsesPredictionParameters, SGQuickResponsesReplies;

@interface SGQuickResponsesConfig : NSObject
{
    SGModelHyperparameters *_modelHyperparameters;
    NSArray *_preprocessingMethods;
    NSArray *_labels;
    SGQuickResponsesReplies *_replies;
    SGQuickResponsesClassificationParameters *_classificationParams;
    SGQuickResponsesPredictionParameters *_predictionParams;
    SGCustomResponsesParameters *_customResponsesParameters;
    NSString *_language;
    unsigned long long _mode;
    PMLSessionDescriptor *_sessionDescriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) SGCustomResponsesParameters *customResponsesParameters; // @synthesize customResponsesParameters=_customResponsesParameters;
@property(readonly, nonatomic) SGQuickResponsesPredictionParameters *predictionParams; // @synthesize predictionParams=_predictionParams;
@property(readonly, nonatomic) SGQuickResponsesClassificationParameters *classificationParams; // @synthesize classificationParams=_classificationParams;
@property(readonly, nonatomic) SGQuickResponsesReplies *replies; // @synthesize replies=_replies;
@property(readonly, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(readonly, nonatomic) NSArray *preprocessingMethods; // @synthesize preprocessingMethods=_preprocessingMethods;
@property(readonly, nonatomic) SGModelHyperparameters *modelHyperparameters; // @synthesize modelHyperparameters=_modelHyperparameters;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 dictionary:(id)arg3;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;

@end

