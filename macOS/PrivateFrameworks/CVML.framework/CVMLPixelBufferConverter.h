//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CVMLPixelBufferConverter : NSObject
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _rasterWidth;
    unsigned long long _rasterHeight;
    long long _orientationToApply;
}

@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) unsigned long long rasterHeight; // @synthesize rasterHeight=_rasterHeight;
@property(readonly) unsigned long long rasterWidth; // @synthesize rasterWidth=_rasterWidth;
@property(readonly) long long orientationToApply; // @synthesize orientationToApply=_orientationToApply;
- (id)newCroppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 error:(id *)arg5;
- (id)newBufferBestFitInWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 error:(id *)arg4;
- (struct CGColorSpace *)_colorspaceForFormat:(unsigned int)arg1;
- (double)_scaleForCropRect:(struct CGRect)arg1 scaledToWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 adjustedCropRect:(struct CGRect *)arg4;
- (double)_scaleForBestFitInWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 resultWidth:(unsigned long long *)arg3 resultHeight:(unsigned long long *)arg4;
- (BOOL)_failWithCVStatus:(int)arg1 format:(unsigned int)arg2 message:(id)arg3 error:(id *)arg4;
- (id)initWithOrientationToApply:(long long)arg1 rasterWidth:(unsigned long long)arg2 rasterHeight:(unsigned long long)arg3;
- (id)init;

@end

