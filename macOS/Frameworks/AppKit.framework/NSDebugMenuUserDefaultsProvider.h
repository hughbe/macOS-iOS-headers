//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDebugMenuItemProvider-Protocol.h>
#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface NSDebugMenuUserDefaultsProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider>
{
    NSMenuItem *_defaultsMenuItem;
    NSMenu *_defaultsMenu;
}

+ (void)registerUserDefaultController:(id)arg1;
+ (id)_userDefaultControllers;
- (BOOL)updateMenu:(id)arg1 withEvent:(id)arg2 withFlags:(unsigned long long)arg3;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)_defaultControllersDidChange:(id)arg1;
- (id)defaultsMenuCreateIfNecessary;
@property(readonly, copy) NSMenuItem *menuItem;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

