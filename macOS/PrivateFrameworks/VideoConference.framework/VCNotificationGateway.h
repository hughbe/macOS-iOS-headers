//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCNotificationGateway : NSObject
{
    BOOL _ignoreNoRemotePackets;
}

- (BOOL)ignoreNoRemotePackets;
- (void)setIgnoreNoRemotePackets:(BOOL)arg1;
- (id)endMonitor;
- (id)startMonitor;
- (void)dealloc;
- (id)init;

@end

