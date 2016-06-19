//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface RDFaceDetectionResult : NSObject <NSSecureCoding>
{
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
    double _leftEyeX;
    double _leftEyeY;
    double _rightEyeX;
    double _rightEyeY;
}

+ (BOOL)supportsSecureCoding;
@property double rightEyeY; // @synthesize rightEyeY=_rightEyeY;
@property double rightEyeX; // @synthesize rightEyeX=_rightEyeX;
@property double leftEyeY; // @synthesize leftEyeY=_leftEyeY;
@property double leftEyeX; // @synthesize leftEyeX=_leftEyeX;
@property double size; // @synthesize size=_size;
@property double centerY; // @synthesize centerY=_centerY;
@property double centerX; // @synthesize centerX=_centerX;
@property long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

