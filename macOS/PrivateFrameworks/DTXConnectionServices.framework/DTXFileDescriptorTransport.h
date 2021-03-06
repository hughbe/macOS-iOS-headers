//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXFileDescriptorTransport : DTXTransport
{
    int _inFD;
    int _outFD;
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    int _outputWaitKQ;
    NSObject<OS_dispatch_source> *_inputSource;
    CDUnknownBlockType _inputReaderBlock;
    CDUnknownBlockType _disconnectBlock;
}

- (void).cxx_destruct;
- (unsigned int)supportedDirections;
- (void)disconnect;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)serializedXPCRepresentation;
- (void)dealloc;
- (id)initWithXPCRepresentation:(id)arg1;
- (void)setupWithIncomingDescriptor:(int)arg1 outgoingDescriptor:(int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;
- (int)_createWriteKQueue:(int)arg1;
- (id)_createReadSource:(int)arg1;
- (id)initWithIncomingFileDescriptor:(int)arg1 outgoingFileDescriptor:(int)arg2 disconnectBlock:(CDUnknownBlockType)arg3;
- (id)initWithIncomingFilePath:(id)arg1 outgoingFilePath:(id)arg2 error:(id *)arg3;
- (id)init;

@end

