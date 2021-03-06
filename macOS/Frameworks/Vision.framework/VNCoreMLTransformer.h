//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class VNCoreMLModel;

__attribute__((visibility("hidden")))
@interface VNCoreMLTransformer : VNDetector
{
    VNCoreMLModel *_model;
}

- (void).cxx_destruct;
@property(readonly) VNCoreMLModel *model; // @synthesize model=_model;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 model:(id)arg2 error:(id *)arg3;
- (BOOL)needsMetalContext;

@end

