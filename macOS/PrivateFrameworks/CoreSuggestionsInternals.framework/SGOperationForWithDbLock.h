//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_group>;

@interface SGOperationForWithDbLock : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    // Error parsing type: AB, name: _started
    // Error parsing type: AB, name: _completed
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)complete;
- (void)waitForStart;
- (void)start;
- (id)init;

@end

