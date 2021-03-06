//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVOutputContextCommunicationChannelDelegate, AVOutputContextImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputContextImpl> impl;
    unsigned long long outputDeviceFeatures;
    int applicationPID;
    BOOL applicationPIDWasSet;
    id <AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;
}

- (void).cxx_destruct;

@end

