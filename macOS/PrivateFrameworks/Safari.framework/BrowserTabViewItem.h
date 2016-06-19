//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTabViewItem.h"

#import "DelayedPopUpRolloverImageButtonDelegate.h"
#import "FormTextStatusWatcherDelegate.h"
#import "TabBarViewItem.h"

@class BrowserWKView, BrowserWindowController, ContinuousReadingListViewController, DelayedPopUpRolloverImageButton, NSArray, NSColor, NSImage, NSMutableArray, NSSet, NSString, NSTimer, NSURL, NSUUID, SearchState, TabContentView;

__attribute__((visibility("hidden")))
@interface BrowserTabViewItem : NSTabViewItem <DelayedPopUpRolloverImageButtonDelegate, FormTextStatusWatcherDelegate, TabBarViewItem>
{
    BrowserWKView *_wkView;
    struct RefPtr<Safari::BrowserTab> _browserTab;
    struct RefPtr<Safari::WebPageProxy> _webPageProxy;
    struct RefPtr<Safari::ReaderControllerProxy> _readerControllerProxy;
    BOOL _didFireOpenEvent;
    BOOL _didFireCloseEvent;
    NSMutableArray *_accessoryViews;
    NSString *_urlFromScript;
    unsigned long long _nextVisibleContentsRequestIdentifier;
    struct HashMap<unsigned long long, std::__1::pair<JSRetainPtr<OpaqueJSContext *>, OpaqueJSValue *>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<std::__1::pair<JSRetainPtr<OpaqueJSContext *>, OpaqueJSValue *>>> _visibleContentsRequestCallbacks;
    DelayedPopUpRolloverImageButton *_muteButton;
    NSTimer *_siteIconUpdateTimer;
    id _siteIconRequestToken;
    BOOL _pinned;
    BOOL _showingMuteButton;
    int _muteButtonState;
    BrowserWindowController *_browserWindowController;
    TabContentView *_tabContentView;
    NSUUID *_uuid;
    NSString *_fullLabel;
    NSString *_editedUnifiedFieldString;
    SearchState *_lastSearchState;
    NSString *_templateIconHost;
    NSURL *_pinnedPageURL;
    NSString *_pinnedPageTitle;
    BrowserTabViewItem *_representedPinnedTab;
    NSImage *_highlightedImage;
    NSColor *_themeColor;
    ContinuousReadingListViewController *_continuousReadingListViewController;
}

