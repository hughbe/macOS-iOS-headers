//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject
{
    AVExternalPlaybackMonitorInternal *_ivars;
}

+ (id)longFormVideoExternalPlaybackMonitor;
+ (void)initialize;
@property(readonly, getter=isAirPlayVideoPlaying) BOOL airPlayVideoPlaying;
@property(readonly, getter=isAirPlayVideoActive) BOOL airPlayVideoActive;
- (id)description;
- (void)dealloc;

@end

