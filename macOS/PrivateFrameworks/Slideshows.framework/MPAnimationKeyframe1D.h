//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe1D : MPAnimationKeyframe
{
    double _scalar;
}

+ (id)keyframe1DWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
+ (id)keyframe1DWithScalar:(double)arg1 atTime:(double)arg2;
@property(nonatomic) double scalar; // @synthesize scalar=_scalar;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initKeyframe1DWithScalar:(double)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)keyframe;

@end

