//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AEVConversionUtils : NSObject
{
}

+ (struct CGImage *)createImageFromGrayscaleData:(char *)arg1 ofWidth:(int)arg2 andHeight:(int)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToGrayscale:(struct CGImage *)arg1;
+ (char *)convertCGImageToBufferUsingRGBDevice:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingDataProvider:(struct CGImage *)arg1 usingGCD:(BOOL)arg2 dispatchQueue:(id)arg3;
+ (char *)convertCGImageToBufferUsingGrayDevice:(struct CGImage *)arg1;

@end

