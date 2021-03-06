//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFSCNetworkInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore *_storeRef;
    BOOL _isMonitoringEvents;
    NSString *_interfaceName;
    NSString *_hardwareAddress;
    CDUnknownBlockType _eventHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, copy, nonatomic) NSString *hardwareAddress; // @synthesize hardwareAddress=_hardwareAddress;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)__hardwareAddress;
- (id)__networkInterfaceHardwareAddress;
- (id)__networkStackHardwareAddress;
- (BOOL)isLinkActive;
- (id)IPv6PrefixLengths;
- (id)IPv6Flags;
- (id)IPv6Addresses;
- (id)IPv4SubnetMasks;
- (id)IPv4BroadcastAddresses;
- (id)IPv4Addresses;
- (id)__linkStateConfig;
- (id)__IPv6StateConfig;
- (id)__IPv4StateConfig;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void)__startEventMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;

@end

