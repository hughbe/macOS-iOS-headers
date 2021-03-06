//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VECSchedulingRequest : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    int _requestID;
    NSObject<OS_dispatch_group> *_doneOrCancelGroup;
    CDUnknownBlockType _taskHandler;
    BOOL _queued;
    BOOL _cancelled;
    CDUnknownBlockType _dellocHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dellocHandler; // @synthesize dellocHandler=_dellocHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *doneOrCancelGroup; // @synthesize doneOrCancelGroup=_doneOrCancelGroup;
@property(readonly, nonatomic) CDUnknownBlockType taskHandler; // @synthesize taskHandler=_taskHandler;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) BOOL isCancelled;
- (void)markAsCompletedOrCancelled:(BOOL)arg1;
- (void)markAsQueued;
- (id)initWithDoneOrCancelGroup:(id)arg1 taskHandler:(CDUnknownBlockType)arg2 dellocHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (void)dealloc;

@end

