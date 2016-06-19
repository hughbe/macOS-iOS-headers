//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSystemApplication.h>

@class NSArray, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRSystemUIServerApplication : SCRSystemApplication
{
    NSArray *_menuExtras;
    SCRElement *_menubarForTracking;
}

+ (BOOL)openFauxMenuExtraItem:(id)arg1;
- (void)_focusOnMenuExtras;
- (void)_refreshMenuExtras;
- (id)_menuExtraMenuBar;
- (id)_menuExtraUIMenuBar;
- (void)_resetMenubarForTracking;
- (id)_menubarForTracking;
- (void)dispatchResetMenubarForTracking;
- (id)menuExtras;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)focusOut;
- (BOOL)focusInto:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)trackMenuBarGestureEvent:(id)arg1 request:(id)arg2;
- (id)uiElementForPersistentSpotData:(id)arg1 frontmostOnly:(BOOL)arg2;
- (void)connectToApp;
- (id)focusedWindow;
- (id)uiMenuBar;
- (id)menuBar;
- (BOOL)isSystemUIServerApplication;
- (void)dealloc;

@end

