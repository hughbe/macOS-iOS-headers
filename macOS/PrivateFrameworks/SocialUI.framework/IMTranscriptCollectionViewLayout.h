//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewLayout.h"

@class IMDisplayLink, NSArray;

@interface IMTranscriptCollectionViewLayout : NSCollectionViewLayout
{
    BOOL _shouldUseDynamicScrolling;
    BOOL _shouldUseRotisserieScrolling;
    BOOL _holdingBoundsInvalidation;
    BOOL _useInitialLayoutAttributesForRotation;
    BOOL _resting;
    BOOL _dynamicsDisabled;
    BOOL _easingUp;
    BOOL _shouldDisplayLinkInvalidateLayout;
    BOOL _hasLoadMore;
    double _anchorYPosition;
    NSArray *_layoutAttributes;
    IMDisplayLink *_displayLink;
    double _prevTimestamp;
    struct CGPoint _targetContentOffset;
    struct CGSize _contentSize;
    struct NSEdgeInsets _marginInsets;
    struct CGRect _visibleBounds;
}

+ (double)interTranscriptItemSpacingForContiguousType:(unsigned char)arg1;
+ (Class)layoutAttributesClass;
@property BOOL hasLoadMore; // @synthesize hasLoadMore=_hasLoadMore;
@property BOOL shouldDisplayLinkInvalidateLayout; // @synthesize shouldDisplayLinkInvalidateLayout=_shouldDisplayLinkInvalidateLayout;
@property BOOL easingUp; // @synthesize easingUp=_easingUp;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property double prevTimestamp; // @synthesize prevTimestamp=_prevTimestamp;
@property struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(retain) IMDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property struct NSEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property BOOL dynamicsDisabled; // @synthesize dynamicsDisabled=_dynamicsDisabled;
@property(getter=isResting) BOOL resting; // @synthesize resting=_resting;
@property(getter=isUsingInitialLayoutAttributesForRotation) BOOL useInitialLayoutAttributesForRotation; // @synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation;
@property(getter=isHoldingBoundsInvalidation) BOOL holdingBoundsInvalidation; // @synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) double anchorYPosition; // @synthesize anchorYPosition=_anchorYPosition;
@property(readonly) BOOL shouldUseRotisserieScrolling; // @synthesize shouldUseRotisserieScrolling=_shouldUseRotisserieScrolling;
@property(readonly) BOOL shouldUseDynamicScrolling; // @synthesize shouldUseDynamicScrolling=_shouldUseDynamicScrolling;
- (void).cxx_destruct;
- (void)reduceMotionSettingChanged;
- (void)updateFrames;
- (void)displayLinkFired:(id)arg1;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (void)updateContentSize;
- (void)invalidateDisplayLink;
- (void)reloadData;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct NSCollectionViewLayoutAttributes *)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct NSCollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct NSCollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct NSCollectionViewLayoutAttributes *)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct NSCollectionViewLayoutAttributes *)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)prepareLayoutForRotisserieScrolling;
- (id)init;
@property(readonly) double bottomTranscriptSpace;
@property(readonly) double largeTranscriptSpace;
@property(readonly) double mediumTranscriptSpace;
@property(readonly) double smallTranscriptSpace;
@property(readonly) double topTranscriptSpace;

@end

