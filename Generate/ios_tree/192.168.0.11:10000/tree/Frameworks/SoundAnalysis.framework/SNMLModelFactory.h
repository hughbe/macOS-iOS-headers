/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNMLModelFactory : NSObject

+ (id)createModelOfClass:(Class)arg1;
+ (id)createSoundPrint100kFeatureExtractor;
+ (id)createSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1;
+ (id)createVGGishFeatureExtractor;
+ (id)createVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1;
+ (id)sharedLockedModelOfClass:(Class)arg1;
+ (id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(id /* block */)arg2;
+ (id)sharedLockedSoundPrint100kFeatureExtractor;
+ (id)sharedLockedSoundPrint100kNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1;
+ (id)sharedLockedVGGishFeatureExtractor;
+ (id)sharedLockedVGGishNeuralNetDetectorHeadWithSoundIdentifier:(id)arg1;
+ (Class)soundPrint100kFeatureExtractorModelClass;
+ (Class)soundprint100kModelClassForSoundIdentifier:(id)arg1;
+ (Class)vggishFeatureExtractorModelClass;
+ (Class)vggishModelClassForSoundIdentifier:(id)arg1;

@end
