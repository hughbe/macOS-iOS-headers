//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCAMLBezierData, MRCroppingSprite, MRImage, MRTextRenderer, NSMutableArray, NSMutableDictionary;

@interface MREffectShatterText : MREffect
{
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    MRCroppingSprite *mTextSprite;
    NSMutableArray *mMasks;
    BOOL mIsLoaded;
    NSMutableDictionary *mLayout;
    MRImage *mRenderedTextImage;
    BOOL mIsTitle;
    MRCAMLBezierData *mCurves[2];
    double mValues[3];
    double mKeyTimes[3];
}

- (void)_renderSublayer:(id)arg1 layerCount:(long long)arg2 atTime:(double)arg3 inContext:(id)arg4 withArguments:(id)arg5;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

