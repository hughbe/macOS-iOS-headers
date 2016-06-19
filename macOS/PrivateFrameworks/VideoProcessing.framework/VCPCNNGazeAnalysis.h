//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCPCNNModel;

@interface VCPCNNGazeAnalysis : NSObject
{
    VCPCNNModel *_modelLandmarks;
    VCPCNNModel *_modelEyeOpenness;
    struct CNNData _faceInput;
    struct CNNData _eyeInput;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)cropAndRotateEyeImage:(struct __CVBuffer *)arg1 leftCornerX:(int)arg2 leftCornerY:(int)arg3 rightCornerX:(int)arg4 rightCornerY:(int)arg5;
- (int)detectEyeOpennessForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 eyeOpenness:(char *)arg3;
- (id)init;
- (int)initEyeOpennessModel;
- (int)initLandmarkModel;

@end

