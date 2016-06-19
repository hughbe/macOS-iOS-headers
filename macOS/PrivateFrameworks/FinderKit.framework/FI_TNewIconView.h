//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

#import "NSDraggingDestination.h"

@class NSColor, NSFont, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FI_TNewIconView : FI_TUpdateLayerView <NSDraggingDestination>
{
    struct TNSRef<FI_TBasicImageView *, void> _iconView;
    struct TNSRef<FI_TIconSelectionView *, void> _iconSelectionView;
    struct TNSRef<FI_TBasicImageView *, void> _badgeImageView;
    struct TNSRef<FI_TDesktopInlineProgressView *, void> _inlineProgressView;
    struct TNSRef<FI_TDesktopTitleBubbleView *, void> _titleBubbleView;
    struct TNSRef<FI_TTextField *, void> _subtitleField;
    struct CGSize _iconSize;
    struct TString _titleStr;
    struct TNSRef<NSFont *, void> _titleFont;
    struct TNSRef<NSColor *, void> _titleFontColor;
    struct TString _subtitleStr;
    struct TNSRef<NSFont *, void> _subtitleFont;
    struct TNSRef<NSColor *, void> _subtitleFontColor;
    double _gridSpacing;
    vector_e0f2bd7e _tagColorIndexes;
    struct TNSRef<NSImage *, void> _placeholderTagImage;
    _Bool _inlineProgressNeedsBaselineRefresh;
    _Bool _isTitleOnBottom;
    _Bool _isSelected;
    _Bool _isDropTarget;
    _Bool _isDragItem;
    _Bool _isSubtitleEnabled;
    _Bool _isEditing;
    _Bool _isSpringBlinkingOff;
    _Bool _isSelectionBordered;
    id <TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate> _delegate;
    struct TKeyValueBinder _titleBubbleViewHiddenBinder;
    struct TKeyValueBinder _titleBubbleViewSelectedBinder;
    struct TKeyValueBinder _subtitleFieldHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewHiddenBinder;
    struct TKeyValueBinder _iconSelectionViewIconSizeBinder;
}

+ (id)keyPathsForValuesAffectingSubtitleFieldIsHidden;
+ (id)keyPathsForValuesAffectingTitleBubbleViewIsSelected;
+ (id)keyPathsForValuesAffectingIconSelectionViewIsHidden;
@property(getter=isSpringBlinkingOff) _Bool springBlinkingOff; // @synthesize springBlinkingOff=_isSpringBlinkingOff;
@property(getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (struct TString)accessibilityTitleAttributeValue;
- (struct CGRect)accessibilityFrameAttributeValue;
- (id)accessibilityChildrenAttributeValue;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)configureBadgeImageView:(_Bool)arg1;
- (void)configureSubtitleField;
- (void)configureIconSelectionView;
- (void)layoutTitleAndSubtitleInBounds:(const struct CGRect *)arg1 iconViewFrame:(const struct CGRect *)arg2;
- (void)layout;
- (id)subtitleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateSubtitleFieldAttributes;
- (id)titleFieldAttributesWithParagraphStyleHint:(id)arg1;
- (void)updateTitleFieldAttributes;
- (void)updateInlineProgressBaselineLayout:(const struct CGRect *)arg1;
- (void)setInlineProgressState:(unsigned int)arg1 percentComplete:(unsigned long long)arg2 cancelHandler:(const function_f9feaa7d *)arg3;
- (_Bool)subtitleFieldIsHidden;
- (_Bool)titleBubbleViewIsSelected;
- (_Bool)iconSelectionViewIsHidden;
- (void)updateTrackingAreas;
- (void)clearIconTracking;
- (void)stopIconTracking:(id)arg1;
- (void)startIconTracking:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (_Bool)isIconOrTextInRect:(const struct CGRect *)arg1;
- (id)hitTestInIconOrText:(const struct CGPoint *)arg1;
- (id)_hitTestInIconOrTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInText:(const struct CGPoint *)arg1;
- (id)_hitTestInTextWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTestInIcon:(struct CGPoint)arg1;
- (id)_hitTestInIconWithLocalPoint:(const struct CGPoint *)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_hitTestWithLocalPoint:(const struct CGPoint *)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)titleEditingFrame;
- (struct CGRect)titleDraggingFrame;
- (struct CGRect)titleBubbleFrame;
- (struct CGRect)titleFrame;
- (struct CGRect)_iconFrame;
- (struct CGRect)iconFrame;
- (id)dragFlockingTitleImage:(struct CGRect *)arg1;
- (id)dragFlockingIconImage:(struct CGRect *)arg1;
- (id)_titleViews;
- (_Bool)isLTRLocalization;
@property(getter=isDragItem) _Bool dragItem; // @synthesize dragItem=_isDragItem;
@property(getter=isDropTarget) _Bool dropTarget; // @synthesize dropTarget=_isDropTarget;
@property(getter=isSelectionBordered) _Bool selectionBordered; // @synthesize selectionBordered=_isSelectionBordered;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_isSelected;
@property(getter=isDimmedIcon) _Bool dimmedIcon; // @dynamic dimmedIcon;
@property(getter=isSubtitleEnabled) _Bool subtitleEnabled; // @dynamic subtitleEnabled;
@property(getter=isTitleOnBottom) _Bool titleOnBottom; // @dynamic titleOnBottom;
@property(getter=isIconHidden) _Bool iconHidden; // @dynamic iconHidden;
@property double gridSpacing; // @dynamic gridSpacing;
@property const vector_e0f2bd7e *tagColorIndexes; // @dynamic tagColorIndexes;
@property(copy) NSImage *badgeImage; // @dynamic badgeImage;
@property(copy) NSColor *subtitleFontColor; // @dynamic subtitleFontColor;
- (double)_subtitleFontSize;
- (double)subtitleFontSize;
- (void)updateSubtitleFontForTitleFontChange;
@property(copy) NSFont *subtitleFont;
@property NSString *subtitleStr; // @dynamic subtitleStr;
- (void)setICloudTooltip:(const struct TString *)arg1;
- (void)setICloudBadgeClickHandler:(const function_f9feaa7d *)arg1;
@property(copy) NSColor *titleFontColor; // @dynamic titleFontColor;
- (id)_titleFontColor;
- (double)titleFontSize;
@property(copy) NSFont *titleFont; // @dynamic titleFont;
@property(copy) NSString *titleStr; // @dynamic titleStr;
@property struct CGSize iconSize; // @dynamic iconSize;
@property(copy) NSImage *iconImage; // @dynamic iconImage;
@property id <TDraggingDestinationDelegate><TSpringLoadingDestinationDelegate> delegate; // @dynamic delegate;
- (void)updateParentBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)aboutToTearDown;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

