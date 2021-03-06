/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXHomeScreenWidgetBlacklistItem : NSObject <ATXHomeScreenWidgetPersonalityProviding, NSSecureCoding> {
    NSDate * _blacklistedDate;
    ATXHomeScreenWidgetPersonality * _personality;
}

@property (nonatomic, readonly) NSDate *blacklistedDate;
@property (nonatomic, readonly) ATXHomeScreenWidgetPersonality *personality;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blacklistedDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeScreenWidgetPersonality:(id)arg1;
- (id)initWithHomeScreenWidgetPersonality:(id)arg1 blacklistedDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)personality;

@end
