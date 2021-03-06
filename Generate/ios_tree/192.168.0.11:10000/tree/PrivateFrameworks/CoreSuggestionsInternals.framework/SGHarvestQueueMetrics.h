/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGHarvestQueueMetrics : NSObject {
    _PASLock * _guardedData;
    SGM2HarvestCost * _harvestCostMetrics;
}

+ (id)overridePET2InstanceForTesting:(id)arg1;

- (void).cxx_destruct;
- (int)_documentSourceForBundleId:(id)arg1;
- (int)_harvestSourceFromItemStorageReason:(int)arg1;
- (void)endHarvest;
- (void)endTimer:(id)arg1 significantWork:(bool)arg2;
- (id)harvestTimerForName:(id)arg1;
- (id)harvestTimes;
- (id)initRealtime:(id)arg1 wasNoBudgetItem:(bool)arg2;
- (id)initWithItem:(id)arg1;
- (void)startHarvest;
- (void)startTimer:(id)arg1;

@end
