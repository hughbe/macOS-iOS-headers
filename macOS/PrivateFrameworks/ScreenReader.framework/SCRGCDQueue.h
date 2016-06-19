//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface SCRGCDQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (void)initialize;
+ (id)backgroundPriorityGlobalQueue;
+ (id)lowPriorityGlobalQueue;
+ (id)highPriorityGlobalQueue;
+ (id)globalQueue;
+ (id)mainQueue;
- (id)dispatchQueue;
- (void)resume;
- (void)suspend;
- (void)dispatchAndWaitBarrierBlock:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAndWaitBlock:(CDUnknownBlockType)arg1 iterationCount:(unsigned long long)arg2;
- (void)dispatchAndWaitBlock:(CDUnknownBlockType)arg1;
- (void)dispatchAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithDispatchQueue:(id)arg1 type:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initConcurrentQueueWithName:(id)arg1;
- (id)initSerialQueueWithName:(id)arg1;
- (id)init;

@end

