//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLPixelBufferConverter.h>

@class CIImage;

@interface CVMLPixelBufferCoreImageConverter : CVMLPixelBufferConverter
{
    CIImage *_image;
}

- (void).cxx_destruct;
- (id)newCroppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 error:(id *)arg5;
- (id)newBufferBestFitInWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 error:(id *)arg4;
- (id)_preparePixelBufferWithOriginalToPixelBufferTransform:(struct CGAffineTransform)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned int)arg4 error:(id *)arg5;
- (id)_preparePixelBufferWithImage:(id)arg1 originalToPixelBufferTransform:(struct CGAffineTransform)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 error:(id *)arg6;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2;
- (id)initWithImage:(id)arg1 orientation:(long long)arg2;
- (id)init;

@end

