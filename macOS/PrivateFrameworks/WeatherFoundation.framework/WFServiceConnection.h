//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WeatherServiceClientProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface WFServiceConnection : NSObject <WeatherServiceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    NSXPCConnection *_xpcConnection;
    id <WeatherServiceProtocol> _serviceProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tasksPendingResponseForTaskIdentifier;
    NSMutableDictionary *_dispatchGroupForTaskIdentifier;
    NSMutableDictionary *_executionStartTimeForTaskIdentifier;
}

+ (id)weatherServiceClientInterface;
+ (id)weatherServiceInterface;
+ (id)allAllowedClasses;
@property(readonly) NSMutableDictionary *executionStartTimeForTaskIdentifier; // @synthesize executionStartTimeForTaskIdentifier=_executionStartTimeForTaskIdentifier;
@property(readonly) NSMutableDictionary *dispatchGroupForTaskIdentifier; // @synthesize dispatchGroupForTaskIdentifier=_dispatchGroupForTaskIdentifier;
@property(readonly) NSMutableDictionary *tasksPendingResponseForTaskIdentifier; // @synthesize tasksPendingResponseForTaskIdentifier=_tasksPendingResponseForTaskIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <WeatherServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue; // @synthesize internalStateQueue=_internalStateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)serviceDidReceiveResponse:(id)arg1;
- (void)taskIdentifier:(CDUnknownBlockType)arg1;
- (void)_onQueueInvalidateConnection:(id)arg1;
- (void)_onQueueOpenConnection;
- (void)_handleRemoteObjectProxyError:(id)arg1;
- (void)invalidate;
- (void)enqueueRequest:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)enqueueRequest:(id)arg1;
- (void)accessServiceWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

