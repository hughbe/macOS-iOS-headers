/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration * _dataDetectorConfiguration;
    NSArray * _foundItems;
}

@property (setter=_setFoundItems:, nonatomic, copy) NSArray *foundItems;

- (id)_dataDetectorResultsForSessionResult:(id)arg1;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_setFoundItems:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (id)foundItems;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (void)stop;

@end
