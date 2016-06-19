//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCLifeCycle.h"

@class BRCAccountSession, BRCDeadlineSource, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, PQLNameInjection;

__attribute__((visibility("hidden")))
@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle>
{
    BRCAccountSession *_session;
    BRCDeadlineSource *_schedulerSource;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSString *_name;
    PQLNameInjection *_tableName;
    BOOL _hasActiveWork;
    BOOL _hasWork;
    BOOL _isCancelled;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
}

@property(readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL hasWork; // @synthesize hasWork=_hasWork;
@property(nonatomic) BOOL hasActiveWork; // @synthesize hasActiveWork=_hasActiveWork;
@property(retain) NSObject<OS_dispatch_group> *hasWorkGroup; // @synthesize hasWorkGroup=_hasWorkGroup;
- (void).cxx_destruct;
- (void)close;
- (void)_close;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)schedule;
- (void)scheduleDidFinishWithTimestamp:(long long)arg1 nextScheduleTimestamp:(long long)arg2;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)deleteExpiredThrottles;
- (void)deleteThrottlesForZone:(id)arg1;
- (void)resetBackoffForThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)_computeStamps:(struct throttle_stamps *)arg1 throttleID:(long long)arg2 zone:(id)arg3 throttle:(id)arg4 hasBeenTried:(BOOL)arg5;
- (long long)_updateStamps:(struct throttle_stamps *)arg1 throttle:(id)arg2 now:(long long)arg3;
- (id)descriptionForZone:(id)arg1 now:(long long)arg2 context:(id)arg3;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (BOOL)isZoneIdle:(id)arg1;
- (BOOL)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (id)_initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
@property(readonly) BOOL closed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

