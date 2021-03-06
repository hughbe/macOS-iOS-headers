//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWiFi/CWFPublicWiFiXPCEventProtocol-Protocol.h>
#import <CoreWiFi/CWFXPCEventProtocol-Protocol.h>

@class NSMutableDictionary;
@protocol CWFXPCEventProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocol, CWFPublicWiFiXPCEventProtocol>
{
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventAckMap;
    id <CWFXPCEventProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property id <CWFXPCEventProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receivedXPCEvent:(id)arg1;
- (void)__acknowledgeEventWithUUID:(id)arg1;
- (id)init;

@end

