//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPImageDescriptor.h>

@interface VCPImageDescriptorHistograms : VCPImageDescriptor
{
    float *_featureVector;
}

- (int)computeDistanceWith:(id)arg1 distance:(float *)arg2;
- (int)computeRegionHistogram:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 histogram:(float *)arg5;
- (int)computeFeature:(struct __CVBuffer *)arg1;
- (void)dealloc;
- (id)initWithImage:(struct __CVBuffer *)arg1;

@end

