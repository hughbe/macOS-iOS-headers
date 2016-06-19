//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

__attribute__((visibility("hidden")))
@interface MPSImageCompression : MPSUnaryImageKernel
{
    unsigned int _kernelID_single;
    unsigned int _kernelID_dual;
    // Error parsing type: , name: _backgroundColor
    unsigned long long _sourceAlpha;
    unsigned long long _destAlpha;
    unsigned long long _sourcePixelFormat;
    unsigned long long _destinationPixelFormat;
    unsigned char _blockSize[3];
    unsigned long long _destinationAlpha;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long destinationPixelFormat; // @synthesize destinationPixelFormat=_destinationPixelFormat;
@property(readonly, nonatomic) unsigned long long sourcePixelFormat; // @synthesize sourcePixelFormat=_sourcePixelFormat;
@property(readonly, nonatomic) unsigned long long destinationAlpha; // @synthesize destinationAlpha=_destinationAlpha;
@property(readonly, nonatomic) unsigned long long sourceAlpha; // @synthesize sourceAlpha=_sourceAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 srcFormat:(unsigned long long)arg2 srcAlpha:(unsigned long long)arg3 backgroundColor:(double *)arg4 destFormat:(unsigned long long)arg5 destAlpha:(unsigned long long)arg6;
- (id)initWithDevice:(id)arg1;

@end

