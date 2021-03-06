//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCRemoteViewServiceProtocol-Protocol.h>
#import <NotificationCenter/PKModularService-Protocol.h>

@class NCRemoteViewService, NCRemoteViewServiceViewController, NSDictionary, NSExtensionContext, NSString;
@protocol NCRemoteViewServiceHostProtocol, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NCRemoteViewServiceSubsystem : NSObject <PKModularService, NCRemoteViewServiceProtocol>
{
    NSObject<OS_dispatch_source> *_inactive_timer;
    _Bool _exitOnIdle;
    _Bool _activeForSnapshotOnly;
    CDUnknownBlockType _deferredReadyBlock;
    unsigned int _deferredDisplayID;
    _Bool _active;
    NCRemoteViewServiceViewController *_viewController;
    NSDictionary *_configuration;
    unsigned long long _appearance;
    NSExtensionContext *_currentExtensionContext;
    NCRemoteViewService *_viewService;
    struct CGSize _maxSize;
    struct NSEdgeInsets _marginInsets;
}

+ (void)unregisterService:(id)arg1;
+ (id)serviceForContext:(id)arg1;
+ (id)anyService;
+ (id)initForPlugInKit;
- (void).cxx_destruct;
@property _Bool active; // @synthesize active=_active;
@property __weak NCRemoteViewService *viewService; // @synthesize viewService=_viewService;
@property __weak NSExtensionContext *currentExtensionContext; // @synthesize currentExtensionContext=_currentExtensionContext;
@property(readonly) unsigned long long appearance; // @synthesize appearance=_appearance;
@property(readonly) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly) struct NSEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(readonly) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (void)_getSnapshotResult:(unsigned long long)arg1;
- (void)_sendSnapshotResult:(id)arg1 scale:(double)arg2 result:(unsigned long long)arg3;
- (void)_exitOnTimeout;
- (void)remoteViewServiceDestorySnippet;
- (void)remoteViewServiceExitOnIdle;
- (void)remoteViewServiceSimulateCrash;
- (void)remoteViewServiceRequestDebugSnapshot:(CDUnknownBlockType)arg1;
- (void)remoteViewServiceRequestSnapshot:(double)arg1;
- (void)remoteViewServiceDeactivateNow;
- (void)remoteViewServiceChangedDisplay:(unsigned int)arg1;
- (void)remoteViewServiceChangedActiveState:(_Bool)arg1;
- (void)remoteViewServiceReadyForDisplay:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)remoteViewServiceConfigure:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) id <NCRemoteViewServiceHostProtocol> host;
@property(readonly, nonatomic) NCRemoteViewServiceViewController *viewController; // @synthesize viewController=_viewController;
- (void)installViewControllerInWindow:(id)arg1;
- (Class)viewControllerClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

