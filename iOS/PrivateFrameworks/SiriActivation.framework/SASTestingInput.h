/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SASTestingInput : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _recordedSpeechURL;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, copy) NSURL *recordedSpeechURL;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recordedSpeechURL;
- (void)setRecordedSpeechURL:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(long long)arg1;
- (id)text;
- (long long)type;

@end
