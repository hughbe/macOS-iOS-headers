//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessMonitorObserverConnection-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface RBProcessMonitorObserverConnection : NSObject <RBProcessMonitorObserverConnection>
{
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
- (void)sendMessage:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

