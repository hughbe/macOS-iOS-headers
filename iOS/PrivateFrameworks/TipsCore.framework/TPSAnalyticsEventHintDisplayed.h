/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventHintDisplayed : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _contentID;
    NSString * _context;
    unsigned long long  _displayCount;
    unsigned long long  _displayType;
    TPSExperiment * _experiment;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic) unsigned long long displayCount;
@property (nonatomic, readonly) unsigned long long displayType;
@property (nonatomic, readonly) TPSExperiment *experiment;

+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 experiment:(id)arg5 date:(id)arg6;
- (id)bundleID;
- (id)contentID;
- (id)context;
- (unsigned long long)displayCount;
- (unsigned long long)displayType;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)experiment;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayCount:(unsigned long long)arg1;

@end
