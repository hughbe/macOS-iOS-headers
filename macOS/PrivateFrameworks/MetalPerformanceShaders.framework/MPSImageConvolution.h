//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageConvolution : MPSUnaryImageKernel
{
    id <MTLBuffer> wtBuffer;
    id <MTLBuffer> wtBufferh;
    float *wtArray;
    unsigned short *wtArrayh;
    unsigned long long _fWidth;
    unsigned long long _fHeight;
    float _fBias;
    _Bool separable;
    unsigned long long specialFilterType;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_fHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_fWidth;
@property(nonatomic) float bias; // @synthesize bias=_fBias;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (id)initWithDevice_private:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

