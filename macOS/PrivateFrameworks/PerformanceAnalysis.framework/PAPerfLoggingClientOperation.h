//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PerformanceAnalysis/PAPerfLoggingOperation.h>

@class NSObject<OS_dispatch_source>;

@interface PAPerfLoggingClientOperation : PAPerfLoggingOperation
{
    BOOL _shouldLogResultsToSystemLog;
    BOOL _shouldMonitorWSUpdates;
    BOOL _ended;
    NSObject<OS_dispatch_source> *timeoutTimerSource;
}

+ (id)existingOperationWithOperationCategory:(id)arg1 operationName:(id)arg2;
- (void)dealloc;
- (void)markIntervalTransition:(id)arg1 transitionType:(int)arg2 atCGSTimestampInSec:(double)arg3 withContext:(id)arg4 isWSIntervalTransition:(BOOL)arg5;
- (void)endWithType:(unsigned long long)arg1 truncateDurationInSeconds:(double)arg2;
- (void)markOperationStart;
- (id)initWithOperationCategory:(id)arg1 andOperationName:(id)arg2 andPid:(int)arg3 shouldMonitorWSUpdates:(BOOL)arg4;
- (void)_ktraceOperationEventWithID:(unsigned int)arg1;
- (void)_ktraceOperationEventWithID:(unsigned int)arg1 andString:(id)arg2;
- (void)_ktraceMarkOperationEndWithType:(unsigned long long)arg1;
- (void)_ktraceMarkIntervalTransition:(id)arg1 withTransitionType:(int)arg2;
- (void)_ktraceMarkOperationStart;

@end

