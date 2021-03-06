//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject
{
    NSMutableArray *_cachedSpans;
}

+ (id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)spans;
- (void)insertSpans:(id)arg1;
- (id)deDupSpans:(id)arg1;
- (id)cachedSpansFromSpans:(id)arg1;
- (void)sanitizeAndInsertResults:(id)arg1 inRange:(id)arg2;
- (id)_eliminateOverlapsInResults:(id)arg1;
- (long long)_currentMaxSpanTypeIn:(id)arg1;
- (id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)description;
- (id)init;

@end