+ (id)findTabInAnyWindowWithUUID:(id)arg1;
+ (id)findTabForContentViewController:(const struct BrowserContentViewController *)arg1;
+ (id)findTabForPage:(const struct Page *)arg1;
@property(nonatomic) int muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property(nonatomic, getter=isShowingMuteButton) BOOL showingMuteButton; // @synthesize showingMuteButton=_showingMuteButton;
@property(retain, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController; // @synthesize continuousReadingListViewController=_continuousReadingListViewController;
@property(retain, nonatomic) NSColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) NSImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) BrowserTabViewItem *representedPinnedTab; // @synthesize representedPinnedTab=_representedPinnedTab;
@property(readonly, copy, nonatomic) NSString *pinnedPageTitle; // @synthesize pinnedPageTitle=_pinnedPageTitle;
@property(readonly, nonatomic) NSURL *pinnedPageURL; // @synthesize pinnedPageURL=_pinnedPageURL;
@property(copy, nonatomic) NSString *templateIconHost; // @synthesize templateIconHost=_templateIconHost;
@property(readonly, copy, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain, nonatomic) SearchState *lastSearchState; // @synthesize lastSearchState=_lastSearchState;
@property(copy, nonatomic) NSString *editedUnifiedFieldString; // @synthesize editedUnifiedFieldString=_editedUnifiedFieldString;
@property(copy, nonatomic) NSString *fullLabel; // @synthesize fullLabel=_fullLabel;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) TabContentView *tabContentView; // @synthesize tabContentView=_tabContentView;
@property(nonatomic) __weak BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_requestFavoritesTitleForMatchingURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelSiteIconUpdate;
- (void)_requestTemplateIconWithURL:(id)arg1 title:(id)arg2;
- (void)_requestTemplateIconWithURL:(id)arg1;
- (void)updateSiteIconNow;
- (void)updateSiteIconSoonIfNecessary;
- (void)transferContentToPlaceholderTab:(id)arg1;
- (void)restorePinnedState:(BOOL)arg1 pinnedPageURL:(id)arg2 pinnedPageTitle:(id)arg3;
@property(readonly, nonatomic, getter=isPlaceholderTab) BOOL placeholderTab;
- (void)_internalSetPinned:(BOOL)arg1;
- (void)formTextStatusWasVerified:(id)arg1;
- (id)menuForDelayedPopUpRolloverImageButton:(id)arg1;
- (void)_muteButtonClicked:(id)arg1;
- (void)mutableMediaPlayingStateDidChange;
- (void)_updateMuteButtonImageAndTooltip;
- (id)cachedWKViewInContinuousMode;
- (void)exitContinuousMode;
- (BOOL)continuousPageViewIsHandlingPageTransitionOrLoadingPageItem;
- (BOOL)isInContinuousMode;
- (id)currentContinuousReadingListPageItem;
- (void)loadContinuousReadingListPageItem:(id)arg1;
- (id)handleSearchTheWebCommand:(id)arg1;
- (id)handleEmailContentsCommand:(id)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)text;
- (id)source;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)rememberCurrentURLString;
- (BOOL)isVisible;
- (unsigned int)orderedIndex;
- (id)title;
- (void)handleCloseScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (void)setLabel:(id)arg1;
- (void)setToolTip:(id)arg1;
- (void)dealloc;
- (void)closeWithoutConfirming;
- (void)_tryToClose;
- (void)tryToCloseWhenReady;
@property(readonly, nonatomic) BOOL canBeRemovedInBrowserDocumentShouldClose;
- (void)removeAccessoryView:(id)arg1;
- (void)insertAccessoryView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAccessoryView:(id)arg1;
- (BOOL)_shouldSuppressExtensionTabEvents;
- (void)didCreateVisibleContentsSnapshot:(const struct Image *)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)getVisibleContentsAsDataURLForContext:(struct OpaqueJSContext *)arg1 callback:(struct OpaqueJSValue *)arg2;
- (BOOL)allowAccessFromExtensionToAnyAssociatedPage:(const struct ExtensionAPIExtension *)arg1;
- (BOOL)allowAccessFromExtension:(const struct ExtensionAPIExtension *)arg1;
- (void)loadURLFromExtension:(id)arg1;
- (void)activateFromExtension;
@property(readonly, nonatomic, getter=isClosed) BOOL closed;
@property(readonly, nonatomic) BOOL isPrivate;
@property(readonly, nonatomic) NSURL *urlForExtensions;
@property(readonly, nonatomic) struct ReaderControllerProxy *readerControllerProxy;
@property(readonly, nonatomic) struct WebPageProxy *page;
- (void)_restoreSessionState:(id)arg1 requestedLabel:(id)arg2 requestedLabelLifetime:(int)arg3 allowJavaScript:(BOOL)arg4;
- (void)restoreFromBrowserTabState:(id)arg1 allowJavaScript:(BOOL)arg2;
- (void)willUnselect;
- (void)didSelect;
- (void)willClose;
- (void)willOpen;
@property(readonly, nonatomic, getter=isFrontmost) BOOL frontmost;
@property(readonly, nonatomic) BrowserWindowController *representedTabBrowserWindowController;
@property(readonly, nonatomic) struct BrowserContentViewController *browserContentViewController;
@property(readonly, nonatomic) TabContentView *representedTabContentView;
- (id)computeTabLabel;
@property(readonly, nonatomic) NSURL *failedOrCurrentURL;
@property(readonly, nonatomic) NSURL *expectedOrCurrentURL;
@property(readonly, copy, nonatomic) NSSet *allWKViews;
@property(readonly, nonatomic) BrowserWKView *wkView;
@property(readonly, nonatomic) struct BrowserTab *browserTab;
- (void)_commonInitWithBrowserWindowController:(id)arg1;
- (id)initWithRepresentedPinnedTab:(id)arg1 browserWindowController:(id)arg2;
- (id)initWithBrowserWindowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *toolTip;

@end

