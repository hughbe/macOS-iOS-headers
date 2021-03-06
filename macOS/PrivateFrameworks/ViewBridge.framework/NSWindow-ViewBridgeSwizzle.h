//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface NSWindow (ViewBridgeSwizzle)
- (double)swizzledBackingScaleFactor;
- (BOOL)swizzledMakeFirstResponder:(id)arg1;
- (void)swizzledShake;
- (void)swizzledSetCursorForMouseLocation:(struct CGPoint)arg1;
- (BOOL)swizzledCanBecomeKeyWindow;
- (void)swizzledSendEvent:(id)arg1;
- (id)swizzledAccessibilityAttributeValue:(id)arg1;
- (BOOL)swizzledAccessibilityIsIgnored;
- (void)swizzledOrderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)_addViewServiceNameToTitleOfColorPanel:(long long)arg1;
- (struct CGRect)swizzledConstrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)swizzledEndSheet:(id)arg1 returnCode:(long long)arg2;
- (void)swizzledEndSheet:(id)arg1;
- (void)endRemoteSheet:(id)arg1;
- (void)swizzledBeginCriticalSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)swizzledBeginSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginLocalSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 isCritical:(BOOL)arg3;
- (void)swizzledHierarchyDidChangeInView:(id)arg1;
- (void)swizzledSetStyleMask:(unsigned long long)arg1;
- (unsigned long long)swizzledStyleMask;
- (void)swizzledSetHidesOnDeactivate:(BOOL)arg1;
- (id)swizzledOrderedDrawerAndWindowKeyLoopGroupingViews;
- (void)swizzledAdjustWindowToScreen;
- (void)swizzledSetEventMask:(long long)arg1;
- (void)swizzledSetMouseMovedEventsEnabled:(BOOL)arg1;
- (id)swizzledWindowForSheetMovementAndOrderingGroups;
- (void)swizzledSetFrameCommon:(struct CGRect)arg1 display:(BOOL)arg2 stashSize:(BOOL)arg3;
- (void)swizzledDragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (void)swizzledRemoveChildWindow:(id)arg1;
- (void)swizzledAddChildWindow:(id)arg1 ordered:(long long)arg2;
@end

