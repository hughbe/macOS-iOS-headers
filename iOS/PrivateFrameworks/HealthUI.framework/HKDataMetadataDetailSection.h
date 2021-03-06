/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {
    HKDisplayTypeController * _displayTypeController;
    HKDataMetadataDataSource * _metadataDataSource;
    NSObject<HKDataMetadataObject> * _object;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) NSObject<HKDataMetadataObject> *object;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (void)_loadMetadataValues;
- (id)displayTypeController;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)initWithWorkoutEvent:(id)arg1;
- (id)object;
- (id)unitController;

@end
