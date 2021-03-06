//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IASThreadSafeEvent, NSLock, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface IASStreamFIFOQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *_fifoSemaphore;
    NSLock *_queueLock;
    NSMutableArray *_queue;
    IASThreadSafeEvent *_hasDataEvent;
}

- (void).cxx_destruct;
@property(retain) IASThreadSafeEvent *hasDataEvent; // @synthesize hasDataEvent=_hasDataEvent;
@property(retain) NSMutableArray *queue; // @synthesize queue=_queue;
@property(retain) NSLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain) NSObject<OS_dispatch_semaphore> *fifoSemaphore; // @synthesize fifoSemaphore=_fifoSemaphore;
- (id)pop;
- (void)push:(id)arg1;
- (id)initWithDepth:(unsigned long long)arg1;

@end

