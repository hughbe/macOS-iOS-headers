//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <AppKit/NSGestureRecognizerDelegate-Protocol.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerFavoriteItem : NSCollectionViewItem <NSGestureRecognizerDelegate>
{
    CDUnknownBlockType _selectionHandler;
    NSColor *_displayedColor;
}

@property(copy) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)prepareForReuse;
@property(copy) NSColor *displayedColor; // @synthesize displayedColor=_displayedColor;
- (void)pressItem:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

