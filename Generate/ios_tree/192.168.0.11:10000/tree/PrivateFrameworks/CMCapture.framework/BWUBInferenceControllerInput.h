/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {
    bool  _generateFaceObservations;
    bool  _generateLowResPersonSegmentationMask;
    bool  _generateSemanticSkinMatte;
    bool  _generateSemanticSkyMatte;
    struct opaqueCMSampleBuffer { } * _inferenceImage;
    struct opaqueCMSampleBuffer { } * _propagationImage;
}

@property (nonatomic) bool generateFaceObservations;
@property (nonatomic) bool generateLowResPersonSegmentationMask;
@property (nonatomic) bool generateSemanticSkinMatte;
@property (nonatomic) bool generateSemanticSkyMatte;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*inferenceImage;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*propagationImage;

- (void)addInferenceImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)addPropagationImage:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (bool)generateFaceObservations;
- (bool)generateLowResPersonSegmentationMask;
- (bool)generateSemanticSkinMatte;
- (bool)generateSemanticSkyMatte;
- (struct opaqueCMSampleBuffer { }*)inferenceImage;
- (struct opaqueCMSampleBuffer { }*)propagationImage;
- (void)setGenerateFaceObservations:(bool)arg1;
- (void)setGenerateLowResPersonSegmentationMask:(bool)arg1;
- (void)setGenerateSemanticSkinMatte:(bool)arg1;
- (void)setGenerateSemanticSkyMatte:(bool)arg1;

@end
