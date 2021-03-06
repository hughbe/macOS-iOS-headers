//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotificationCenter/NCRemoteViewServiceSubsystem.h>

#import <NotificationCenter/NCWidgetServiceProtocol-Protocol.h>

@class NSObject, NSString, NSViewController;
@protocol NCWidgetHostProtocol, NCWidgetProviding, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NCWidgetServiceSubsystem : NCRemoteViewServiceSubsystem <NCWidgetServiceProtocol>
{
    _Bool _wasEditing;
    NSObject<OS_dispatch_source> *_snapshot_timer;
    long long _widgetMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long widgetMode; // @synthesize widgetMode=_widgetMode;
- (void)_stopEditMode;
- (BOOL)_startEditMode;
@property(readonly, nonatomic) NSViewController<NCWidgetProviding> *_clientController;
- (void)widgetServiceSetEditMode:(long long)arg1;
- (void)remoteViewServiceChangedActiveState:(_Bool)arg1;
- (void)remoteViewServiceRequestSnapshot:(double)arg1;
- (Class)viewControllerClass;
@property(readonly, nonatomic) id <NCWidgetHostProtocol> widgetHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

