//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ReaderInstallationTarget.h"

@class BookmarksView, BrowserWKView, ContinuousPageView, DimmingView, JavaScriptDialogView, NSClipView, NSHashTable, NSString, ReaderWKView, ResizableContentContainer;

__attribute__((visibility("hidden")))
@interface TabContentView : NSView <ReaderInstallationTarget>
{
    ResizableContentContainer *_resizableContentContainer;
    BookmarksView *_bookmarksView;
    NSView *_readerContainerView;
    ReaderWKView *_readerWKView;
    NSView *_responsiveDesignModeView;
    JavaScriptDialogView *_javaScriptDialogView;
    NSClipView *_startPageClipView;
    DimmingView *_dimmingView;
    NSView *_firstResponderViewBeforeDimmingViewPresentation;
    BrowserWKView *_browserWKView;
    BOOL _isClosed;
    ContinuousPageView *_continuousBrowserPageView;
    NSHashTable *_nativeContentViewsThatWereShownInWindow;
    NSView *_topSitesView;
    NSView *_snapshotView;
    BrowserWKView *_browserWKViewCachedInContinuousMode;
    double _topContentInset;
    NSView *_dockedInspectorView;
}

@property(readonly, nonatomic) NSView *dockedInspectorView; // @synthesize dockedInspectorView=_dockedInspectorView;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(readonly, nonatomic) BrowserWKView *browserWKViewCachedInContinuousMode; // @synthesize browserWKViewCachedInContinuousMode=_browserWKViewCachedInContinuousMode;
@property(readonly, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) BookmarksView *bookmarksView; // @synthesize bookmarksView=_bookmarksView;
@property(readonly, nonatomic) NSView *topSitesView; // @synthesize topSitesView=_topSitesView;
@property(readonly) ReaderWKView *readerWKView; // @synthesize readerWKView=_readerWKView;
@property(readonly) BrowserWKView *browserWKView; // @synthesize browserWKView=_browserWKView;
@property(readonly) ResizableContentContainer *resizableContentContainer; // @synthesize resizableContentContainer=_resizableContentContainer;
- (void).cxx_destruct;
- (id)_browserWindowController;
@property(readonly, nonatomic) BOOL shouldDisableTitlebarBlurringForCurrentContentView;
- (void)_adjustSubviewsForTopContentInset;
- (void)adjustSubviewBannersForTopContentInset;
- (void)_currentContentViewDidChange;
@property(readonly, nonatomic) struct CGRect contentLayoutFrame;
- (void)_replaceBrowserWKViewInDocument:(id)arg1 withWKView:(id)arg2 replaceSubview:(BOOL)arg3;
- (void)replaceBrowserWKViewWithWKView:(id)arg1 replaceSubview:(BOOL)arg2;
- (BOOL)_isInFullScreenMode;
- (BOOL)handleScrollEvent:(id)arg1;
- (void)didTransitionToBrowserWKView:(id)arg1 inContinuousBrowserPageView:(id)arg2;
- (BOOL)isInContinuousMode;
- (void)uninstallContinuousBrowserPageView;
- (void)installContinuousBrowserPageView:(id)arg1;
- (id)accessibilityChildren;
- (void)uninstallReaderView:(id)arg1 closedByUser:(BOOL)arg2;
- (void)installReaderView:(id)arg1;
- (BOOL)readerIsInstalled;
- (void)viewDidMoveToWindow;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)endDeferringWKViewInWindowChanges;
- (void)beginDeferringWKViewInWindowChanges;
- (void)close;
- (void)_invalidateSnapshotViewImageIfNecessary;
- (void)uninstallSnapshotView;
- (void)installSnapshotViewWithImage:(id)arg1 imageScale:(double)arg2 showWhiteOverlay:(BOOL)arg3;
- (void)uninstallJavaScriptDialogViewAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)installJavaScriptDialogView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uninstallModalDialogDimmingViewAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dimContentViewForModalDialogPresentation;
- (void)_didFinishShowingDialog;
- (void)_willShowDialog;
- (void)prepareForModalDialogPresentation;
- (void)_deactivateWebViewAndInstallDimmingView:(id)arg1;
- (BOOL)_isShowingStartPage;
- (void)uninstallTopSitesView;
- (void)installTopSitesView:(id)arg1;
- (void)uninstallResponsiveDesignView;
- (void)uninstallBookmarksView;
- (void)magnifyWithEvent:(id)arg1;
- (void)installResponsiveDesignView:(id)arg1;
- (void)installBookmarksView:(id)arg1;
- (void)_wkViewDidSwipeSnapshotToRect:(struct CGRect)arg1;
- (void)updateCustomSwipeViews;
- (struct CGRect)visualTabPickerThumbnailContentViewVisibleBounds;
- (id)visualTabPickerThumbnailContentView;
- (long long)visualTabPickerThumbnailContentViewType;
- (BOOL)visualTabPickerThumbnailContentViewWasShownInWindow;
- (id)currentContentView;
- (void)adjustSubviews;
- (void)scrollWheel:(id)arg1;
- (BOOL)isOpaque;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andBrowserWKView:(id)arg2 shouldDeferResizingResizableContentContainer:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

