//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect
{
    MRImageProvider *mGradientProvider;
    struct CGRect mColor;
}

- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

@end

