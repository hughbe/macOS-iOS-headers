//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "NSMenuDelegate.h"
#import "TNodeObserverProtocol.h"
#import "TPathControlDelegate.h"

@class FI_TBrowserContainerController, FI_TPathControl, NSString, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface FI_TBottomBarController : FI_TViewController <TPathControlDelegate, TNodeObserverProtocol, NSMenuDelegate>
{
    FI_TPathControl *_pathControl;
    NSVisualEffectView *_visualEffectView;
    struct TNodeObserverCocoaBridge *_nodeObserver;
    FI_TBrowserContainerController *_containerController;
    struct TFENodeVector _commonPathVector;
    struct TFENodeVector _observedSelection;
}

+ (double)defaultBottombarHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeChanged:(const struct TFENode *)arg2 inObservedNode:(const struct TFENode *)arg3 property:(unsigned int)arg4;
- (void)scheduleUpdate;
- (void)refresh;
- (void)pathControlDoubleClick:(id)arg1;
- (const struct TFENode *)nodeInPathBar:(id)arg1 forLocation:(struct CGPoint)arg2;
- (const struct TFENode *)nodeForCell:(id)arg1;
- (void)updateSelection:(const struct TFENodeVector *)arg1 forceUpdate:(_Bool)arg2;
- (void)setTarget:(const struct TFENode *)arg1 selection:(const struct TFENodeVector *)arg2;
- (_Bool)commonPathForNode:(const struct TFENode *)arg1 andSelection:(const struct TFENodeVector *)arg2;
- (_Bool)preflightSelection:(const struct TFENodeVector *)arg1 commonParent:(struct TFENode *)arg2;
- (void)updatePathComponents;
- (void)accessibilityDisplayOptionsDidChange;
- (void)clearCommonPathNodes;
- (void)clearObservedSelection;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)dealloc;
- (void)initCommon;
- (id)initWithContainerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

