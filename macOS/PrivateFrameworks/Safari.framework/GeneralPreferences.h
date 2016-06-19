//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

#import "BookmarkChooserDelegate.h"

@class NSButton, NSLayoutConstraint, NSPopUpButton, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface GeneralPreferences : PreferencesModule <BookmarkChooserDelegate>
{
    NSTextField *defaultBrowserMessageField;
    NSTextField *homePageField;
    NSButton *useCurrentPageButton;
    NSButton *autoOpenDownloadsCheckbox;
    NSTextField *launchBehaviorLabel;
    NSPopUpButton *launchBehaviorPopUp;
    NSTextField *newWindowBehaviorLabel;
    NSPopUpButton *newWindowBehaviorPopUp;
    NSPopUpButton *newTabBehaviorPopUp;
    NSPopUpButton *downloadLocationPopUp;
    NSPopUpButton *downloadsClearingPolicyPopUp;
    NSPopUpButton *numberOfTopSitesPopUp;
    NSPopUpButton *historyAgeLimitPopUp;
    NSTextField *historyAgeLimitLabel;
    BOOL _confirmingHomePageURL;
    double _forcedWindowHeight;
    BOOL _registeredForLaunchServicesDatabaseChangedNotifications;
    NSView *_mainContentView;
    NSLayoutConstraint *_downloadLocationPopUpButtonMinimizeWidthConstraint;
    NSTextField *_favoritesCollectionTextField;
    NSPopUpButton *_favoritesCollectionPopUpButton;
    NSView *_nonDefaultBrowserInformativeView;
    NSLayoutConstraint *_launchBehaviorLabelBaselineAlignmentConstraint;
    NSLayoutConstraint *_launchBehaviorLabelLeadingSpaceConstraint;
    NSLayoutConstraint *_launchBehaviorLabelHorizontalSpaceConstraint;
    NSLayoutConstraint *_launchBehaviorLabelTrailingAlignmentConstraint;
    NSLayoutConstraint *_launchBehaviorPopupBottomSpaceConstraint;
    NSLayoutConstraint *_launchBehaviorPopupTopSpaceToMainContentViewConstraint;
    NSLayoutConstraint *_launchBehaviorPopupTrailingAlignmentConstraint;
    NSLayoutConstraint *_launchBehaviorPopupLeadingAlignmentConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewTopSpaceConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewTrailingSpaceConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewBottomSpaceToLaunchBehaviorPopupConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewBottomSpaceToNewWindowBehaviorPopupConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewLeadingSpaceConstraint;
    NSLayoutConstraint *_nonDefaultBrowserInformativeViewCenteringConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewCenteringConstraint; // @synthesize nonDefaultBrowserInformativeViewCenteringConstraint=_nonDefaultBrowserInformativeViewCenteringConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewLeadingSpaceConstraint; // @synthesize nonDefaultBrowserInformativeViewLeadingSpaceConstraint=_nonDefaultBrowserInformativeViewLeadingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewBottomSpaceToNewWindowBehaviorPopupConstraint; // @synthesize nonDefaultBrowserInformativeViewBottomSpaceToNewWindowBehaviorPopupConstraint=_nonDefaultBrowserInformativeViewBottomSpaceToNewWindowBehaviorPopupConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewBottomSpaceToLaunchBehaviorPopupConstraint; // @synthesize nonDefaultBrowserInformativeViewBottomSpaceToLaunchBehaviorPopupConstraint=_nonDefaultBrowserInformativeViewBottomSpaceToLaunchBehaviorPopupConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewTrailingSpaceConstraint; // @synthesize nonDefaultBrowserInformativeViewTrailingSpaceConstraint=_nonDefaultBrowserInformativeViewTrailingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nonDefaultBrowserInformativeViewTopSpaceConstraint; // @synthesize nonDefaultBrowserInformativeViewTopSpaceConstraint=_nonDefaultBrowserInformativeViewTopSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorPopupLeadingAlignmentConstraint; // @synthesize launchBehaviorPopupLeadingAlignmentConstraint=_launchBehaviorPopupLeadingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorPopupTrailingAlignmentConstraint; // @synthesize launchBehaviorPopupTrailingAlignmentConstraint=_launchBehaviorPopupTrailingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorPopupTopSpaceToMainContentViewConstraint; // @synthesize launchBehaviorPopupTopSpaceToMainContentViewConstraint=_launchBehaviorPopupTopSpaceToMainContentViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorPopupBottomSpaceConstraint; // @synthesize launchBehaviorPopupBottomSpaceConstraint=_launchBehaviorPopupBottomSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorLabelTrailingAlignmentConstraint; // @synthesize launchBehaviorLabelTrailingAlignmentConstraint=_launchBehaviorLabelTrailingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorLabelHorizontalSpaceConstraint; // @synthesize launchBehaviorLabelHorizontalSpaceConstraint=_launchBehaviorLabelHorizontalSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorLabelLeadingSpaceConstraint; // @synthesize launchBehaviorLabelLeadingSpaceConstraint=_launchBehaviorLabelLeadingSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *launchBehaviorLabelBaselineAlignmentConstraint; // @synthesize launchBehaviorLabelBaselineAlignmentConstraint=_launchBehaviorLabelBaselineAlignmentConstraint;
@property(retain, nonatomic) NSView *nonDefaultBrowserInformativeView; // @synthesize nonDefaultBrowserInformativeView=_nonDefaultBrowserInformativeView;
@property(nonatomic) __weak NSPopUpButton *favoritesCollectionPopUpButton; // @synthesize favoritesCollectionPopUpButton=_favoritesCollectionPopUpButton;
@property(nonatomic) __weak NSTextField *favoritesCollectionTextField; // @synthesize favoritesCollectionTextField=_favoritesCollectionTextField;
@property(nonatomic) __weak NSLayoutConstraint *downloadLocationPopUpButtonMinimizeWidthConstraint; // @synthesize downloadLocationPopUpButtonMinimizeWidthConstraint=_downloadLocationPopUpButtonMinimizeWidthConstraint;
@property(nonatomic) __weak NSView *mainContentView; // @synthesize mainContentView=_mainContentView;
- (void).cxx_destruct;
- (void)_updateFavoritesCollectionPopUpButton;
- (void)_bookmarksChanged:(id)arg1;
- (void)_stopObservingBookmarkChanges;
- (void)_startObservingBookmarkChanges;
- (void)takeFavoritesCollectionFrom:(id)arg1;
- (void)_unregisterForLaunchServicesDatabaseChangedNotification;
- (void)_registerForLaunchServicesDatabaseChangedNotification;
- (void)_defaultWebBrowserMayHaveChanged;
- (void)setSafariAsDefaultBrowser:(id)arg1;
- (void)_setUpDefaultBrowserUI;
- (id)_preferencesWindow;
- (void)_updateUseCurrentPageButton;
- (void)_updateNewWindowTabsMenuItem;
- (void)_updateNewWindowBehaviorViews;
- (void)_updateNewTabBehaviorViews;
- (long long)_userDefaultsTagByPersistingPopUpTagToDefaults:(long long)arg1;
- (long long)_userDefaultsToPopUpTag:(long long)arg1;
- (void)_updateLaunchBehaviorViews;
- (id)constraintsForLaunchBehaviorViews;
- (void)_updateHomePageViews;
- (void)_updateHistoryAgeLimitPopUp;
- (void)_updateNumberOfTopSitesPopUp;
- (void)_updateDownloadLocationMenu;
- (void)_TALRestoresWindowsOnAppLaunchSettingMightHaveChanged:(id)arg1;
- (void)_parentalControlsDidChange;
- (void)_insertFavoritesAndTopSitesBehaviorIntoPopUp:(id)arg1;
- (void)_startPageModeDidChange:(id)arg1;
- (void)_confirmSetHomePageToURLString:(id)arg1;
- (void)_chooseMultiplePages:(id)arg1;
- (void)_chooseDownloadFolderFromFileBrowser:(id)arg1;
- (void)_choseDownloadFolderFromPanel:(id)arg1 returnCode:(long long)arg2;
- (BOOL)_canSetHomePageToCurrentPage;
- (void)toggleAutoOpenDownloads:(id)arg1;
- (void)takeNewWindowBehaviorFrom:(id)arg1;
- (void)takeNewTabBehaviorFrom:(id)arg1;
- (void)takeLaunchBehaviorFrom:(id)arg1;
- (void)takeHomePageFrom:(id)arg1;
- (void)takeHistoryAgeLimitFrom:(id)arg1;
- (void)takeDownloadsClearingPolicyFrom:(id)arg1;
- (void)takeNumberOfTopSitesFrom:(id)arg1;
- (void)setHomePageToCurrentPage:(id)arg1;
- (void)bookmarkChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (BOOL)bookmarkChooser:(id)arg1 shouldEnableCollection:(id)arg2;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (id)helpAnchor;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)initializeFromDefaults;
- (void)dealloc;
- (void)chooseFolderForOpenWithTabs:(id)arg1;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

