//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRoundedRectangleGenerator : CIFilter
{
    CIVector *inputExtent;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
- (id)outputImage;

@end

