//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, IPAColorProfile, NSNumber;

@interface DGLevelsFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputBlackSrcRGB;
    NSNumber *inputBlackDstRGB;
    NSNumber *inputShadowSrcRGB;
    NSNumber *inputShadowDstRGB;
    NSNumber *inputMidSrcRGB;
    NSNumber *inputMidDstRGB;
    NSNumber *inputHilightSrcRGB;
    NSNumber *inputHilightDstRGB;
    NSNumber *inputWhiteSrcRGB;
    NSNumber *inputWhiteDstRGB;
    NSNumber *inputBlackSrcRed;
    NSNumber *inputBlackDstRed;
    NSNumber *inputShadowSrcRed;
    NSNumber *inputShadowDstRed;
    NSNumber *inputMidSrcRed;
    NSNumber *inputMidDstRed;
    NSNumber *inputHilightSrcRed;
    NSNumber *inputHilightDstRed;
    NSNumber *inputWhiteSrcRed;
    NSNumber *inputWhiteDstRed;
    NSNumber *inputBlackSrcGreen;
    NSNumber *inputBlackDstGreen;
    NSNumber *inputShadowSrcGreen;
    NSNumber *inputShadowDstGreen;
    NSNumber *inputMidSrcGreen;
    NSNumber *inputMidDstGreen;
    NSNumber *inputHilightSrcGreen;
    NSNumber *inputHilightDstGreen;
    NSNumber *inputWhiteSrcGreen;
    NSNumber *inputWhiteDstGreen;
    NSNumber *inputBlackSrcBlue;
    NSNumber *inputBlackDstBlue;
    NSNumber *inputShadowSrcBlue;
    NSNumber *inputShadowDstBlue;
    NSNumber *inputMidSrcBlue;
    NSNumber *inputMidDstBlue;
    NSNumber *inputHilightSrcBlue;
    NSNumber *inputHilightDstBlue;
    NSNumber *inputWhiteSrcBlue;
    NSNumber *inputWhiteDstBlue;
    NSNumber *inputMode;
    IPAColorProfile *_inputWorkingColorProfile;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) IPAColorProfile *inputWorkingColorProfile; // @synthesize inputWorkingColorProfile=_inputWorkingColorProfile;
- (id)outputImage;
- (id)outputImageiPhotoMode;
- (struct CGRect)regionOf:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (void)setDefaults;
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 clearIfNotDefault:(char *)arg3;
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)customAttributes;
- (id)_customAttributesForKey:(id)arg1;
- (id)defaultValueForKey:(id)arg1;
- (BOOL)_key:(id)arg1 containsString:(id)arg2;

@end

