//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKCropAnnotationRenderer : AKAnnotationRenderer
{
}

+ (void)_pixelAlignedBaseRect:(struct CGRect *)arg1 interiorRect:(struct CGRect *)arg2 scaleFactor:(double *)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5;
+ (struct CGPath *)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double *)arg3;
+ (struct CGPath *)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (struct CGPath *)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;

@end

