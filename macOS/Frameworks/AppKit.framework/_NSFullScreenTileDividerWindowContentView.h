//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAlignmentFeedbackFilter, NSTrackingArea, _NSFullScreenTileDividerWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileDividerWindowContentView : NSView
{
    NSTrackingArea *_cursorArea;
    double _mouseDownTime;
    BOOL _trackedInArea;
    BOOL _needsLiveResizeCleanup;
    unsigned long long _liveResizeOldPresentationOptions;
    unsigned long long _liveResizeDragPresentationOptions;
    _NSFullScreenTileDividerWindow *_liveResizeDividerWindow;
    NSAlignmentFeedbackFilter *_liveResizeAlignmentFilter;
    struct CGPoint _liveResizeLastMouse;
    struct CGPoint _liveResizeCGMouse;
    BOOL _liveResizeSpacerMoved;
    struct CGPoint _liveResizeDragOffset;
    BOOL _liveResizeAllowSnap;
    double _liveResizeOriginCenterSnapX;
    double _liveResizeLastOriginX;
}

+ (unsigned long long)optionsForLiveResize;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)cleanupLiveResize;
- (void)performDragOnMouseDown:(id)arg1;
- (struct CGPoint)eventLocationRelativeToTileDivider:(id)arg1;
- (double)dividerOriginX;
- (void)performDoubleClickResize:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)resizeCursor;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)dealloc;

@end

