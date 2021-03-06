//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSObject-Protocol.h>

@class NSArray, NSTabView, NSTabViewController, NSTabViewItem, NSView, NSWindow;

@protocol NSTabViewControllerUIProvider <NSObject, NSCoding>
@property NSTabViewController *tabViewController;
- (void)tearDown;
- (void)setUpForTabView:(NSTabView *)arg1 inContainer:(NSView *)arg2;

@optional
- (long long)_associatedTabStyle;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)removeTabView:(NSTabViewItem *)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)insertTabView:(NSTabViewItem *)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)setTabViewItemsFrom:(NSArray *)arg1 to:(NSArray *)arg2 newSelectedIndex:(long long)arg3;
- (void)tabViewContainerWillMoveFromWindow:(NSWindow *)arg1 toWindow:(NSWindow *)arg2;
@end

