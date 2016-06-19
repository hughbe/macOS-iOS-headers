//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class CALayer, CAShapeLayer;

@interface FMAnnotationView : MKAnnotationView
{
    BOOL _shouldPreventLargeAnnotationState;
    BOOL _isDelayed;
    BOOL _isShowingLargeSelectedAnnotation;
    BOOL _hasPhotoImage;
    CAShapeLayer *_smallRingLayer;
    CAShapeLayer *_largeRingLayer;
    CALayer *_smallCircleLayer;
    CALayer *_largeCircleLayer;
    CALayer *_locationOuterLayer;
    CALayer *_locationInnerLayer;
    CALayer *_smallPersonImageLayer;
    CALayer *_largePersonImageLayer;
}

+ (BOOL)_followsTerrain;
+ (void)setShouldMaskLayer:(BOOL)arg1;
+ (void)setLargeAnnotationBorderVisible:(BOOL)arg1;
+ (void)setImagePadding:(double)arg1;
@property(nonatomic) BOOL hasPhotoImage; // @synthesize hasPhotoImage=_hasPhotoImage;
@property(nonatomic) BOOL isShowingLargeSelectedAnnotation; // @synthesize isShowingLargeSelectedAnnotation=_isShowingLargeSelectedAnnotation;
@property(retain, nonatomic) CALayer *largePersonImageLayer; // @synthesize largePersonImageLayer=_largePersonImageLayer;
@property(retain, nonatomic) CALayer *smallPersonImageLayer; // @synthesize smallPersonImageLayer=_smallPersonImageLayer;
@property(retain, nonatomic) CALayer *locationInnerLayer; // @synthesize locationInnerLayer=_locationInnerLayer;
@property(retain, nonatomic) CALayer *locationOuterLayer; // @synthesize locationOuterLayer=_locationOuterLayer;
@property(retain, nonatomic) CALayer *largeCircleLayer; // @synthesize largeCircleLayer=_largeCircleLayer;
@property(retain, nonatomic) CALayer *smallCircleLayer; // @synthesize smallCircleLayer=_smallCircleLayer;
@property(retain, nonatomic) CAShapeLayer *largeRingLayer; // @synthesize largeRingLayer=_largeRingLayer;
@property(retain, nonatomic) CAShapeLayer *smallRingLayer; // @synthesize smallRingLayer=_smallRingLayer;
@property(nonatomic) BOOL isDelayed; // @synthesize isDelayed=_isDelayed;
@property(nonatomic) BOOL shouldPreventLargeAnnotationState; // @synthesize shouldPreventLargeAnnotationState=_shouldPreventLargeAnnotationState;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
@property(retain, nonatomic) id <FMAnnotation><MKAnnotation> annotation; // @dynamic annotation;
- (void)_setupSpringActions;
- (void)_updateAnnotationStyle;
- (void)_transitionToNewSize:(BOOL)arg1;
- (void)_selectionWasUpdated:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTintColor:(id)arg1;
- (void)animateDelayedAnimation;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (void)updateStyleForAnnotation:(id)arg1;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

