//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSAttributedString, NSImage, NSImageView, NSLayoutConstraint, NSString, NSTextField, PRSImageView, PRSLinkButton, PRSTextView;

@interface PRSDescriptionSliceView : NSView
{
    unsigned long long _textAlignment;
    unsigned long long _imageAlignment;
    NSImage *_image;
    NSTextField *_titleTextField;
    PRSImageView *_imageView;
    PRSImageView *_embeddedImageView;
    NSLayoutConstraint *_embeddedImageViewHeightConstraint;
    NSView *_attributionView;
    NSTextField *_attributionField;
    NSImageView *_attributionImageView;
    PRSLinkButton *_attributionButton;
    PRSTextView *_descriptionTextView;
    NSLayoutConstraint *_descriptionTextViewMinHeightConstraint;
    NSArray *_activeConstraints;
    NSArray *_imageConstraints;
    NSArray *_attributionConstraints;
}

@property(retain) NSArray *attributionConstraints; // @synthesize attributionConstraints=_attributionConstraints;
@property(retain) NSArray *imageConstraints; // @synthesize imageConstraints=_imageConstraints;
@property(retain) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property NSLayoutConstraint *descriptionTextViewMinHeightConstraint; // @synthesize descriptionTextViewMinHeightConstraint=_descriptionTextViewMinHeightConstraint;
@property PRSTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property PRSLinkButton *attributionButton; // @synthesize attributionButton=_attributionButton;
@property NSImageView *attributionImageView; // @synthesize attributionImageView=_attributionImageView;
@property NSTextField *attributionField; // @synthesize attributionField=_attributionField;
@property NSView *attributionView; // @synthesize attributionView=_attributionView;
@property NSLayoutConstraint *embeddedImageViewHeightConstraint; // @synthesize embeddedImageViewHeightConstraint=_embeddedImageViewHeightConstraint;
@property PRSImageView *embeddedImageView; // @synthesize embeddedImageView=_embeddedImageView;
@property PRSImageView *imageView; // @synthesize imageView=_imageView;
@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
@property(retain) NSImage *image;
@property struct CGSize imageMargin;
@property unsigned long long imageAlignment;
@property(retain) NSImage *attributionImage;
@property(retain) NSString *attributionText;
@property(retain) NSAttributedString *descriptionAttributedString;
@property(retain) NSString *descriptionText;
@property(retain) NSString *titleText;
@property unsigned long long textAlignment;
@property BOOL attributionHidden;
@property BOOL descriptionTextHidden;
@property BOOL embeddedImageHidden;
@property BOOL imageHidden;
@property BOOL titleTextHidden;
- (void)updateConstraints;
- (void)_setupImageView;
- (BOOL)shouldUseEmbeddedImage;
- (BOOL)shouldUseImage;
- (id)currentAttributionConstraints;
- (void)clearAttributionConstraints;
- (id)currentImageConstraints;
- (void)clearImageConstraints;
- (id)currentConstraints;
- (void)clearActiveConstraints;
- (id)activeViews;
- (id)_centerAttributionConstraint;
- (id)_trailingAttributionConstraint;
- (id)_leadingAttributionConstraint;
- (id)_rightAttributionConstraint;
- (id)_leftAttributionConstraint;
- (id)_trailingImageConstraint;
- (id)_leadingImageConstraint;
- (id)_constraintBetweenTopView:(id)arg1 bottomView:(id)arg2;
- (id)_constraintBetweenDescriptionAndAttribution;
- (id)_constraintBetweenDescriptionAndImage;
- (id)_constraintBetweenImageAndAttribution;
- (id)_constraintBetweenImageAndDescription;
- (id)_constraintBetweenTitleAndDescription;
- (id)_constraintBetweenTitleAndImage;
- (id)_bottomConstraintWithView:(id)arg1 constant:(unsigned long long)arg2;
- (id)_topConstraintWithView:(id)arg1 constant:(unsigned long long)arg2;
- (void)prepareForReuse;

@end

