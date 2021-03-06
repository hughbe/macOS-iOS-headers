//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLOperator.h>

@class NSMutableDictionary, NSSet;

@interface PLAccountingOperator : PLOperator
{
    NSSet *_rules;
    NSMutableDictionary *_ruleIDToPendingJobs;
}

+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitions;
+ (void)load;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *ruleIDToPendingJobs; // @synthesize ruleIDToPendingJobs=_ruleIDToPendingJobs;
@property(retain, nonatomic) NSSet *rules; // @synthesize rules=_rules;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)stopAccounting;
- (void)startAccounting;
- (void)initOperatorDependancies;
- (id)init;

@end

