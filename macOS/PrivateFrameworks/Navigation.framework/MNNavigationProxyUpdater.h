//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationSessionObserver.h"

@class GEONavigationProxy, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationProxyUpdater : NSObject <MNNavigationSessionObserver>
{
    GEONavigationProxy *_navigationProxy;
}

- (void).cxx_destruct;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionWillStart:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

