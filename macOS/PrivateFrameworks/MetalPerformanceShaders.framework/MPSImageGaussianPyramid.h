//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSImagePyramid.h>

@interface MPSImageGaussianPyramid : MPSImagePyramid
{
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (void)setOffset:(CDStruct_d6af7fc0)arg1;
- (void)setClipRect:(CDStruct_1e3be3a8)arg1;

@end

