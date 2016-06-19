//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSColor;

@interface SiriUIContentButton : NSButton
{
    BOOL _isRenderingImageTemplate;
    NSColor *_defaultColorForTemplate;
    NSColor *_highlightColorForTemplate;
}

+ (Class)cellClass;
+ (id)buttonWithImageTemplate:(id)arg1;
+ (id)buttonWithImageMask:(id)arg1;
+ (id)buttonWithMediumWeightFont;
+ (id)buttonWithLightWeightFont;
+ (id)button;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)_updateTintColor;
- (void)setHighlightColorForTemplate:(id)arg1;
- (void)setDefaultColorForTemplate:(id)arg1;
- (void)_setIsRenderingImageTemplate:(BOOL)arg1;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (void)setTitle:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setButtonAlternateTitleToColor:(id)arg1;
- (void)_setButtonTitleToColor:(id)arg1;
- (id)_attributedStringFromString:(id)arg1 withColor:(id)arg2;

@end

