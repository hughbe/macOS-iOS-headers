//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXMachTransport : DTXTransport
{
    unsigned int _receivePort;
    unsigned int _sendPort;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSObject<OS_dispatch_source> *_listenSource;
    NSObject<OS_dispatch_source> *_deadPortSource;
    CDUnknownBlockType _disconnectBlock;
    struct DTXMachMessage *_sendBuffer;
    unsigned int _bufferedLength;
}

+ (id)fileDescriptorHandshakeWithSendPort:(unsigned int)arg1;
+ (id)fileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;
+ (id)schemes;
- (void).cxx_destruct;
- (id)localAddresses;
- (void)disconnect;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)serializedXPCRepresentation;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithReceiveRight:(unsigned int)arg1 sendRight:(unsigned int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (BOOL)_setupWithSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;

@end

