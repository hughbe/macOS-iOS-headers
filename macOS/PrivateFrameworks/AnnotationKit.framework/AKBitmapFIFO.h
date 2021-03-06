//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPointFIFO.h>

@class MISSING_TYPE, NSView;

@interface AKBitmapFIFO : CHPointFIFO
{
    char *_bitmapDataPtr;
    struct CGContext *_bitmapContext;
    struct CGImage *_bitmapImage;
    struct CGPath *_cachedPath;
    NSView *_view;
    BOOL _isInLiveDraw;
    BOOL _bitmapSizeHasBeenUpdatedOnceForLiveDraw;
    double _bitmapSizeMultiplier;
    double _shadowRadiusInView;
    struct CGSize _bitmapSize;
    MISSING_TYPE *_lastPoint;
    struct CGRect _unionDirtyRect;
    struct CGAffineTransform _viewToBitmapTransform;
}

- (void).cxx_destruct;
@property struct CGRect unionDirtyRect; // @synthesize unionDirtyRect=_unionDirtyRect;
@property MISSING_TYPE *lastPoint; // @synthesize lastPoint=_lastPoint;
@property BOOL bitmapSizeHasBeenUpdatedOnceForLiveDraw; // @synthesize bitmapSizeHasBeenUpdatedOnceForLiveDraw=_bitmapSizeHasBeenUpdatedOnceForLiveDraw;
@property struct CGSize bitmapSize; // @synthesize bitmapSize=_bitmapSize;
@property double shadowRadiusInView; // @synthesize shadowRadiusInView=_shadowRadiusInView;
@property struct CGAffineTransform viewToBitmapTransform; // @synthesize viewToBitmapTransform=_viewToBitmapTransform;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(nonatomic) BOOL isInLiveDraw; // @synthesize isInLiveDraw=_isInLiveDraw;
@property double bitmapSizeMultiplier; // @synthesize bitmapSizeMultiplier=_bitmapSizeMultiplier;
- (void)_applyDirtyRectToView;
- (void)_addToDirtyRect:(struct CGRect)arg1;
- (void)_addSinglePointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_clearAllBitmapData;
- (void)_createBitmapIfNecessary;
- (void)_createBitmapContextIfNecessary;
- (void)_addPointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_updateBitmapSizeFromViewIfNecessary;
- (struct CGPoint)_convertPointToScreenBacking:(struct CGPoint)arg1;
- (void)_clearCachedPath;
- (struct CGPath *)newPathFromCurrentBitmap;
- (struct CGImage *)currentBitmap;
- (struct CGRect)bitmapRectInView;
- (void)resetDirtyRect;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)teardown;
- (id)initWithFIFO:(id)arg1;

@end

