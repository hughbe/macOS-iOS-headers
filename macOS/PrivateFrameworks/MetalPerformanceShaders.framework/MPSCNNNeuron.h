//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalPerformanceShaders/MPSCNNKernel.h>

@interface MPSCNNNeuron : MPSCNNKernel
{
    float _a;
    float _b;
    int _type;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 a:(float)arg2 b:(float)arg3 type:(int)arg4;
- (id)initWithDevice:(id)arg1;

@end

