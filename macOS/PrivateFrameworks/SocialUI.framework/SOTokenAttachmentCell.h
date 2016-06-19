//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenAttachmentCell.h"

#import "QLPreviewMenuItemDelegate.h"

@class NSImage, NSString, QLPreviewMenuItem, SOTokenField;

@interface SOTokenAttachmentCell : NSTokenAttachmentCell <QLPreviewMenuItemDelegate>
{
    BOOL _alwaysDisplayBackground;
    id <SOTokenAttachmentCellDelegate> _delegate;
    QLPreviewMenuItem *_previewMenuItem;
    NSImage *_icon;
}

+ (id)_greyTokenTintColor;
+ (id)_greenTokenTintColor;
+ (id)_redTokenTintColor;
@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) QLPreviewMenuItem *previewMenuItem; // @synthesize previewMenuItem=_previewMenuItem;
@property BOOL alwaysDisplayBackground; // @synthesize alwaysDisplayBackground=_alwaysDisplayBackground;
@property(nonatomic) __weak id <SOTokenAttachmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)dealloc;
- (id)_textAttributes;
- (id)_immediateActionAnimationControllerForTokenAttachment:(id)arg1 inTextView:(id)arg2;
- (BOOL)alwaysShowBackground;
- (id)tokenTintColor;
- (struct CGRect)menuItem:(id)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
@property(readonly) SOTokenField *controlTokenField; // @dynamic controlTokenField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

