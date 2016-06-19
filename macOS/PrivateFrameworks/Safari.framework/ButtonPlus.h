//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSCursor, NSImage;

__attribute__((visibility("hidden")))
@interface ButtonPlus : NSButton
{
    BOOL _ignoresFirstMouse;
    BOOL _superviewIsFocusRingClipAncestor;
    unsigned long long _lastMouseDownModifierFlags;
    NSImage *_imageForNonMainWindow;
    NSCursor *_customCursor;
}

@property(retain, nonatomic) NSCursor *customCursor; // @synthesize customCursor=_customCursor;
@property(nonatomic) BOOL superviewIsFocusRingClipAncestor; // @synthesize superviewIsFocusRingClipAncestor=_superviewIsFocusRingClipAncestor;
@property(retain, nonatomic) NSImage *imageForNonMainWindow; // @synthesize imageForNonMainWindow=_imageForNonMainWindow;
@property(readonly, nonatomic) unsigned long long lastMouseDownModifierFlags; // @synthesize lastMouseDownModifierFlags=_lastMouseDownModifierFlags;
- (void).cxx_destruct;
- (id)_focusRingClipAncestor;
- (void)setAcceptsFirstMouse:(BOOL)arg1;
- (void)resetCursorRects;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

