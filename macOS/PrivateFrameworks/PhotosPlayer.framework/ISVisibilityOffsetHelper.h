//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISVisibilityOffsetComputer.h"

@class NSScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>
{
    long long _direction;
    double _maximumDistance;
    double _maximumDistanceLag;
    NSScrollView *__scrollView;
    struct CGPoint __targetContentOffset;
}

@property(nonatomic, setter=_setTargetContentOffset:) struct CGPoint _targetContentOffset; // @synthesize _targetContentOffset=__targetContentOffset;
@property(retain, nonatomic, setter=_setScrollView:) NSScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property(nonatomic) double maximumDistanceLag; // @synthesize maximumDistanceLag=_maximumDistanceLag;
@property(nonatomic) double maximumDistance; // @synthesize maximumDistance=_maximumDistance;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)getVisibility:(char *)arg1 offset:(double *)arg2 targetVisibilityOffset:(double *)arg3 forView:(id)arg4;
- (struct ISVisibilityRange)_visibilityRangeForRect:(struct CGRect)arg1;
- (void)_updateDirectionIfNeeded;
- (void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

