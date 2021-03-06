//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebArchiveSharingControllerObjCAdapter : NSObject
{
    struct WebArchiveSharingController *_controller;
    BOOL _registeredForDidLaunchApplicationNotification;
}

+ (id)mailAppBundleIdentifier;
@property(readonly, nonatomic) struct WebArchiveSharingController *controller; // @synthesize controller=_controller;
- (void)_didLaunchApplication:(id)arg1;
- (void)registerForDidLaunchApplicationNotification;
- (void)dealloc;
- (id)initWithWebArchiveSharingController:(struct WebArchiveSharingController *)arg1;

@end

