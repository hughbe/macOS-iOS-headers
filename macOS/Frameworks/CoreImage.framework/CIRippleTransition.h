//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRippleTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputShadingImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIRippleTransition;

@end

