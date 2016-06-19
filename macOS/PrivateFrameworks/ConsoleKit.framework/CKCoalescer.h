//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_log>;

@interface CKCoalescer : NSObject
{
    NSObject<OS_os_log> *_log;
    BOOL _isRunning;
    BOOL _needsManualResume;
    float _batchIntervalLeeway;
    int _emptyBatchesLimit;
    int _consecutiveEmptyBatches;
    double _batchInterval;
    unsigned long long _batchItemsLimit;
    NSObject<OS_dispatch_queue> *_batchQueue;
    id _batchTarget;
    CDUnknownBlockType _batchHandler;
    id <CKCoalescerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_isolatedSerialQueue;
    NSObject<OS_dispatch_queue> *_eventsSerialQueue;
    NSMutableArray *_itemsBuffer;
}

@property(retain, nonatomic) NSMutableArray *itemsBuffer; // @synthesize itemsBuffer=_itemsBuffer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventsSerialQueue; // @synthesize eventsSerialQueue=_eventsSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolatedSerialQueue; // @synthesize isolatedSerialQueue=_isolatedSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) BOOL needsManualResume; // @synthesize needsManualResume=_needsManualResume;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) int consecutiveEmptyBatches; // @synthesize consecutiveEmptyBatches=_consecutiveEmptyBatches;
@property(nonatomic) int emptyBatchesLimit; // @synthesize emptyBatchesLimit=_emptyBatchesLimit;
@property(nonatomic) __weak id <CKCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType batchHandler; // @synthesize batchHandler=_batchHandler;
@property(nonatomic) __weak id batchTarget; // @synthesize batchTarget=_batchTarget;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue; // @synthesize batchQueue=_batchQueue;
@property(readonly, nonatomic) unsigned long long batchItemsLimit; // @synthesize batchItemsLimit=_batchItemsLimit;
@property(readonly, nonatomic) float batchIntervalLeeway; // @synthesize batchIntervalLeeway=_batchIntervalLeeway;
@property(readonly, nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
- (void).cxx_destruct;
- (void)_fireBatchEvent;
- (CDUnknownBlockType)_timerInvocationHandler;
- (id)_newTimer;
- (BOOL)_autoPauseEventsIfNeeded;
- (BOOL)_autoResumeEventsIfNeeded;
- (BOOL)_pauseEvents;
- (BOOL)_resumeEvents;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)addItems:(id)arg1;
- (id)initWithBatchInterval:(double)arg1 batchItemsLimit:(unsigned long long)arg2;
- (id)init;

@end

