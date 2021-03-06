/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (nonatomic, copy) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (nonatomic, copy) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic) long long content_type;

- (id)contentAsFTBatchTranslationResponse;
- (id)contentAsFTFinalBlazarResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsFTBatchTranslationResponse:(id)arg1;
- (void)setContentAsFTFinalBlazarResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
