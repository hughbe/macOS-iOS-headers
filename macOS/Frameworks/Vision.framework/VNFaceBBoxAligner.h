//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner : VNDetector
{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    BOOL _modelFilesWereMemmapped;
    id <VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (BOOL)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;
- (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 rawBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg4 meanShapeInLumaIntermediateCoordinates:(const vector_f48c7054 *)arg5 rotationAngle:(float)arg6;
- (void)dealloc;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

