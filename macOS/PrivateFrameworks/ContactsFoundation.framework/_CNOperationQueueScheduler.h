//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNScheduler.h"

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _CNOperationQueueScheduler : NSObject <CNScheduler>
{
    NSOperationQueue *_queue;
}

+ (id)operationWithQualityOfService:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (double)timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1 qualityOfService:(unsigned long long)arg2;
- (id)initWithQualityOfService:(unsigned long long)arg1;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

