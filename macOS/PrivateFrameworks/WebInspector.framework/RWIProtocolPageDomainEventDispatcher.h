//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolPageDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)defaultAppearanceDidChangeWithAppearance:(long long)arg1;
- (void)frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)frameStoppedLoadingWithFrameId:(id)arg1;
- (void)frameStartedLoadingWithFrameId:(id)arg1;
- (void)frameDetachedWithFrameId:(id)arg1;
- (void)frameNavigatedWithFrame:(id)arg1;
- (void)loadEventFiredWithTimestamp:(double)arg1;
- (void)domContentEventFiredWithTimestamp:(double)arg1;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

