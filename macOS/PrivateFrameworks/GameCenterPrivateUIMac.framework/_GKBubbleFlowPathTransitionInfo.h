//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKBubbleSet, NSDictionary, NSView;

@interface _GKBubbleFlowPathTransitionInfo : NSObject
{
    double _startTime;
    double _duration;
    GKBubbleSet *_bubbles;
    long long _focusBubbleType;
    NSView *_effectiveView;
    union _GLKVector3 _bubbleStartPositionsByType[12];
    BOOL _couldUseFallbackAnimator;
    NSDictionary *_auxiliaryInfo;
    union _GLKVector3 _bubbleEndPositionsByType[12];
    long long _newlyVisibleBubbles;
}

@property(retain, nonatomic) NSDictionary *auxiliaryInfo; // @synthesize auxiliaryInfo=_auxiliaryInfo;
@property(nonatomic) BOOL couldUseFallbackAnimator; // @synthesize couldUseFallbackAnimator=_couldUseFallbackAnimator;
@property(nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
@property(nonatomic) long long newlyVisibleBubbles; // @synthesize newlyVisibleBubbles=_newlyVisibleBubbles;
@property(nonatomic) GKBubbleSet *bubbles; // @synthesize bubbles=_bubbles;
@property(nonatomic) NSView *effectiveView; // @synthesize effectiveView=_effectiveView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)description;
- (void)dealloc;
- (id)init;

@end

