/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIAlmanacCacheKey : NSObject {
    long long  _altitude;
    long long  _latitude;
    long long  _longitude;
    long long  _time;
}

@property (nonatomic, readonly) long long altitude;
@property (nonatomic, readonly) long long latitude;
@property (nonatomic, readonly) long long longitude;
@property (nonatomic, readonly) long long time;

- (long long)altitude;
- (unsigned long long)hash;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 altitude:(double)arg2 time:(double)arg3;
- (bool)isEqual:(id)arg1;
- (long long)latitude;
- (long long)longitude;
- (bool)matchesLocation:(struct { double x1; double x2; })arg1 altitude:(double)arg2;
- (long long)time;

@end
