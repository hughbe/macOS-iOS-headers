//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface ThreadedWorkUnit : NSObject
{
    id _delegate;
    BOOL _kill;
    BOOL _inProgress;
    double _timeout;
    NSTimer *_timeoutTimer;
    BOOL _done;
}

@property(readonly, nonatomic) BOOL done; // @synthesize done=_done;
@property(readonly, nonatomic) BOOL inProgress; // @synthesize inProgress=_inProgress;
@property id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)stopWatchingThread;
- (void)_stopWatchingThread;
- (void)startThread;
- (void)_workerThreadFinished;
- (void)_timedOut;
- (void)_workerThread;
- (void)_doSendDone;
- (void)_threadedDoStart;
- (void)dealloc;
- (id)init;
- (void)_setTimeoutTimer;
- (void)_timeoutHit:(id)arg1;
- (void)_clearTimeoutTimer;

@end

