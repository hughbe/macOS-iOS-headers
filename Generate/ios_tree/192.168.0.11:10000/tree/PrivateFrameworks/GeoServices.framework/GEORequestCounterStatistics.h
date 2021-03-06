/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterStatistics : NSObject <NSSecureCoding> {
    unsigned long long  _bytesReceived;
    unsigned long long  _bytesTransmitted;
    NSMutableDictionary * _resultCounts;
}

@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (nonatomic, readonly) unsigned long long bytesTransmitted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bytesReceived;
- (unsigned long long)bytesTransmitted;
- (unsigned long long)countForResult:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementBytesReceived:(unsigned long long)arg1;
- (void)incrementBytesTransmitted:(unsigned long long)arg1;
- (void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
