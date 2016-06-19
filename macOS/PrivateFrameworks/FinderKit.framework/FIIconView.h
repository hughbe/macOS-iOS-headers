//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImage, NSString;

@interface FIIconView : NSView
{
    struct TNSRef<FI_TNewIconView *, void> _iconView;
}

+ (struct CGSize)idealSizeForTitleFontSize:(double)arg1 iconSize:(unsigned long long)arg2 gridSpacing:(unsigned long long)arg3 isSubtitleEnabled:(BOOL)arg4;
+ (struct CGSize)idealSizeForTitleFontSize:(double)arg1 iconImageSize:(struct CGSize)arg2 gridSpacing:(unsigned long long)arg3 isSubtitleEnabled:(BOOL)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)dragFlockingImageComponents;
- (id)hitTestInIconOrText:(struct CGPoint)arg1;
- (id)hitTestInText:(struct CGPoint)arg1;
- (id)hitTestInIcon:(struct CGPoint)arg1;
- (struct CGRect)titleFrame;
- (struct CGRect)iconFrame;
@property(getter=isDropTarget) BOOL dropTarget; // @dynamic dropTarget;
@property(getter=isSelected) BOOL selected; // @dynamic selected;
@property(getter=isSubtitleEnabled) BOOL subtitleEnabled; // @dynamic subtitleEnabled;
@property unsigned long long gridSpacing; // @dynamic gridSpacing;
@property(copy) NSColor *subtitleFontColor; // @dynamic subtitleFontColor;
@property(copy) NSString *subtitleStr; // @dynamic subtitleStr;
@property(copy) NSColor *titleFontColor; // @dynamic titleFontColor;
@property double titleFontSize; // @dynamic titleFontSize;
@property(copy) NSString *titleStr; // @dynamic titleStr;
@property(copy) NSImage *iconImage; // @dynamic iconImage;
@property unsigned long long iconSize; // @dynamic iconSize;
@property struct CGSize iconImageSize;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)aboutToTearDown;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

