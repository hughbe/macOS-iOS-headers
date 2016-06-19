//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface WBSCloudHistoryThrottler : NSObject
{
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
    id <WBSCloudHistoryThrottlerDataStore> _dataStore;
}

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (BOOL)policyStringRepresentsValidPolicy:(id)arg1;
@property(retain, nonatomic) id <WBSCloudHistoryThrottlerDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (void)reloadRecordOfPastOperations;
- (void)_saveRecordOfPastOperations;
- (void)_loadRecordOfPastOperations;
- (void)_addOperationAtDate:(id)arg1;
- (void)_pruneExpiredOrInvalidOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)arg1;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)arg1;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (BOOL)_loadDistributionConfiguration:(id)arg1;
- (void)setPolicyString:(id)arg1;
- (BOOL)_throttlerIsActive;
- (id)description;
- (void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (id)dateOfNextPermittedOperationWithPriority:(long long)arg1;
- (BOOL)permitsOperationWithPriority:(long long)arg1;
- (id)initWithPolicyString:(id)arg1;
- (id)init;

@end

