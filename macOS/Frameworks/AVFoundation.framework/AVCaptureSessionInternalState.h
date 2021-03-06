//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCaptureSessionInternalState : NSObject
{
    struct OpaqueCMIOGraph *_graph;
    struct __CFDictionary *_supportUnitsForInputPorts;
    BOOL _hasAudioMixerNode;
    int _audioMixerNode;
    BOOL _hasAudioMixerFanOutNode;
    int _audioMixerFanOutNode;
    BOOL _masterSynchronizerSet;
    int _candidateMasterSynchronizerNode;
}

- (void)dealloc;
- (void)invalidate;
- (id)init;

@end

