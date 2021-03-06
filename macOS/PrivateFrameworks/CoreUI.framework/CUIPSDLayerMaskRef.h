//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (struct CGImage *)createCGImageMask;
- (struct CGPath *)newBezierPathAtScale:(double)arg1;
- (struct CGPath *)newBezierPath;
- (struct CGRect)bounds;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isEnabled;
- (BOOL)isLinked;
- (id)layerRef;
- (void)dealloc;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;

@end

