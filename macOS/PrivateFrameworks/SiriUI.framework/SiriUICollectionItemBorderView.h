//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface SiriUICollectionItemBorderView : NSView
{
    BOOL _shouldFillIn;
    NSColor *_borderColor;
}

@property BOOL shouldFillIn; // @synthesize shouldFillIn=_shouldFillIn;
@property(retain) NSColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end

