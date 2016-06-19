//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoFaceDetector.h>

@class VCPCNNSmileDetector, VCPDCNFaceDetector;

@interface VCPVideoDCNFaceDetector : VCPVideoFaceDetector
{
    VCPDCNFaceDetector *_faceDetector;
    unsigned int _pixelFormatType;
    struct vImageCVImageFormat *_srcFormat;
    struct vImage_CGImageFormat _dstFormat;
    int _lastestFaceID;
    int _numFacesLastFrame;
    struct Rotator *_rotator;
    VCPCNNSmileDetector *_smileDetector;
}

+ (struct CGRect)rotateRect:(struct CGRect)arg1 forAngle:(int)arg2 width:(int)arg3 height:(int)arg4;
+ (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;
- (void).cxx_destruct;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;
- (float)minProcessTimeIntervalInSecs;
- (id)initWithTransform:(struct CGAffineTransform)arg1 cancel:(CDUnknownBlockType)arg2;
- (struct vImageCVImageFormat *)createCVImageFormat:(unsigned int)arg1;
- (void)dealloc;

@end

