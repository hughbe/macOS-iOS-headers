//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate.h"

@class CUTWeakReference, NSArray, NSDate, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate>
{
    NSString *_serviceName;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_listenerID;
    NSArray *_destinations;
    NSMutableArray *_destinationsToQuery;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    int _numberOfQueriesDone;
    BOOL _isDead;
}

- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

