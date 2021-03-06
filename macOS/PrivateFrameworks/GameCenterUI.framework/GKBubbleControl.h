//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class GKBubbleView, MISSING_TYPE, NSLayoutConstraint, NSString, NSView;

@interface GKBubbleControl : NSControl <NSCopying>
{
    BOOL _animatingIn;
    BOOL _animateOnTouch;
    GKBubbleView *_bubbleView;
    NSView *_contentView;
    NSString *_debuggingTag;
    double _maximumDimension;
    NSLayoutConstraint *_maxHeightConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
    id _bubbleTarget;
    SEL _bubbleAction;
}

+ (double)maximumDimensionBasedOnDeviceAdjustForTallness:(BOOL)arg1;
+ (double)maximumDimensionWhenContainedInViewWithSize:(struct CGSize)arg1;
@property SEL bubbleAction; // @synthesize bubbleAction=_bubbleAction;
@property id bubbleTarget; // @synthesize bubbleTarget=_bubbleTarget;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maxWidthConstraint; // @synthesize maxWidthConstraint=_maxWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maxHeightConstraint; // @synthesize maxHeightConstraint=_maxHeightConstraint;
@property(nonatomic) BOOL animateOnTouch; // @synthesize animateOnTouch=_animateOnTouch;
@property(nonatomic) double maximumDimension; // @synthesize maximumDimension=_maximumDimension;
@property(retain, nonatomic) NSString *debuggingTag; // @synthesize debuggingTag=_debuggingTag;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) GKBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)hitTest:(struct CGPoint)arg1;
- (id)pathForHitTesting;
- (id)description;
- (void)setHidden:(BOOL)arg1;
@property(nonatomic) long long bubbleType;
- (id)contentsWrapperView;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) double moveAnimationRangeMultiplier;
@property(readonly, nonatomic) struct CGSize projectedContentSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (MISSING_TYPE *)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2 andSuperviewSize:(struct CGSize)arg3;
- (MISSING_TYPE *)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
- (MISSING_TYPE *)worldPositionForScreenFrame:(struct CGRect)arg1 assumingSuperviewSize:(struct CGSize)arg2;
- (MISSING_TYPE *)worldPositionForScreenFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) MISSING_TYPE *worldSize;
@property(nonatomic) MISSING_TYPE *worldPosition;
@property(nonatomic) struct CGRect screenFrame;
- (void)setScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize screenSize;
@property(readonly, nonatomic) struct CGPoint screenPosition;
@property(readonly, nonatomic, getter=isSharedBubble) BOOL sharedBubble;
- (void)bounceAfterDelay:(double)arg1 fromZ:(double)arg2 toZ:(double)arg3;
- (BOOL)bouncing;

@end

